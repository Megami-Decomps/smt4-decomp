#include "common.h"

extern "C" {

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;
    /* 0x302C */ u8 unk302c[8];
    /* 0x3034 */ s32 handle;
    /* 0x3038 */ u8 state;
} Owner;

typedef struct BtlMain {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 flags;
} BtlMain;

extern BtlMain *g_btlMain;

extern void FUN_001ab998(void);


static __inline void flagsClearBits(u32 *flags, u32 bits)
{
    *flags &= ~bits;
}

/* Releases the owner's handle, resets its state to 12, clears its flag 2 and the battle flag 0x4000000. */
void FUN_002276f8(Owner *owner)
{
    if (owner->handle != 0) {
        FUN_001ab998();
        owner->handle = 0;
    }
    owner->state = 12;
    owner->flags &= ~2;
    BtlMain *main = g_btlMain;
    if (main != NULL) {
        flagsClearBits(&main->flags, 0x04000000u);
    }
}

} /* extern "C" */
