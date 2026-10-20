#include "common.h"

extern "C" {

void nn_snd_CTR_MasterManagerImpl_AuxUserCallback(u8 *manager);
extern u8 DAT_00647708[];

/* Runs the aux user callback of the master manager at 0x647708 when the flag byte is set. */
void FUN_001cd448(u8 *flag)
{
    if (*flag != 0) {
        nn_snd_CTR_MasterManagerImpl_AuxUserCallback(DAT_00647708);
        return;
    }
}

} /* extern "C" */
