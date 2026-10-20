/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001233b8` (_code @ 0x1233b8, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_001233b8(unsigned char *param_1,short *param_2,int param_3)

{
  unsigned char *pbVar1;
  unsigned char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  short *psVar5;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = 0;
  param_3 = param_3 - 1;
  temp_v1 = 0;
  psVar5 = param_2;
  while ((temp_v0 = *param_1, temp_v0 != 0 && (param_3 != 0))) {
    if (temp_v1) {
      temp_v3 = -1;
      psVar5 = param_2;
      *psVar5 = 0;
      return temp_v3;
    }
    temp_v4 = (unsigned int)temp_v0;
    if (temp_v4 < 0x80) {
      temp_v2 = (short)(char)temp_v0;
      *psVar5 = temp_v2;
      psVar5 = psVar5 + 1;
      param_3 = param_3 - 1;
      temp_v3 = temp_v3 + 1;
    }
    else {
      if (temp_v4 - 0xc2 < 0x1e) {
        param_1 = param_1 + 1;
        temp_v2 = ((unsigned short)temp_v0 * 0x40 + (unsigned short)*param_1) - 0x3080;
        *psVar5 = temp_v2;
        psVar5 = psVar5 + 1;
        param_3 = param_3 - 1;
        temp_v3 = temp_v3 + 1;
        param_1 = param_1 + 1;
        continue;
      }
      if (temp_v4 - 0xe0 < 0x10) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        temp_v2 = ((char)temp_v0 * 0x1000 + (unsigned short)*pbVar1 * 0x40 + (unsigned short)*param_1) - 0x2080;
        *psVar5 = temp_v2;
        psVar5 = psVar5 + 1;
        param_3 = param_3 - 1;
        temp_v3 = temp_v3 + 1;
        param_1 = param_1 + 1;
        continue;
      }
      temp_v1 = 1;
    }
    param_1 = param_1 + 1;
  }
  if (temp_v1) {
    temp_v3 = -1;
    psVar5 = param_2;
  }
  else {
    temp_v3 = temp_v3 + 1;
  }
  *psVar5 = 0;
  return temp_v3;
}

} /* extern "C" */
