/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b9d4` (_code @ 0x31b9d4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570ab4; /* 0x570ab4 */


void FUN_0031b9d4(void)

{
  float *pfVar1;
  int temp_v0;
  float temp_v1;
  float temp_v2;
  
  temp_v0 = DAT_00570ab4;
  if (DAT_00570ab4 != 0) {
    temp_v2 = *(float *)(DAT_00570ab4 + 0x2c);
    temp_v1 = *(float *)(DAT_00570ab4 + 0x30);
    pfVar1 = (float *)(DAT_00570ab4 + 0x34);
    *(unsigned char *)(DAT_00570ab4 + 0x6c) = 4;
    *(float *)(temp_v0 + 0x44) = (0.5f - *pfVar1) * 0.1f;
    *(float *)(temp_v0 + 0x3c) = (0.5f - temp_v2) * 0.1f;
    *(float *)(temp_v0 + 0x40) = (0.5f - temp_v1) * 0.1f;
  }
  return;
}
