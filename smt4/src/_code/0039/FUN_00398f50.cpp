/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398f50` (_code @ 0x398f50, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00398f50(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  romwright_code *pcVar3;
  
  temp_v1 = param_1 + (unsigned int)*(unsigned char *)(param_1 + 1) * 8;
  temp_v0 = *(unsigned int *)(temp_v1 + 0xd8);
  pcVar3 = *(romwright_code **)(temp_v1 + 0xd4);
  if ((temp_v0 & 1) != 0) {
    pcVar3 = *(romwright_code **)((unsigned char *)pcVar3 + *(int *)(param_1 + ((int)temp_v0 >> 1)));
  }
  (*pcVar3)();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (0 < *(short *)(param_1 + 0x942)) {
    *(short *)(param_1 + 0x942) = *(short *)(param_1 + 0x942) - 1;
  }
  return;
}

} /* extern "C" */
