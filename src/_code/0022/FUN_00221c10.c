/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221c10` (_code @ 0x221c10, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433a58; /* 0x433a58 */


void FUN_00221c10(void)

{
  float *pfVar1;
  int temp_v0;
  float temp_v1;
  float temp_v2;
  
  temp_v0 = DAT_00433a58;
  if (DAT_00433a58 != 0) {
    temp_v2 = *(float *)(DAT_00433a58 + 0x2c);
    temp_v1 = *(float *)(DAT_00433a58 + 0x30);
    pfVar1 = (float *)(DAT_00433a58 + 0x34);
    *(unsigned char *)(DAT_00433a58 + 0x6c) = 4;
    *(float *)(temp_v0 + 0x44) = (0.5f - *pfVar1) * 0.1f;
    *(float *)(temp_v0 + 0x3c) = (0.5f - temp_v2) * 0.1f;
    *(float *)(temp_v0 + 0x40) = (0.5f - temp_v1) * 0.1f;
  }
  return;
}
