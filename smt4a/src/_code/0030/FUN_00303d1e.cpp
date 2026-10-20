#include "common.h"

extern "C" {

void FUN_0030fbc0(u32 dest, u32 value);
s32 FUN_002e789a(void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 value;
} Holder;

/* When FUN_002e789a accepts `holder`, passes `dest` and the word at 0x44 to FUN_0030fbc0; returns whether it was accepted. */
u8 FUN_00303d1e(u32 dest, Holder *holder)
{
    s32 accepted;

    accepted = FUN_002e789a(holder);
    if (accepted != 0) {
        FUN_0030fbc0(dest, holder->value);
    }
    return accepted != 0;
}

} /* extern "C" */
