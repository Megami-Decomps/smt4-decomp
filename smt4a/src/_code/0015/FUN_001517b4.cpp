/* NON_MATCHING: only one block differs: retail lays the key-3 alias dispatch out between the mode-2 and mode-1 tail calls (after the stick-direction code) and zeroes r0 inside both the key-4 and key-3 blocks, while this build keeps all four alias blocks together; every test, call sequence and the tail-call order (cases written 2, 1, 0) otherwise match. */
#include "common.h"

extern "C" {
s32 padButtonRepeat(s32 key);
s32 padButtonIsPressed(s32 key);
s32 slotIsActive(s32 key);
s32 FUN_00164cf4(s32 direction);
s32 buttonHelpIsKindInitialSelection(s32 direction);
s32 FUN_00166fa0(s32 direction);

// The state of one pad button in `mode`: 0 auto-repeat, 1 pressed, 2 released.
static __inline s32 padButtonQuery(s32 button, s32 mode)
{
    s32 result = 0;
    switch (mode) {
    case 0:
        result = padButtonRepeat(button);
        break;
    case 1:
        result = padButtonIsPressed(button);
        break;
    case 2:
        result = slotIsActive(button);
        break;
    }
    return result;
}

// Logical input query: true when `key` is active in `mode`, on the pad button itself, on the pad button
// it shares a function with, or on the stick direction mapped to it.
s32 FUN_001517b4(s32 key, s32 mode)
{
    s32 result = 0;
    s32 stickDirection = result;
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
    } else if (key == 6) {
        result = padButtonQuery(15, mode);
    } else if (key == 4) {
        result = padButtonQuery(13, mode);
    } else if (key == 3) {
        result = padButtonQuery(12, mode);
    }
    if (result != 0) {
        return result;
    }
    if (stickDirection != 0) {
        switch (mode) {
        case 2:
            return FUN_00164cf4(stickDirection);
        case 1:
            return buttonHelpIsKindInitialSelection(stickDirection);
        case 0:
            return FUN_00166fa0(stickDirection);
        }
    }
    return result;
}
}
