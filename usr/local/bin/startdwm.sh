xidlehook --not-when-fullscreen --not-when-audio \
  --timer 300 \
  'slock' '' &

feh --bg-fill /home/ada/Pictures/sunset.png &
slstatus &
dunst &
picom &

while true; do
    dwm 2> ~/.dwm.log
done
