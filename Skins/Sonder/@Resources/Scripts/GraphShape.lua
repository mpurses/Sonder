-- @author khanhas / reddit.com/user/khanhas
-- small modifications to allow for multiple graphs from one lua file
function Initialize()
    GraphHeight = SELF:GetNumberOption("ShapeHeight")
    GraphWidth = SELF:GetNumberOption("ShapeWidth")
    InputMeasure = SELF:GetOption("InputMeasure")
    TotalData = 100

    Graph_Step = GraphHeight / 100 -- 0 to 100 scale
    Graph_Gap = GraphWidth / TotalData

    Resolution = 2

    DataMeasure = SKIN:GetMeasure(InputMeasure)
		OutputGraph = SELF:GetOption("OutputGraph")

    DataTable = {}
    for i = 1, TotalData do
        DataTable[i] = 0
    end
end

function Graph()
    local curr_data = DataMeasure:GetValue()
    for i = 1, TotalData-1 do
        DataTable[i] = DataTable[i+1]
    end
    DataTable[TotalData] = curr_data

    for i = 1, TotalData-1 do
            if i == 1 then
                line = '0,'..(-DataTable[1]*Graph_Step)
            end
        for j = 1, Resolution do
            line = line .. ' | Lineto '..(Graph_Gap * (i-1) + Graph_Gap * j/Resolution)..','..(-CubicInterpolate(DataTable[i==1 and 1 or i-1],DataTable[i],DataTable[i+1],DataTable[i==TotalData-1 and i+1 or i+1],j/Resolution) * Graph_Step)
        end
    end
		SKIN:Bang('[!SetOption '..OutputGraph..' Graph1 "'..line..' | ClosePath 0"]'
            ..'[!SetOption  '..OutputGraph..' Graph2 "'..line..' | Lineto '..GraphWidth..',0 | Lineto 0,0 | ClosePath 1"]'
            ..'[!UpdateMeter  '..OutputGraph..']')
end

function CubicInterpolate(y0,y1,y2,y3,mu)
   local mu2,a0 = mu*mu, y3-y2-y0+y1
   local a1 = y0-y1-a0
   return (a0*mu*mu2+a1*mu2+(y2-y0)*mu+y1)
end
