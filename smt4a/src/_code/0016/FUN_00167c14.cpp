/* NON_MATCHING: retail assigns the down snapshot and X coordinate to r5 and r4 respectively; the build swaps them. */
#include "shard/W9_W9Match1_TouchSample.h"

extern "C" {
extern TouchInputSample DAT_006400f8;

// Read touch coordinates for held, pressed, triggered, or released input.
u32 FUN_00167c14(u32 *x, u32 *y, s32 mode)
{
    u32 result = 0;
    u8 down = DAT_006400f8.down;
    u32 touchX = DAT_006400f8.x;
    switch (mode) {
    case 0:
        if (down == 1) {
            if (x != NULL) *x = touchX;
            if (y != NULL) *y = DAT_006400f8.y;
            result = 1;
        }
        break;
    case 1:
        if (down == 1 && DAT_006400f8.previousDown == 0) {
            if (x != NULL) *x = touchX;
            if (y != NULL) *y = DAT_006400f8.y;
            result = 1;
        }
        break;
    case 2:
        if (down == 1 && DAT_006400f8.triggered == 1) {
            if (x != NULL) *x = touchX;
            if (y != NULL) *y = DAT_006400f8.y;
            result = 1;
        }
        break;
    case 3:
        if (down == 0 && DAT_006400f8.previousDown == 1) {
            if (x != NULL) *x = touchX;
            if (y != NULL) *y = DAT_006400f8.y;
            result = 1;
        }
        break;
    }
    return result;
}
}
