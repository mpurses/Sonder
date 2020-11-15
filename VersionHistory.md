## Download Latest Release: https://github.com/mpurses/Sonder/releases  
### Version History  

#### • 12.01.2020 - v2.6.5: (UPCOMING RELEASE)
- Weather: Fix locations not being found automatically for Weather/TimeZones for some internet connections.  
- Weather: Option to select from 3 more locations if first lat/long is wrong (for when sometimes an incorrect county takes wrong priority over a city).  
- World Map: Right-Click option to "Time Travel" without the settings window. Click & Drag OR Scroll over map to adjust shadow/time. Day Slider below map. Right-Click again to turn off.  
- World Map: Fade edges on side of Map/Night Shadow.  
- World Map: Ability to add up to 15 World Clock Locations.  
- World Map: fix stuck on 12:00 when scrolling for time travel. Month-Day format instead of Day #. Other bug fixes...  
- Recycle Bin: Allow to move skin now when you click&drag anywhere on the skin  
- Calendar: Option to open google calendar to each day  
- EverdayCalendar: Big speed improvements/code simplification, Remove lag when clicking days, other bug fixes.  
 
#### • 11.01.2020 - v2.6.4: 
- Calendar: Fix incorrect days for Monday first users  
- Time: Slightly better reflection gradient  
- World Map: Slightly better CPU usage on some systems  
  
#### • 10.28.2020 - v2.6.3: 
- Time: New Reflection option  
- World Map: Bug fixes for ISS tooltip and update map resolution when scrolling  
- Weather: Changing weather icon color produces more accurate colors now  
  
#### • 10.19.2020 - v2.6.1/2: 
- New Features:  
  - World Map: Day/night shadow + City lights option (moves throughout the day and changes shape based on the day of year)  
- Bug Fixes:  
  - World Map: Fix Time Zones at +/-10 for world clock, other fixes to prevent failing to get time zone data and reduce crashes.  
  - World Map: Fix Rocket data/Radar disappearing when there are too many refreshes.  
  - World Map: Fix Humans on ISS tooltip display  
  - Theme Presets: writing extra lines in Variables.inc.  
  - Theme Presets: Apply correct visualizer when changing themes.  
  - Visualizer: Troubleshooting guide/bug fixes, better math for Lunar preset to fit your screen  
  
#### • 09.24.2020 - v2.6.0: 
- NEW SKIN: Time_Transformable & Date_Transformable - allows Transforming (skewing, scaling, rotating, scaling, moving, etc.)  
- NEW SKIN: Theme Presets (Save & Load your Layouts, Wallpaper, & Custom Settings (colors, size, etc.) all at once. Sunrise/set options.)  
- NEW SKIN: World Clocks on Map (included on ISS Map)  
- Time/Date: Shadow or Glow font effect options  
- Time: Fix Vertical skin variations for different fonts (may need to re-apply font if you are using Vert skin)  
- Date: Fix Date_Handwriting skin skipping Sunday  
- Visualizer: Add Audio Device ID option for users having trouble with it not working (maybe?).  
- ISS: Display next 5 Rocket launches when you hover over Rocket near Florida (new data provider)  
- ISS: Use less CPU, especially if map scale is below 0.33 on some systems  
- All skins have right click options to open their UI settings now.  
- Weather hourly data position fix (Thanks prgbmk)   
- Other bug fixes and tweaks  
  
#### • 08.25.2020 - v2.5.7: 
- Weather: Eliminate unnecessary refreshes when opening weather settings  
- Weather: Fix Language encoding issues and Month font size on WeatherLive  
- Weather: Fix Moon rise/set time errors and calculations  
- Visualizer: Changing Audio settings updates the visualizer immediately now  
- ISS/World Map: World Weather Radar option.  
- ISS: Flight Badge on ISS hover and eliminate all the errors in the log  
    
#### • 08.25.2020 - v2.5.6: 
- Weather: Fix for accidental refreshes happening every minute causing no data to display. (Sunrise/Sunset refresh issue)  
- WeatherLive detail skin fixes.  
- Weather Settings: Fix Google maps icon link not updating to current lat/long  
- Weather Settings: Possibly fix lat/long not writing to file on some computers?  
  
#### • 08.25.2020 - v2.5.5: 
- Fix errors in log and hourly data not showing  
    
#### • 08.22.2020 - v2.5.4: 
- Fix Weather - New way to automatically get your location and lot's of code changes underneath so please report any bugs you encounter. Switch to use Weather.com API (jsmorley's code)  !YOU WILL NEED TO RE-APPLY YOUR UNIT SETTINGS!
- Visualizer: NEW Line-based Visualizer  
- Calendar: Adjust Month Font sizes to be slightly smaller so you can put the calendar on left edge of screen  
- Calendar: Vertical "Y" adjustment option (For the smaller fonts)  
- Date: Fix Date_Handwriting skin's month font location/size  
- More Font options for Time/Date/Calendar:  
  - Sterilict (Spacey/Futuristic),  
  - BankGothic Lt BT (Spacey/Futuristic),  
  - Papyrus (Japanesey/Serenity),  
  - Voluta Script Pro (Cursive/Firefly)  
  
#### • 08.15.2020 - v2.5.3:  
- Settings: Change all accent colors at once setting.  
- Network: bits or Bytes option for Network graph skins (Defaulting to bits now instead of Bytes)  
- Visualizer: Fix Preview mode for Stargazer variations that I broke in the last update.  
- Visualizer: Speed set to 0 on Stargazers actually mean ZERO now  
- Visualizer: Bottom to Top Direction setting for 'Serenity'  
- Visualizer: Fix various Preset saving/applying bugs  
- Visualizer: Refresh on color change fix and lots of other tweaks/fixes under the hood.  
- Clean up Resource folder/code in anticipation of allowing "merging" of skins for next releases (allows you to customize Sonder more w/o deleting your added files). Needed for Visualizer Preset saving, so you will lose them in this update if you do not backup.   
#### • v2.5.2:  
- Further tweaking and clean up of the settings; One thing you might notice/use is Toggling the loading of skins by clicking the "Titles" for each setting.  
- Date: Left/Right/Center Option for Date_horiz  
- Calendar: Fix some fonts getting cut off  
- Visualizer: Save/Load Presets  
- Visualizer: Preview Mode Warning when audio is playing  
- Visualizer: Reduce CPU usage while no audio is playing  
- Visualizer: Sleep Helper (saves even more CPU and lets your computer sleep if Spotify is closed)  
  
#### • v2.5.1:  
- Clean up Visualizer Settings to have more intuitive UI  
- Add "Serenity" Visualizer to complement the forest path wallpaper  
- Update Weather skins for languages that have diacritics to display correctly (Requires latest Rainmeter Beta - uses DecodeCodePoints)  
  
#### • v2.5:  
- Fix Weather data not displaying.  
- New Skin: Dot-based Visualizers, designed by XukaKun (BETA - did not have time to clean up yet b/c pushing update for weather...).  
- New Skin: Wifi toggle utility (see settings for how it works).  
- Include Activenet plugin for System-Advanced skin.  
- 'Don't open window' option for bluetooth toggle.  
- Fix Date Horiz skin from clipping dates that have long text/fonts (Wednesdays in September)  
  
#### • v2.4.5:  
- Add 17 different font options for Time, Date, and Calendar skins for when you get bored of a font and want to switch it up.  
- Change volume, bluetooth, and brightness utilities to be less cpu hungry AND be even more responsive. You can have your cake and eat it too i guess.  
- Update main layout to load at proper locations for all monitor sizes.  
- Pressure rise/fall arrows on current weather tooltips.  
- Add Indonesian language settings  
  
#### • v2.4.4:  
- New Date skin (Weekday)  
- Fix volume/brightness utilities minimizing after single click  
- Fix calendar current date bg color for alpha cross-reference issues  
- Hourly forecast on hover option for EXTD weather skins  
  
#### • v2.4.2/3:   
- New Skins: Utilities for Volume, Brightness, and Bluetooth controls. (Under System folder) (Removed Brightness in default layout with 2.4.3 due to possible Rainmeter crash)  
- Language override option (if you want your skin to have a different language than your system).  
- Fixed System-Advanced skin settings not launching the HWINFO settings window.  
  
#### • v2.4.1:  
- Weather:  
- Units fix for metric users (for current condition icon tooltip) Change to your language or select "English C" again to fix the units.  
- Icon and moon color options.  
- Date format option.  
- Fix for showing moon at night option to properly trigger at sunset & sunrise & on on first load of the computer for the day. One more open case still possible, refresh skin manually to show properly.  
- Fix for temps over 100F.  
- Fix settings not applying for users with spaces in Rainmeter path.  
- Other weather bug fixes/UI tweaks.  
- Calendar:  
- Autotranslate weekdays to system locale  
- Monday first day of week option  
- Extra days option  
- Date:  
- Autotranslate to system locale  
- Case options  
- EverydayCalendar:  
- Fix erroneous refreshes on EverydayCalendar that causes minimized state to pop up above windows.  
  
#### • v2.4:  
- Update Weather skins for the new Weather Channel website data.  
- New Skin - International Space Station Tracker on world map.  
- Option to hide "System" header text  
- New Disk Meters for System-Advanced skin  
- Changed calendar font size from 9 to 10  
- Changed moon color to be lighter  
- Rearanged CPU/GPU items and option to hide VRAM on System-Advanced skin.  
- Month fontface setting  
- Combine 12/24 hour format options from all skins under main Time settings  
- Settings refresh fixes  
- Other bug fixes  
  
#### • v2.3:  
- New Skin - "Global Date"  
- New Skin - Minimal Monthly Calendar  
- Fixed a crash on weather skin Temp Exp change, i think  
- Option to Hide CPU,GPU,RAM Titles  
- Option to only show the moon during the night for the weather skin.  
- Fixed update checking area in settings  
  
#### • v2.2:  
- New Skin: Advanced System Stats for the nerds. Requires HWINFO.  
- System width adjustment setting.  
- Fix/add date color settings for new Date skins.  
- Performance improvements and bug fixes for EverydayHabitCalendar to update correctly.  
- Further unified Settings UI.  
- Fix for update checker  
  
#### • v2.1:   
 New Skins:  
- Everyday Habit Tracker Calendar: Keep track of your daily goals and don't break the chain!  
- New Network variant (graph only) - Default now  
- New Weather Variant (Temp only, hover to expand details)  
- 2 New Date Formats  
- Color Picker to help you choose colors.  
Other Updates:  
- Now you can change the hover background color of skins to any color you want.  
- Cleaned up settings UI and flow.  
- Settings open by default on install to help new users out.  
- Settings: Click the Color Label to open the ColorPicker for that color.  
- Fix Weather font size on some variants.  
  
#### • v2.0.4:  
- New settings to change Date format.  
- Update checker added (via github) when settings window is opened. You will see when there is a new update available with a link to download it.  
- Fix position remembering for System.  
- Weather: remove "AM/PM" on the time skin  
  
#### • v2.0.3: 
- Now you can change pretty much every color in the skin and size scaling for every skin.  
- Clock & Date: Change hour, minute, and date color. Change Clock and Date scale.  
- System: Show just CPU and Memory by default, but options in settings to display main GPU%, Swap, and Core Temp(requires Coretemp: www.alcpu.com/CoreTemp/).  
- Network: fixed text color not linking to change.  
- Recycle Bin: Options to change text color and Bin color.  
- Weather: Options to change text colors. Updated icons from Astroweather for bigger scaling.  
- All: Option to change skin mouse hover color to black or white. And set the transparency to your liking.  
- Two wallpapers included in the skin folder.  
  
#### • v2.0.2:   
- All new unified settings UI for Clock, System, Network, and Recycle Bin.  
- New option to hide settings icon on clock.  
- Ability to scale all the skins now and change text, bar, and network color via the UI instead of editing the ini file.  
- Updated font for System and cleaned up code.  
  
#### • v2.0.1:   
- System & Network updates: Made colors easier to access/change, Renamed labels on system, Added % symbol to Wifi signal strength, Fixed skin error on Network.  
