/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003970f8` (_code @ 0x3970f8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_003970f8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned char temp_v0;
  
  piVar1 = (int *)param_1[1];
  piVar2 = (int *)*piVar1;
  if (piVar1 != piVar2) {
    if (piVar2 != (int *)*piVar2) {
      do {
        piVar1 = (int *)*piVar1;
      } while ((int *)*piVar1 != *(int **)*piVar1);
    }
  }
  else {
    if (piVar1 != param_1) {
      do {
        piVar1 = (int *)param_1[2];
        temp_v0 = (int *)*piVar1 != param_1;
        param_1 = piVar1;
      } while ((int *)*piVar1 != piVar1 && temp_v0);
      return piVar1;
    }
    piVar1 = (int *)param_1[2];
    piVar2 = (int *)*piVar1;
    if ((int *)*piVar1 != param_1) {
      do {
        piVar1 = piVar2;
        piVar2 = (int *)*piVar1;
      } while (piVar2 != param_1);
      return piVar1;
    }
  }
  return piVar1;
}
