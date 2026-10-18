/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262770` (_code @ 0x262770, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00262770(int param_1,unsigned int param_2,int param_3)

{
  short temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = *(short *)(param_3 + temp_v1 * 2);
    if (temp_v0 != 0) {
      *(short *)(param_1 + *(int *)(param_1 + 0x178) * 2 + 0x146) = temp_v0;
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  if (*(int *)(param_1 + 0x178) < 0x18) {
    *(unsigned short *)(param_1 + *(int *)(param_1 + 0x178) * 2 + 0x146) = 0;
  }
  return;
}
