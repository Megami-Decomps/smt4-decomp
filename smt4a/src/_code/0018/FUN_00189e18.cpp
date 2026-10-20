#include "common.h"

extern "C" {

void nn_snd_CTR_MasterManager_GetAuxCallback(u8 *manager, u32 a, u32 b, u32 c);
extern u8 DAT_00643380[];

/* Forwards its three arguments to GetAuxCallback on the master manager at 0x643380. */
void FUN_00189e18(u32 a, u32 b, u32 c)
{
    nn_snd_CTR_MasterManager_GetAuxCallback(DAT_00643380, a, b, c);
}

} /* extern "C" */
