Having problems with the Tap animation. The desired behaviour is that it remains in idle until a keypress is recorded, when it then plays the tap animation and then goes to the prep state.
It then waits in the prep state for further keypresses, and if one is recorded it plays the Tap animation again.
If no keypress is recorded after a certain amount of time it reverts to the idle state.

Rather than this behaviour, when a keypress is recorded it goes to the prep state and does not display the tap animation. Video of this issue is below.

https://github.com/pedker/OLED-BongoCat-Revision/assets/131953412/a6f5b20d-bd39-48d3-8ae9-5ffd05b857ba
