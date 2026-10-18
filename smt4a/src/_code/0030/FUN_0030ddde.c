/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ddde` (_code @ 0x30ddde, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0030ddde(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x16bc) != 0x10) {
    if (*(int *)(param_1 + 0x16bc) >= 8) {
      temp_v0 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v0 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v0) = (char)*(unsigned short *)(param_1 + 0x16b8);
      *(unsigned short *)(param_1 + 0x16b8) = *(unsigned short *)(param_1 + 0x16b8) >> 8;
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) - 8;
    }
    return;
  }
  temp_v0 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = temp_v0 + 1;
  *(char *)(*(int *)(param_1 + 8) + temp_v0) = (char)*(unsigned short *)(param_1 + 0x16b8);
  temp_v0 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = temp_v0 + 1;
  *(char *)(*(int *)(param_1 + 8) + temp_v0) = (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
  *(unsigned short *)(param_1 + 0x16b8) = 0;
  *(unsigned int *)(param_1 + 0x16bc) = 0;
  return;
}
