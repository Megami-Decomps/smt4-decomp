/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150144` (_code @ 0x150144, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_00150144(int *);


int * FUN_00150144(int param_1,unsigned int param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned char temp_v0;
  
  piVar1 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      temp_v0 = param_2 <= (unsigned int)piVar1[2];
      if ((unsigned int)piVar1[2] <= param_2) {
        temp_v0 = (unsigned int)piVar1[3] <= param_2;
      }
      if (!temp_v0) {
        piVar2 = (int *)FUN_00150144(piVar1 + 5);
        if (piVar2 == (int *)0x0) {
          piVar2 = piVar1 + -1;
        }
        return piVar2;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return (int *)0x0;
}
