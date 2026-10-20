/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e2b0` (_code @ 0x30e2b0, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0030e2b0(int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 0x16bc) >= 9) {
    temp_v1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v1 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v1) = (char)*(unsigned short *)(param_1 + 0x16b8);
    temp_v2 = *(int *)(param_1 + 8);
    temp_v1 = *(int *)(param_1 + 0x14);
    temp_v0 = (unsigned char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
  }
  else {
    if (*(int *)(param_1 + 0x16bc) < 1) {
      *(unsigned short *)(param_1 + 0x16b8) = 0;
      *(unsigned int *)(param_1 + 0x16bc) = 0;
      return;
    }
    temp_v0 = (unsigned char)*(unsigned short *)(param_1 + 0x16b8);
    temp_v2 = *(int *)(param_1 + 8);
    temp_v1 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x14) = temp_v1 + 1;
  *(unsigned char *)(temp_v2 + temp_v1) = temp_v0;
  *(unsigned short *)(param_1 + 0x16b8) = 0;
  *(unsigned int *)(param_1 + 0x16bc) = 0;
  return;
}

} /* extern "C" */
