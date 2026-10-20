#include "common.h"

extern "C" {

int nw_snd_SoundActor_Initialize(void *actor, u32 player);

typedef struct Sound3DActor {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 unk5C;
    /* 0x60 */ u32 player;
    /* 0x64 */ u8 unk64[0x1D];
    /* 0x81 */ u8 initialized;
    /* 0x82 */ u8 unk82;
} Sound3DActor;

void nw_snd_Sound3DActor_Initialize(Sound3DActor *actor, u32 player, u32 param)
{
    if (actor->initialized == 0) {
        nw_snd_SoundActor_Initialize(actor, player);
        actor->initialized = 1;
        actor->unk5C = param;
        actor->unk82 = 0;
        actor->player = player;
    }
}

} /* extern "C" */
