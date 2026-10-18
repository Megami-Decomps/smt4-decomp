/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a41a0` (_code @ 0x2a41a0, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f3b8; /* 0x57f3b8 */
extern unsigned char DAT_0057f3e8; /* 0x57f3e8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
extern int FUN_00203d74(void);


unsigned int FUN_002a41a0(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = DAT_0057f3b8;
  temp_v5 = 1.0f;
  switch(*(unsigned int *)(DAT_0057f3b8 + 8)) {
  case 0:
    temp_v1 = *(unsigned int *)(DAT_0057f3b8 + 0x18);
    if ((temp_v1 < 6) &&
       (temp_v2 = FUN_0018206c(*(unsigned int *)(&DAT_0057f3e8 + temp_v1 * 0xc),
                             *(unsigned int *)(temp_v1 * 0xc + 0x57f3ec)), temp_v2 != 0)) {
      *(unsigned int *)(temp_v0 + 8) = 1;
    }
    break;
  case 2:
    if ((0 < *(int *)(DAT_0057f3b8 + 0x1c)) && (temp_v2 = FUN_00203d74(), temp_v2 == 0)) {
      temp_v3 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      *(float *)(temp_v0 + 0x14) = temp_v3 / temp_v4;
      if ((int)(temp_v3 / temp_v4) < 0x3f800000) break;
    }
    *(unsigned int *)(temp_v0 + 8) = 3;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(float *)(temp_v0 + 0x14) = temp_v5;
    break;
  case 3:
    if (*(int *)(DAT_0057f3b8 + 0x18) == 3) {
      *(unsigned int *)(DAT_0057f3b8 + 0x10) = 0x3f800000;
    }
    else {
      temp_v3 = (float)VectorSignedToFloat(*(unsigned int *)(DAT_0057f3b8 + 0xc),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = temp_v3 * 0.07f;
      FUN_001bbf0c();
      *(float *)(temp_v0 + 0x10) = (temp_v3 + temp_v5) * 0.5f * 0.5f + 0.5f;
    }
    break;
  case 4:
    temp_v5 = 0.0f;
    if ((0 < *(int *)(DAT_0057f3b8 + 0x1c)) && (temp_v2 = FUN_00203d74(), temp_v2 == 0)) {
      temp_v4 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v0 + 0xc),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v0 + 0x14) = temp_v3 / temp_v4;
      if (temp_v5 < temp_v3 / temp_v4) break;
    }
    *(unsigned int *)(temp_v0 + 8) = 5;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(float *)(temp_v0 + 0x14) = temp_v5;
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}
