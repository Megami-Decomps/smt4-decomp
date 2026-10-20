/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001768b4` (_code @ 0x1768b4, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001768b4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int *unaff_r11;
  
  temp_v12 = unaff_r11[-0x40];
  temp_v0 = (temp_v12 & 0xffff) >> 8;
  temp_v1 = (temp_v12 & 0xffffff) >> 0x10;
  temp_v2 = temp_v12 >> 0x18;
  temp_v4 = (int)(temp_v0 + temp_v1 + 1) >> 1;
  temp_v5 = (int)(temp_v1 + temp_v2 + 1) >> 1;
  temp_v11 = unaff_r11[-0x3f];
  temp_v10 = temp_v11;
  temp_v6 = (int)(temp_v2 + temp_v10 + 1) >> 1;
  *unaff_r11 = ((int)((temp_v12 & 0xff) + temp_v0 + 1) >> 1) | (temp_v4 << 8) | (temp_v5 << 0x10) |
               (temp_v6 << 0x18);
  temp_v7 = (int)(temp_v1 + temp_v2 * 2 + temp_v10 + 2) >> 2;
  temp_v3 = (temp_v11 & 0xffff) >> 8;
  temp_v8 = (int)(temp_v0 + temp_v1 * 2 + temp_v2 + 2) >> 2;
  temp_v9 = (int)(temp_v2 + temp_v10 * 2 + temp_v3 + 2) >> 2;
  unaff_r11[0x40] =
       ((int)((temp_v12 & 0xff) + temp_v0 * 2 + temp_v1 + 2) >> 2) | (temp_v8 << 8) | (temp_v7 << 0x10) |
       (temp_v9 << 0x18);
  unaff_r11[0x80] =
       temp_v4 | (temp_v5 << 8) | (temp_v6 << 0x10) | (((int)(temp_v10 + temp_v3 + 1) >> 1) << 0x18);
  unaff_r11[0xc0] =
       temp_v8 | (temp_v7 << 8) | (temp_v9 << 0x10) |
       (((int)(temp_v10 + temp_v3 * 2 + ((temp_v11 & 0xffffff) >> 0x10) + 2) >> 2) << 0x18);
  return;
}

} /* extern "C" */
