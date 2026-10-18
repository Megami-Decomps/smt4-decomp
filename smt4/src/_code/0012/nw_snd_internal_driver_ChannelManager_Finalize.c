/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_ChannelManager_Finalize` (_code @ 0x121a24, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_snd_internal_PoolImpl_DestroyImpl. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Stop. */


void nw_snd_internal_driver_ChannelManager_Finalize(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar1;
        nw_snd_internal_driver_Channel_Stop(piVar1 + -0x4f);
        piVar1 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
    nw_snd_internal_PoolImpl_DestroyImpl
              (param_1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
    *(unsigned char *)(param_1 + 0x10) = 0;
  }
  return;
}
