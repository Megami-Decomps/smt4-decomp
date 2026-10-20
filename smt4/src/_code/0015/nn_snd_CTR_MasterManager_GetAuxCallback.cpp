#include "common.h"

extern "C" {

typedef struct MasterManager {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 auxCallback[2];
    /* 0x1C */ u32 auxCallbackData[2];
} MasterManager;

/* Reads the aux bus callback and its user data for bus `bus`. */
void nn_snd_CTR_MasterManager_GetAuxCallback(MasterManager *manager, s32 bus, u32 *callback, u32 *userData)
{
    *callback = manager->auxCallback[bus];
    *userData = manager->auxCallbackData[bus];
}

} /* extern "C" */
