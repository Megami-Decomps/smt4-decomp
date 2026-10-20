/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141870` (_code @ 0x141870, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00640118; /* 0x640118 */


void FUN_00141870(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  for (temp_v0 = *(int *)(DAT_00640118 + (param_1 >> 0x14) * 8); temp_v0 != 0;
      temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_1 & 0xfffff)) {
      *(unsigned int *)(temp_v0 + 100) = param_2;
      return;
    }
  }
  temp_v0 = 0;
  *(unsigned int *)(temp_v0 + 100) = param_2;
  return;
}

} /* extern "C" */
