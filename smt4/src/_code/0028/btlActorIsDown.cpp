#include "common.h"

extern "C" {

typedef struct BtlActor {
    /* 0x0000 */ u8 unk0000[0xC4];
    /* 0x00C4 */ s32 hp;
    /* 0x00C8 */ u8 unk00C8[0x43D8];
    /* 0x44A0 */ u32 flags;
} BtlActor;

/* Whether the actor counts as down: not excluded by flag 2, and flag 0x2000000 is set or its value is negative. */
u32 btlActorIsDown(BtlActor *actor)
{
    if (actor->flags & 2) {
        return 0;
    }
    if ((actor->flags & 0x2000000) == 0 && actor->hp >= 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
