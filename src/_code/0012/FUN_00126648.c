/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126648` (_code @ 0x126648, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea28; /* 0x44ea28 */


int * FUN_00126648(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  piVar2 = *(int **)(*(int *)(DAT_0044ea28 + param_1 * 0x18 + 4) + 4);
  if (piVar2 != (int *)0x0) {
    while (piVar1 = piVar2, *piVar1 != param_2) {
      piVar2 = (int *)piVar1[4];
      if ((int *)piVar1[4] == (int *)0x0) {
        return (int *)0x0;
      }
    }
  }
  return piVar1;
}
