/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022013c` (_code @ 0x22013c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3cf4; /* 0x4e3cf4 */


unsigned int FUN_0022013c(unsigned int param_1)

{
  int temp_v0;
  
  for (temp_v0 = *(int *)(DAT_004e3cf4 + (param_1 >> 0x14) * 8); temp_v0 != 0;
      temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_1 & 0xfffff)) {
      return *(unsigned int *)(temp_v0 + 0x30);
    }
  }
  temp_v0 = 0;
  return *(unsigned int *)(temp_v0 + 0x30);
}
