/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_ChannelManager_UpdateAllChannel` (_code @ 0x151018, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001552fc. */


void nw_snd_internal_driver_ChannelManager_UpdateAllChannel(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_001552fc(piVar1 + -0x4f,1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}
