/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270770` (_code @ 0x270770, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */


void FUN_00270770(unsigned char param_1,unsigned char param_2)

{
  int temp_v0;
  unsigned char *pbVar2;
  
  temp_v0 = DAT_0044cdf0;
  if (DAT_0044cdf0 != 0) {
    pbVar2 = (unsigned char *)(DAT_0044cdf0 + 0x12334);
    if (*(int *)(DAT_0044cdf0 + 0x12338) != 2) {
      *(unsigned char *)(DAT_0044cdf0 + 0x1233c) = param_2;
      *(unsigned char *)(temp_v0 + 0x1233e) = param_1;
      *(unsigned char *)(temp_v0 + 0x1233f) = 0;
      *(unsigned int *)(temp_v0 + 0x12338) = 2;
      *(unsigned char *)(temp_v0 + 0x1233d) = 0;
      *pbVar2 = *pbVar2 | 1;
    }
    return;
  }
  return;
}
