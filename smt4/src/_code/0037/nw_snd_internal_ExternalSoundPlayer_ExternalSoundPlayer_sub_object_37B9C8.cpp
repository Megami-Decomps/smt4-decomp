/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_ExternalSoundPlayer_ExternalSoundPlayer_sub_object_37B9C8` (_code @ 0x37b9c8, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003799f8(int *, int);

/* Supplied declaration required: FUN_003799f8. */


int nw_snd_internal_ExternalSoundPlayer_ExternalSoundPlayer_sub_object_37B9C8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_003799f8(piVar1 + -0x3b,param_1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return param_1;
}

} /* extern "C" */
