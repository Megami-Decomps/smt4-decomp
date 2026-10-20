/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a4794` (_code @ 0x1a4794, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001a4794(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = param_1 + *(int *)(param_1 + 0x48) * 0x20;
  temp_v1 = ((*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x1c)) & 0xfffffffcU) + *(int *)(temp_v0 + 0x10)
  ;
  *(int *)(param_1 + 0x54) = temp_v1;
  temp_v0 = *(int *)(temp_v0 + 0x14) + ((*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x1c)) & 0xfffffffcU)
  ;
  *(int *)(param_1 + 0x58) = temp_v0;
  *(int *)(param_1 + 0x5c) = temp_v1;
  *(int *)(param_1 + 0x60) = temp_v0;
  return;
}

} /* extern "C" */
