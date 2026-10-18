/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030802c` (_code @ 0x30802c, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0030802c(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_2 + 0xc);
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(temp_v1 + 8);
  if (*(int *)(temp_v1 + 8) != 0) {
    *(int *)(*(int *)(temp_v1 + 8) + 4) = param_2;
  }
  *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(param_2 + 4);
  if (*(int *)(*(int *)(param_1 + 0x10) + 4) == param_2) {
    *(int *)(*(int *)(param_1 + 0x10) + 4) = temp_v1;
  }
  else {
    temp_v0 = *(int *)(param_2 + 4);
    if (*(int *)(temp_v0 + 8) == param_2) {
      *(int *)(temp_v0 + 8) = temp_v1;
    }
    else {
      *(int *)(temp_v0 + 0xc) = temp_v1;
    }
  }
  *(int *)(temp_v1 + 8) = param_2;
  *(int *)(param_2 + 4) = temp_v1;
  return;
}
