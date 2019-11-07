# The onth layout
from https://github.com/kbill1993/My-QMK-configs

## What?
A layout for the Planck rev6. Should work on other Plancks, and should be adaptable for similar 4x12s.
This layout is inspired by the default Planck layout by Jack Humbert (default in the folder), but has some additions

## Why?
I've come up with some neat tricks, and thought it would be nice to share.

### Caps lock rebinding
Caps Lock is a rarely used key in a good position. Many people rebind it.
Colemak users rebind it to Backspace, Vim users bind it to Escape, and Emacs users bind it to Control.
I bind it to both Control and Escape. Hold for Control, tap for Escape.
It works a charm in Spacemacs. I'm sure others will love it too

### Backspace?
You know how the Planck has two keys in the bottom centre? The one on the right is space, and the one on the left is now backspace.
I always hated how undoing mistakes took so much effort. Now it's as natural as hitting space.

### How about navigation?
Hold the new Backspace. Suddenly JKL; becomes left/down/up/right. You don't even have to leave the homerow.
What's more, asdf does the same for the mouse. Not as useful, but it comes in handy sometimes.
The 4 keys under jkl; are now left click, right click, scroll down and scroll up.

### I don't have a scroll wheel...
Neither do I. The first 2 keys on the bottom row are now page down and page up.

### Media controls?
Last 4 keys on the bottom row are now volume down, volume up, play/pause and next track.

### I don't like people looking at my screen, anything that could help?
Top right key is bound to win+d, which on Windows and some Linux DEs hides all windows.

### I'm a QWERTY/Colemak/Dvorak guy, any support there?
There are keys bound to switching layouts on the fly.
Adjust + Q, W, and E (or where they are on a QWERTY board) will switch between them respectively.

### Any more shortcuts?
Adjust + top left key = Control + Shift + Escape. Task Manager for Windows
Adjust + top right key = Control + Alt + Delete. Shouldn't need any introduction.
3rd key on the bottom row = Alt + Tab
top left key = hold for alt, press for tab (hence the need for alt+tab on it's own)
Lower/raise + X, C and V = Move window to left side, maximize or right side
Hold backspace + press space = delete

Everything else is loosely based off the default Planck layout.

## Any other considerations
You won't have much luck gaming on a layout like this. Try the Steam Controller.
I use the English(UK) layout as a base. If things seem weird, that's why.
The layout works on a Let's Split, but you'll have to change LAYOUT_planck_grid to whatever it wants.

# Why is it called onth?
Couldn't think of a proper name. Picked a random typo.
