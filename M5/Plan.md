# Plan: The Race

## Story
You're at a red light and a mysterious car pulls up next to you.
You can race it, ignore it, win pinks, -- or not.

## Story map
main_menu
  1 -> choice_no_race
         1 -> choice_floor_it
         2 -> choice_leave_normally
  2 -> choice_race
         1 -> choice_race_pinks
         2 -> choice_race_fun
  3 -> choice_ignore
  4 -> quit

## Functions
- choice_no_race   (starter, I fill it in)
- choice_ignore     (starter, ending)
- choice_race    (new)
- choice_race_fun      (new, ending)
- choice_race_pinks