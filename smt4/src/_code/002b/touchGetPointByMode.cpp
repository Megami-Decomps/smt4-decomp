#include "shard/W9_W9Match1_TouchSample.h"

extern "C" {
extern TouchInputSample g_touchInput;

// Read touch coordinates for held, pressed, triggered, or released input.
u32 touchGetPointByMode(u32 *x, u32 *y, s32 mode)
{
    u32 result = 0;
    switch (mode) {
    case 0:
        if (g_touchInput.down == 1) {
            if (x != NULL) *x = g_touchInput.x;
            if (y != NULL) *y = g_touchInput.y;
            result = 1;
        }
        break;
    case 1:
        if (g_touchInput.down == 1 && g_touchInput.previousDown == 0) {
            if (x != NULL) *x = g_touchInput.x;
            if (y != NULL) *y = g_touchInput.y;
            result = 1;
        }
        break;
    case 2:
        if (g_touchInput.down == 1 && g_touchInput.triggered == 1) {
            if (x != NULL) *x = g_touchInput.x;
            if (y != NULL) *y = g_touchInput.y;
            result = 1;
        }
        break;
    case 3:
        if (g_touchInput.down == 0 && g_touchInput.previousDown == 1) {
            if (x != NULL) *x = g_touchInput.x;
            if (y != NULL) *y = g_touchInput.y;
            result = 1;
        }
        break;
    }
    return result;
}
}
