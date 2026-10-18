/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004062b0` (_code @ 0x4062b0, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001006ec. */


unsigned int * FUN_004062b0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  
  *param_1 = (unsigned int)"抰@抠@";
  piVar4 = (int *)param_1[2];
  for (piVar3 = (int *)param_1[1]; piVar3 != piVar4; piVar3 = piVar3 + 1) {
    if ((int *)*piVar3 != (int *)0x0) {
      (**(romwright_code **)(*(int *)*piVar3 + 4))();
    }
  }
  temp_v0 = param_1[1];
  temp_v1 = param_1[2];
  if (temp_v0 != temp_v1) {
    param_1[2] = temp_v1 - ((temp_v1 - temp_v0) & 0xfffffffcU);
  }
  FUN_001006ec(temp_v0,(param_1[3] - temp_v0) >> 2,0);
  return param_1;
}
