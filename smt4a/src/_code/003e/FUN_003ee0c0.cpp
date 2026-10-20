/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee0c0` (_code @ 0x3ee0c0, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern short FUN_004c53fc(unsigned int);


void FUN_003ee0c0(int param_1)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_004c53fc(1);
  temp_v1 = 0;
  do {
    *(int *)(*(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408 + 0x78) = (int)temp_v0;
    if (temp_v1 < 0x6d) {
      temp_v2 = *(int *)(param_1 + 0x1ed4) + temp_v1 * 0x1d0;
      *(unsigned int *)(temp_v2 + 0x38) = 0;
      *(unsigned int *)(temp_v2 + 0x34) = 0;
      *(unsigned int *)(temp_v2 + 0x30) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x6d);
  return;
}

} /* extern "C" */
