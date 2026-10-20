/* NON_MATCHING: float conversion uses s0 as destination; retail converts s2 in place */
/* Starts the object's timer for `frames` and flags it as started. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ u8 unk000[0x44];
    /* 0x044 */ u8 timer[0x5F0];
    /* 0x634 */ u32 flags;
} Object;

extern void FUN_002544ac(void *timer, s16 frames, s32 arg);

void FUN_003d6df0(Object *obj, float unused0, float unused1, float frames)
{
    FUN_002544ac(obj->timer, (s16)(s32)frames, 0);
    obj->flags |= 0x400000;
}

}
