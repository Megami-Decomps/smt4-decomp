#include "common.h"

extern "C" {

void nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(void);

/* Runs nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer (placed right after, so the call is a linker NOP). */
void FUN_0037f55c(void)
{
    nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer();
}

} /* extern "C" */
