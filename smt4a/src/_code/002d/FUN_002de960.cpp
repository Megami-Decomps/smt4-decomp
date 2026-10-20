#include "common.h"

extern "C" {

void FUN_003d2d34(u32 handle, s32 a, s32 b);
s32 FUN_002009a8(u32 handle);

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 handle;
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Inner *inner;
} Holder;

/* Calls FUN_003d2d34(handle, 0, 0x3C) for the inner object's handle unless FUN_002009a8 reports 1 or 2 for it. */
void FUN_002de960(Holder *holder)
{
    s32 state;
    u32 handle;

    handle = holder->inner->handle;
    state = FUN_002009a8(handle);
    if (state != 1 && state != 2) {
        FUN_003d2d34(handle, 0, 0x3C);
        return;
    }
}

} /* extern "C" */
