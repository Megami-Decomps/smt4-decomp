#include "common.h"
#include "shard/W6_W6Match5_EntryCollection.h"

extern "C" {

s32 FUN_002bffe0(s32 *x, s32 *y, u32 pointer);

/* True when the touch/pointer position lies inside the rectangle (x, y, width, height), edges included. */
s32 uiPointerHitsRect(s32 x, s32 y, s32 width, s32 height, u32 pointer)
{
    s32 hit = 0;
    s32 px;
    s32 py;

    if (FUN_002bffe0(&px, &py, pointer) != 0) {
        if (x <= px && px <= x + width && y <= py && py <= y + height) {
            hit = 1;
        }
    }
    return hit;
}

} /* extern "C" */
