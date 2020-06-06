-- setup initial constants
function Initialize()

    monitor_boundaries = {}
    monitor_count = 0

    preview_offset_x = SKIN:ParseFormula(SKIN:GetVariable('previewOffsetX'))
    preview_offset_y = SKIN:ParseFormula(SKIN:GetVariable('previewOffsetY'))
    preview_width = SKIN:GetVariable('previewWidth')
    preview_height = SKIN:GetVariable('previewHeight')
    preview_cur_alignment = { x = preview_offset_x, y = preview_offset_y }

end

-- the sysinfo measure for monitor_count returns zero on the first update cycle. therefore, we must wait to set up the
-- monitor_boundaries table until the second update cycle
function Update()

    overlay_start_x = SKIN:GetVariable('CURRENTCONFIGX')
    overlay_start_y = SKIN:GetVariable('CURRENTCONFIGY')
    
    monitor_count = SKIN:GetMeasure('MeasureNumOfMonitors'):GetValue()
    for i=1,monitor_count do
        monitor_boundaries[i] = { x = {}, y = {} }
        monitor_boundaries[i].x[1] = SKIN:GetVariable('SCREENAREAX@' .. i) - overlay_start_x
        monitor_boundaries[i].x[2] = SKIN:GetVariable('SCREENAREAX@' .. i) + SKIN:GetVariable('SCREENAREAWIDTH@' .. i) - overlay_start_x
        monitor_boundaries[i].y[1] = SKIN:GetVariable('SCREENAREAY@' .. i) - overlay_start_y
        monitor_boundaries[i].y[2] = SKIN:GetVariable('SCREENAREAY@' .. i) + SKIN:GetVariable('SCREENAREAHEIGHT@' .. i) - overlay_start_y
    end

end

-- modifies x offset if the mouse is close enough to an edge, returns the current offset if not
function GetXOffset(mouse_x)

    if monitor_count == 0 then return preview_cur_alignment.x end

    for i=1,monitor_count do
        if mouse_x <= monitor_boundaries[i].x[2] and mouse_x + preview_offset_x + preview_width >= monitor_boundaries[i].x[2] then
            preview_cur_alignment.x =  0 - preview_offset_x - preview_width
        elseif mouse_x >= monitor_boundaries[i].x[1] and mouse_x - preview_offset_x - preview_width <= monitor_boundaries[i].x[1] then
            preview_cur_alignment.x = preview_offset_x
        end
    end

    return preview_cur_alignment.x

end

-- modifies y offset if the mouse is close enough to an edge, returns the current offset if not
function GetYOffset(mouse_y)

    if monitor_count == 0 then return preview_cur_alignment.y end

    for i=1,monitor_count do
        if mouse_y <= monitor_boundaries[i].y[2] and mouse_y + preview_offset_y + preview_height >= monitor_boundaries[i].y[2] then
            preview_cur_alignment.y =  0 - preview_offset_y - preview_height
        elseif mouse_y >= monitor_boundaries[i].y[1] and mouse_y - preview_offset_y - preview_height <= monitor_boundaries[i].y[1] then
            preview_cur_alignment.y = preview_offset_y
        end
    end

    return preview_cur_alignment.y

end