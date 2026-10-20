#include "common.h"

extern "C" {

typedef struct MasterManager {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 callbacks[2];
    /* 0x1C */ u32 userData[2];
} MasterManager;

/* Returns the aux callback and its user data for aux bus `bus`. */
void nn_snd_CTR_MasterManager_GetAuxCallback(MasterManager *manager, s32 bus, u32 *callback, u32 *userData)
{
    *callback = manager->callbacks[bus];
    *userData = manager->userData[bus];
}

} /* extern "C" */
