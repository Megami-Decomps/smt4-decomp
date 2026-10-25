#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {


/* True when the touch/pointer position lies inside the rectangle (x, y, width, height), edges included. */
s32 uiPointerHitsRect(s32 x, s32 y, s32 width, s32 height, u32 pointer)
{
    s32 hit = 0;
    s32 px;
    s32 py;

    if (FUN_00167c14(reinterpret_cast<u32 *>(&px), reinterpret_cast<u32 *>(&py), pointer) != 0) {
        if (x <= px && px <= x + width && y <= py && py <= y + height) {
            hit = 1;
        }
    }
    return hit;
}

} /* extern "C" */
