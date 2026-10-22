/* NON_MATCHING: retail reads the three s16 fields through r0 copies into r6/r7 before the call setup and derives the frame ids from 0x569 at run time; armcc stores the constants directly. */
#include "common.h"

struct ScreenPoint {
    f32 x;
    f32 y;
};

struct MessageWindowOwner {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 window;
    /* 0x54 */ s16 unk54;
    /* 0x56 */ s16 unk56;
    /* 0x58 */ s16 unk58;
    /* 0x5A */ u8 unk5A[0xA];
    /* 0x64 */ u32 position;
};

extern "C" {
void pairCopy(u32 source, ScreenPoint *point);
void FUN_00290994(u32 window, s32 x, s32 y, s32 style, s32 frame0, s32 frame1, s32 frame2, s32 frame3,
                  s32 frame4, s32 frame5, s32 frame6, s32 arg11, s32 arg12, s32 arg13, u32 arg14, s32 arg15);

/* Lays out the owner's window at its stored position with the 0x566-0x56C frame set. */
void FUN_003aaa6c(MessageWindowOwner *owner, u32 arg)
{
    if (owner->window != 0) {
        ScreenPoint point;

        pairCopy(owner->position, &point);
        FUN_00290994(owner->window, (s32)point.x, (s32)point.y, 0x1D, 0x56A, 0x56B, 0x56C, 0x566, 0x568, 0x567,
                     0x569, owner->unk58, owner->unk54, owner->unk56, arg, 0);
    }
}

} /* extern "C" */
