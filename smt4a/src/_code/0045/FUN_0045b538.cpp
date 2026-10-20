/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b538` (_code @ 0x45b538, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0045b538(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  if (*(short *)(*(int *)(param_1 + 0x30) + 0x10) != 0) {
    do {
      temp_v1 = temp_v0 + 1;
      temp_v2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) + temp_v0 * 4);
      *(unsigned short *)(temp_v2 + 4) = *(unsigned short *)(temp_v2 + 4) | 0x40;
      temp_v0 = temp_v1;
    } while (temp_v1 < *(unsigned short *)(*(int *)(param_1 + 0x30) + 0x10));
  }
  return;
}

} /* extern "C" */
