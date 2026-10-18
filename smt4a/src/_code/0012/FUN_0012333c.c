/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012333c` (_code @ 0x12333c, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0012333c(unsigned short *param_1,unsigned char *param_2,int param_3)

{
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = 0;
  param_3 = param_3 - 1;
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = *param_1;
    temp_v4 = (unsigned int)temp_v0;
    if (((temp_v4 == 0) || (param_3 == 0)) || (temp_v2)) break;
    temp_v1 = (unsigned char)temp_v0;
    if (temp_v4 < 0x80) {
      *param_2 = temp_v1;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      temp_v3 = temp_v3 + 1;
    }
    else if (temp_v4 < 0x800) {
      *param_2 = (unsigned char)(temp_v0 >> 6) | 0xc0;
      param_2[1] = (temp_v1 & 0x3f) + 0x80;
      param_2 = param_2 + 2;
      param_3 = param_3 - 2;
      temp_v3 = temp_v3 + 2;
    }
    else if (temp_v4 < 0x10000) {
      *param_2 = (unsigned char)(temp_v0 >> 0xc) | 0xe0;
      param_2[1] = (char)((temp_v4 & 0xfff) >> 6) + 0x80;
      param_2[2] = (temp_v1 & 0x3f) + 0x80;
      param_2 = param_2 + 3;
      param_3 = param_3 - 3;
      temp_v3 = temp_v3 + 3;
    }
    else {
      temp_v2 = 1;
    }
    param_1 = param_1 + 1;
  }
  *param_2 = 0;
  return temp_v3;
}
