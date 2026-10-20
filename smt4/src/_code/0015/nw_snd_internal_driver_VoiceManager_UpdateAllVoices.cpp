/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_VoiceManager_UpdateAllVoices` (_code @ 0x151374, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154e84(int *);
int FUN_00154ef0(int *);
int FUN_00155124(int *);

/* Supplied declaration required: FUN_00154e84. */
/* Supplied declaration required: FUN_00154ef0. */
/* Supplied declaration required: FUN_00155124. */


void nw_snd_internal_driver_VoiceManager_UpdateAllVoices(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_00154e84(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_00154ef0(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_00155124(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}

} /* extern "C" */
