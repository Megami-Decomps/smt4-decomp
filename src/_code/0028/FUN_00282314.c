/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282314` (_code @ 0x282314, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004474f4; /* 0x4474f4 */


unsigned int FUN_00282314(void)

{
  float *pfVar1;
  float *pfVar2;
  int temp_v0;
  unsigned int *puVar4;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = DAT_004474f4;
  if (*(int *)(DAT_004474f4 + 0x26c) <= *(int *)(DAT_004474f4 + 0x270)) {
    puVar4 = (unsigned int *)(DAT_004474f4 + 0x23c);
    temp_v3 = *(unsigned int *)(DAT_004474f4 + 0x240);
    temp_v5 = *(unsigned int *)(DAT_004474f4 + 0x244);
    temp_v6 = *(unsigned int *)(DAT_004474f4 + 0x248);
    temp_v7 = *(unsigned int *)(DAT_004474f4 + 0x24c);
    *(unsigned int *)(DAT_004474f4 + 0x250) = *(unsigned int *)(DAT_004474f4 + 0x238);
    *(unsigned int *)(temp_v0 + 0x254) = *puVar4;
    *(unsigned int *)(temp_v0 + 600) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x25c) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x260) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x264) = temp_v7;
    return 1;
  }
  if (*(int *)(DAT_004474f4 + 0x268) != 0) {
    pfVar1 = (float *)(DAT_004474f4 + 0x23c);
    pfVar2 = (float *)(DAT_004474f4 + 0x254);
    temp_v1 = *(float *)(DAT_004474f4 + 0x240);
    temp_v4 = *(float *)(DAT_004474f4 + 600);
    temp_v2 = 1.0f / *(float *)(DAT_004474f4 + 0x28c);
    *(float *)(DAT_004474f4 + 0x250) =
         *(float *)(DAT_004474f4 + 0x250) +
         (*(float *)(DAT_004474f4 + 0x238) - *(float *)(DAT_004474f4 + 0x250)) * temp_v2;
    *(float *)(temp_v0 + 0x254) = *(float *)(temp_v0 + 0x254) + (*pfVar1 - *pfVar2) * temp_v2;
    *(float *)(temp_v0 + 600) = *(float *)(temp_v0 + 600) + (temp_v1 - temp_v4) * temp_v2;
    temp_v1 = 1.0f / *(float *)(temp_v0 + 0x28c);
    *(float *)(temp_v0 + 0x25c) =
         *(float *)(temp_v0 + 0x25c) + (*(float *)(temp_v0 + 0x244) - *(float *)(temp_v0 + 0x25c)) * temp_v1
    ;
    *(float *)(temp_v0 + 0x260) =
         *(float *)(temp_v0 + 0x260) + (*(float *)(temp_v0 + 0x248) - *(float *)(temp_v0 + 0x260)) * temp_v1
    ;
    temp_v1 = *(float *)(temp_v0 + 0x264) +
            (*(float *)(temp_v0 + 0x24c) - *(float *)(temp_v0 + 0x264)) * temp_v1;
  }
  else {
    *(float *)(DAT_004474f4 + 0x250) =
         *(float *)(DAT_004474f4 + 0x250) + *(float *)(DAT_004474f4 + 0x274);
    *(float *)(temp_v0 + 0x254) = *(float *)(temp_v0 + 0x254) + *(float *)(temp_v0 + 0x278);
    *(float *)(temp_v0 + 600) = *(float *)(temp_v0 + 600) + *(float *)(temp_v0 + 0x27c);
    *(float *)(temp_v0 + 0x25c) = *(float *)(temp_v0 + 0x25c) + *(float *)(temp_v0 + 0x280);
    *(float *)(temp_v0 + 0x260) = *(float *)(temp_v0 + 0x260) + *(float *)(temp_v0 + 0x284);
    temp_v1 = *(float *)(temp_v0 + 0x264) + *(float *)(temp_v0 + 0x288);
  }
  *(float *)(temp_v0 + 0x264) = temp_v1;
  *(int *)(temp_v0 + 0x270) = *(int *)(temp_v0 + 0x270) + 1;
  return 0;
}
