/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151ff4` (_code @ 0x151ff4, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00151ff4(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 4));
  if (*puVar1 != 0) {
    *param_2 = puVar1[1];
  }
  else {
    *param_2 = 0xffffffff;
  }
  if (*puVar1 >= 2) {
    param_2[1] = puVar1[2];
  }
  else {
    param_2[1] = 0xffffffff;
  }
  if (*puVar1 >= 3) {
    param_2[2] = puVar1[3];
  }
  else {
    param_2[2] = 0xffffffff;
  }
  if (*puVar1 >= 4) {
    param_2[3] = puVar1[4];
  }
  else {
    param_2[3] = 0xffffffff;
  }
  return;
}
