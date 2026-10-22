/* NON_MATCHING: Retail loads tint colors into r0-r4 and schedules the nine-slice call arguments differently. */
#include "classes/Obj4221a4.h"
#include "common.h"


extern "C" {

void FUN_00344cd0(u32 target, s32 x, s32 y, s32 center, s32 topLeft, s32 top, s32 topRight,
                  s32 left, s32 right, s32 bottomLeft, s32 bottom, s32 colorC, s32 colorA,
                  s32 colorB, u32 alpha, s32 flags);

/* Draws the window frame, tinted with the window's colors when tinting is enabled. */
} /* extern "C" */

void Obj4221a4::vfunc10(u32 alpha)
{
    s32 colorC = region.getWidth();
    s32 colorA = region.getLeft();
    s32 colorB = region.getTop();

    if (!ready) {
        colorC = -1;
        colorA = -1;
        colorB = -1;
    }
    FUN_00344cd0((u32)region.screen, 0, 0, 0x2f, 0x4b, 0x4c, 0x4d, 0x47, 0x49, 0x48, 0x4a,
                 colorC, colorA, colorB, alpha, 0);
}

