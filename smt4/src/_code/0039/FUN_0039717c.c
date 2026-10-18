/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039717c` (_code @ 0x39717c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_0039717c(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned char temp_v1;
  
  piVar1 = (int *)*param_1;
  temp_v0 = piVar1[1];
  if (piVar1 != (int *)temp_v0) {
    if (temp_v0 != *(int *)(temp_v0 + 4)) {
      do {
        piVar1 = (int *)piVar1[1];
      } while (piVar1[1] != *(int *)(piVar1[1] + 4));
    }
  }
  else {
    if (piVar1 != param_1) {
      do {
        piVar1 = (int *)param_1[2];
        temp_v1 = (int *)piVar1[1] != param_1;
        param_1 = piVar1;
      } while ((int *)piVar1[1] != piVar1 && temp_v1);
      return piVar1;
    }
    piVar1 = (int *)param_1[2];
    piVar3 = (int *)piVar1[1];
    if ((int *)piVar1[1] != param_1) {
      do {
        piVar1 = piVar3;
        piVar3 = (int *)piVar1[1];
      } while (piVar3 != param_1);
      return piVar1;
    }
  }
  return piVar1;
}
