#include "shard/W9_W9Match1_TouchSample.h"

extern "C" {
extern TouchInputSample DAT_004e3cd4;

// Read touch coordinates for held, pressed, triggered, or released input.
u32 touchGetPointByMode(u32 *x, u32 *y, s32 mode)
{
    u32 result = 0;
    switch (mode) {
    case 0:
        if (DAT_004e3cd4.down == 1) {
            if (x != NULL) *x = DAT_004e3cd4.x;
            if (y != NULL) *y = DAT_004e3cd4.y;
            result = 1;
        }
        break;
    case 1:
        if (DAT_004e3cd4.down == 1 && DAT_004e3cd4.previousDown == 0) {
            if (x != NULL) *x = DAT_004e3cd4.x;
            if (y != NULL) *y = DAT_004e3cd4.y;
            result = 1;
        }
        break;
    case 2:
        if (DAT_004e3cd4.down == 1 && DAT_004e3cd4.triggered == 1) {
            if (x != NULL) *x = DAT_004e3cd4.x;
            if (y != NULL) *y = DAT_004e3cd4.y;
            result = 1;
        }
        break;
    case 3:
        if (DAT_004e3cd4.down == 0 && DAT_004e3cd4.previousDown == 1) {
            if (x != NULL) *x = DAT_004e3cd4.x;
            if (y != NULL) *y = DAT_004e3cd4.y;
            result = 1;
        }
        break;
    }
    return result;
}
}
