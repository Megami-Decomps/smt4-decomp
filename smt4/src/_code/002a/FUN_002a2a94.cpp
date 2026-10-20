#include "common.h"

extern "C" {

int nn_snd_CTR_MasterManagerImpl_AuxUserCallback(u8 *manager);

extern u8 DAT_004ead10;

void FUN_002a2a94(char *enabled)
{
    if (*enabled != 0) {
        nn_snd_CTR_MasterManagerImpl_AuxUserCallback(&DAT_004ead10);
    }
}

} /* extern "C" */
