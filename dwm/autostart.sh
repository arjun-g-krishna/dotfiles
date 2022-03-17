#! /bin/bash
lxsession &
picom &
dwmblocks &
/usr/bin/emacs --daemon &

### Uncomment only ONE of the following ###
# uncomment this line to restore last saved wallpaper...
xargs xwallpaper --stretch < ~/.xwallpaper &
# ...or uncomment this line to set a random wallpaper on login
# find /usr/share/backgrounds/dtos-backgrounds/ -type f | shuf -n 1 | xargs xwallpaper --stretch &
