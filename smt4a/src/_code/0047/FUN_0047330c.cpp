/* NON_MATCHING: retail reads the three colors as `mov r0, r4; ldrsh r0, [r0, #N]` (calls to one-instruction getters that armlink inlined), which plain field reads don't reproduce; argument stores are scheduled differently. */
#include "common.h"

/* A window whose frame is drawn from the nine-slice sprite set. */
struct FramedWindow {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 target;
    /* 0x54 */ s16 colorA;
    /* 0x56 */ s16 colorB;
    /* 0x58 */ s16 colorC;
    /* 0x5A */ u8 unk5A[0xA];
    /* 0x64 */ u8 tinted;
};

extern "C" {

void FUN_00344cd0(u32 target, s32 x, s32 y, s32 center, s32 topLeft, s32 top, s32 topRight,
                  s32 left, s32 right, s32 bottomLeft, s32 bottom, s32 colorC, s32 colorA,
                  s32 colorB, u32 alpha, s32 flags);

/* Draws the window frame, tinted with the window's colors when tinting is enabled. */
void FUN_0047330c(FramedWindow *window, u32 alpha)
{
    s32 colorC = window->colorC;
    s32 colorA = window->colorA;
    s32 colorB = window->colorB;

    if (!window->tinted) {
        colorC = -1;
        colorA = -1;
        colorB = -1;
    }
    FUN_00344cd0(window->target, 0, 0, 0x2f, 0x4b, 0x4c, 0x4d, 0x47, 0x49, 0x48, 0x4a, colorC,
                 colorA, colorB, alpha, 0);
}

} /* extern "C" */
