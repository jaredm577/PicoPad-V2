I am having problems with the displaying the Tap animation. The desired behaviour is that when turned on the animation cycles through the Idle frames. Once a keypress is recorded it then changes to one of the Tap frames. After the Tap frame it then goes to the Prep frame for a short pause. If further keypresses are recorded during this pause then it replays the Tap and starts the pause again, if no keypresses are recorded during this pause then it reverts back to the Idle state.

Rather than this behaviour the animation cycles through the Idle framses correctly, and when a keypress is detected it instead displays only the Prep frame as is shown in the video below. I have used the some print lines in the code that indicates to me that it is being sent to the Tap animation state, but from what I can tell it just isnt displaying correctly.

This code is based on the excellent project by Pedker (https://github.com/pedker/OLED-BongoCat-Revision/blob/main/bongo.h) and I have attempted to strip out the animation for use in a custom PCB I have designed.

This is the first time I have worked with QMK and have been teaching myself as I stumble through setting up this small macropad so would really appreciate some help.
https://github.com/pedker/OLED-BongoCat-Revision/assets/131953412/a6f5b20d-bd39-48d3-8ae9-5ffd05b857ba
