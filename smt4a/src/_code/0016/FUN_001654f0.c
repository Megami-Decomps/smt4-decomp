/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001654f0` (_code @ 0x1654f0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0063d008; /* 0x63d008 */


unsigned char * FUN_001654f0(int param_1,unsigned char *param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = 0;
  temp_v4 = 0;
  if (param_2 == (unsigned char *)0x0) {
    param_2 = &DAT_0063d008;
  }
  do {
    temp_v0 = *(unsigned char *)(param_1 + temp_v4);
    temp_v3 = (unsigned int)temp_v0;
    temp_v5 = temp_v4 + 1;
    if (temp_v3 == 0) {
      param_2[temp_v1] = 0;
      param_2[temp_v1 + 1] = 0;
      return &DAT_0063d008;
    }
    if ((temp_v0 & 0x80) != 0) {
      param_2[temp_v1] = temp_v0;
      temp_v2 = *(unsigned char *)(param_1 + temp_v5);
      temp_v5 = temp_v4 + 2;
      param_2[temp_v1 + 1] = temp_v2;
    }
    else if (temp_v3 != 10) {
      param_2[temp_v1] = *(unsigned char *)(temp_v3 * 2 + 0x53d2e8);
      temp_v2 = *(unsigned char *)(temp_v3 * 2 + 0x53d2e9);
      param_2[temp_v1 + 1] = temp_v2;
    }
    else {
      param_2[temp_v1] = 0xf8;
      param_2[temp_v1 + 1] = 1;
    }
    temp_v1 = temp_v1 + 2;
    temp_v4 = temp_v5;
  } while (temp_v1 < 0x100);
  param_2[0xff] = 0;
  return &DAT_0063d008;
}
