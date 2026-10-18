/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00190f58` (_code @ 0x190f58, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */


void FUN_00190f58(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  
  param_1[3] = param_2;
  while (param_1[3] < *param_1) {
    piVar2 = (int *)param_1[1];
    piVar4 = (int *)0x0;
    temp_v2 = 0x80;
    while (piVar2 != param_1 + 1) {
      temp_v1 = piVar2[-0x30] + (unsigned int)*(unsigned char *)((int)piVar2 - 0x73);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      if (temp_v0 < temp_v2) {
        piVar4 = piVar2 + -0x44;
      }
      piVar2 = (int *)*piVar2;
      if (temp_v0 < temp_v2) {
        temp_v2 = temp_v0;
      }
    }
    (**(romwright_code **)(*piVar4 + 0x10))(piVar4);
  }
  return;
}
