/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1dd8` (_code @ 0x2c1dd8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e316c; /* 0x4e316c */


unsigned int FUN_002c1dd8(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = param_1 == 0xffffffff;
  if (temp_v3) {
    param_1 = 0;
  }
  temp_v2 = param_1;
  temp_v1 = param_1;
  if (((!temp_v3) && (temp_v2 = 0, temp_v1 = DAT_004e316c, param_1 < 4)) &&
     (temp_v0 = param_1 * 0x50, *(int *)(temp_v0 + 0x4e2434) != 0)) {
    DAT_004e316c = temp_v0 + 0x4e2424;
    temp_v2 = 1;
    *(char *)(temp_v0 + 0x4e2470) = (char)param_1;
    temp_v1 = DAT_004e316c;
  }
  DAT_004e316c = temp_v1;
  return temp_v2;
}
