--[[
    Author: Blu
    Reddit: /u/IamLUG
    Github: https://github.com/BjornLuG

    ------------------------------------------------------------

    Banger.lua
    ~ Bangs multiple bangs at once
    ~ Delay is supported when banging a chain of bangs
    ~ The chain of bangs can be terminated with a single call

    -------------------------------------------------------------

    public functions:
    ~ Bang(tag, bangVariable)
        ~ Executes the chain of bangs
        ~ tag is a string
        ~ bangVariable refers to the name of the variable that contains the bangs, 
          pass this in as a string too

        ~ e.g. (The script measure name is LuaBanger)
            [!CommandMeasure LuaBanger "Bang('start', 'DoStartBang')"]

    ~ Unbang(tag)
        ~ Terminates the banger tagged tag
        ~ tag is a string

        ~ e.g. (The script measure name is LuaBanger)
            [!CommandMeasure LuaBanger "Unbang('start')"]
]]--


--region Rainmeter

function Initialize()
    dt = 0
    prevTime = os.clock()

    bangers = {}
end

function Update()
    dt = (os.clock() - prevTime) * 1000
    prevTime = os.clock()
    
    for _,v in pairs(bangers) do
        for _,b in ipairs(v.bangs) do
            if not b.banged then 
                if b.delay ~= nil then
                    v.counter = v.counter + dt

                    if v.counter >= b.delay then 
                        v.counter = 0
                        b.banged = true
                    else
                        break
                    end
                else
                    SKIN:Bang(b.bang)
                    b.banged = true
                end
            end
        end
    end
end

--endregion

--region Public functions

function Bang(tag, bangVariable)
    local commands = SKIN:GetVariable(bangVariable)
    if commands ~= nil then
        bangers[tag] = 
        {
            counter = 0,
            bangs = SplitCommands(commands)
        }
    end
end

function Unbang(tag)
    if bangers[tag] ~= nil then 
        bangers[tag] = nil
    end
end

--endregion

--region Private functions

function SplitCommands(str)
    local results = {}
    local i = 0
    for part in str:gmatch("%[.-%]") do
        i = i + 1
        
        part = part:sub(2, -2)

        results[i] = 
        {
            bang = part,
            banged = false
        }

        local bangName = GetBangName(part)
        
        if bangName ~= nil and bangName:lower() == "!delay" then
            results[i].delay = GetDelayTime(part)
        end
    end
    return results
end

function GetBangName(str)
    local part = str:match("!.-%S+")
    if part ~= nil then 
        return part
    else
        error("Bang name not found :(")
    end
end

function GetDelayTime(str)
    return tonumber(str:match("%d+"))
end

--endregion