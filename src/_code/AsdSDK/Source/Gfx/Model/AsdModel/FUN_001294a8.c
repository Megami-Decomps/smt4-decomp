/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001294a8` (_code @ 0x1294a8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00471b98; /* 0x471b98 */


unsigned int FUN_001294a8(int param_1,unsigned int param_2)

{
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0xc) = param_2;
  piVar1 = DAT_00471b98;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 4);
  }
  else {
    piVar2 = (int *)0x0;
  }
  if (DAT_00471b98 != (int *)0x0) {
    piVar2[1] = (int)DAT_00471b98;
    *(int **)(*piVar1 + 4) = piVar2;
    *piVar2 = *piVar1;
    *piVar1 = (int)piVar2;
  }
  else {
    if (param_1 != 0) {
      temp_v0 = param_1 + 4;
    }
    else {
      temp_v0 = 0;
    }
    *(int *)(param_1 + 8) = temp_v0;
    *(int *)(param_1 + 4) = temp_v0;
    if (param_1 != 0) {
      DAT_00471b98 = (int *)(param_1 + 4);
    }
    else {
      DAT_00471b98 = (int *)0x0;
    }
  }
  return 0;
}
