#include "common.h"

extern "C" {
extern u8 g_nnSndMasterManager[];
void nn_snd_CTR_MasterManager_Apply(void *manager, u32 value);

/* Passes the value to the nn::snd master manager. */
void FUN_00159e58(u32 value)
{
    nn_snd_CTR_MasterManager_Apply(g_nnSndMasterManager, value);
}
}
