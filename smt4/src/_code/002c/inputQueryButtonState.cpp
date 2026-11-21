#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {
u32 padIsButtonRepeat(u32 button);
u32 padIsButtonPressed(u32 button);
s32 buttonHelpIsButtonEnabled(s32 direction);
s32 buttonHelpKindIsTriggered(s32 direction);
s32 buttonHelpKindIsPressed(s32 direction);

/* The state of one pad button in `mode`: 0 auto-repeat, 1 pressed, 2 released. */
static __inline s32 padButtonQuery(s32 button, s32 mode)
{
    s32 result = 0;
    switch (mode) {
    case 0:
        result = padIsButtonRepeat(button);
        break;
    case 1:
        result = padIsButtonPressed(button);
        break;
    case 2:
        result = slotIsActive(button);
        break;
    }
    return result;
}

/* Logical input query: true when `key` is active in `mode`, on the pad button itself, on the pad button
   it shares a function with, or on the stick direction mapped to it. */
s32 inputQueryButtonState(s32 key, s32 mode)
{
    s32 result = 0;
    s32 stickDirection = 0;
    switch (key) {
    case 0:
        stickDirection = 1;
        break;
    case 1:
        stickDirection = 2;
        break;
    case 9:
        stickDirection = 3;
        break;
    case 10:
        stickDirection = 4;
        break;
    case 8:
        stickDirection = 5;
        break;
    case 7:
        stickDirection = 6;
        break;
    }
    result = padButtonQuery(key, mode);
    if (result != 0) {
        return result;
    }
    if (key == 5) {
        result = padButtonQuery(14, mode);
    }
    if (key == 6) {
        result = padButtonQuery(15, mode);
    }
    if (key == 4) {
        result = padButtonQuery(13, mode);
    }
    if (key == 3) {
        result = padButtonQuery(12, mode);
    }
    if (result != 0) {
        return result;
    }
    if (stickDirection != 0) {
        switch (mode) {
        case 2:
            return buttonHelpIsButtonEnabled(stickDirection);
        case 1:
            return buttonHelpKindIsTriggered(stickDirection);
        case 0:
            return buttonHelpKindIsPressed(stickDirection);
        }
    }
    return result;
}
}
