#include "common.h"

/* The Apocalypse fade work: the colour and the alpha fade fields sit 8 bytes later than in the shared view. */
struct ColorFadeWorkA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x18];
    /* 0x6c */ u32 color;
    /* 0x70 */ u8 unk70[0x10];
    /* 0x80 */ s32 alphaDuration;
    /* 0x84 */ u32 alphaElapsed;
    /* 0x88 */ u32 unk88;
    /* 0x8c */ u32 target;
    /* 0x90 */ u32 start;
};

// Start an alpha fade, or apply the alpha immediately when duration is zero.
extern "C" void FUN_004cae0c(u32, ColorFadeWorkA* work, s32 duration, u32 alpha)
{
    work->alphaElapsed = 0;
    work->alphaDuration = duration;
    work->target = alpha & 0xff;
    u32 flags = work->flags;
    work->start = work->color & 0xff;
    if (duration == 0) {
        flags &= ~0x2000u;
        work->color = (work->color & 0xffffff00) | (alpha & 0xff);
    } else {
        flags |= 0x2000;
    }
    work->flags = flags;
}
