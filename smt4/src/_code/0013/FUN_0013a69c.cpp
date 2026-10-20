#include "common.h"

extern "C" {

int nn_snd_CTR_MasterManager_GetAuxCallback(u8 *manager, u32 a, u32 b, u32 c);

extern u8 DAT_004e6f14;

void FUN_0013a69c(u32 a, u32 b, u32 c)
{
    nn_snd_CTR_MasterManager_GetAuxCallback(&DAT_004e6f14, a, b, c);
}

} /* extern "C" */
