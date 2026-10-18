/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_ExternalSoundPlayer_SetPlayableSoundCount` (_code @ 0x140e08, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */


void nw_snd_internal_ExternalSoundPlayer_SetPlayableSoundCount(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  
  param_1[3] = param_2;
  while (param_1[3] < *param_1) {
    piVar2 = (int *)param_1[1];
    piVar3 = (int *)0x0;
    temp_v1 = 0x80;
    while (piVar2 != param_1 + 1) {
      temp_v0 = UnsignedSaturate(piVar2[-0x27] + (unsigned int)*(unsigned char *)(piVar2 + -0x15),7);
      UnsignedDoesSaturate(piVar2[-0x27] + (unsigned int)*(unsigned char *)(piVar2 + -0x15),7);
      if (temp_v0 < temp_v1) {
        piVar3 = piVar2 + -0x3b;
      }
      piVar2 = (int *)*piVar2;
      if (temp_v0 < temp_v1) {
        temp_v1 = temp_v0;
      }
    }
    (**(romwright_code **)(*piVar3 + 0x10))(piVar3);
  }
  return;
}
