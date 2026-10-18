/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundPlayer_StopAllSound` (_code @ 0x140440, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bda30. */


void nw_snd_SoundPlayer_StopAllSound(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_002bda30(piVar1 + -0x37,param_2);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
