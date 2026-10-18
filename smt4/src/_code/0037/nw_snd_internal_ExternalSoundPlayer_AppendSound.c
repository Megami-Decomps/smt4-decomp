/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_ExternalSoundPlayer_AppendSound` (_code @ 0x37b7e0, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int nw_snd_internal_ExternalSoundPlayer_AppendSound(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  
  temp_v2 = (unsigned int)*(unsigned char *)(param_2 + 0x98) + *(int *)(param_2 + 0x50);
  temp_v0 = UnsignedSaturate(temp_v2,7);
  UnsignedDoesSaturate(temp_v2,7);
  if (param_1[3] != 0) {
    while( 1 ) {
      if (*param_1 < param_1[3]) {
        nw_ut_internal_LinkListImpl_insert(param_1,param_1 + 1,param_2 + 0xec);
        *(int **)(param_2 + 0x18) = param_1;
        return 1;
      }
      piVar4 = (int *)param_1[1];
      piVar5 = (int *)0x0;
      temp_v2 = 0x80;
      while (piVar4 != param_1 + 1) {
        temp_v1 = UnsignedSaturate(piVar4[-0x27] + (unsigned int)*(unsigned char *)(piVar4 + -0x15),7);
        UnsignedDoesSaturate(piVar4[-0x27] + (unsigned int)*(unsigned char *)(piVar4 + -0x15),7);
        if (temp_v1 < temp_v2) {
          piVar5 = piVar4 + -0x3b;
        }
        piVar4 = (int *)*piVar4;
        if (temp_v1 < temp_v2) {
          temp_v2 = temp_v1;
        }
      }
      if (piVar5 == (int *)0x0) break;
      temp_v2 = UnsignedSaturate((unsigned int)*(unsigned char *)(piVar5 + 0x26) + piVar5[0x14],7);
      UnsignedDoesSaturate((unsigned int)*(unsigned char *)(piVar5 + 0x26) + piVar5[0x14],7);
      if (temp_v0 < temp_v2) {
        return 0;
      }
      (**(romwright_code **)(*piVar5 + 0x10))();
    }
  }
  return 0;
}
