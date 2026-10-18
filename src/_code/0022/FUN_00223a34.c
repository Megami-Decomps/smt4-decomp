/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223a34` (_code @ 0x223a34, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned int FUN_00223a34(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = DAT_0043e2ac + param_1 * 0x34;
    if ((int)param_2 >= 0x40) {
      temp_v2 = *(unsigned short *)(temp_v1 + 0xc226) | 0xfc;
    }
    else {
      temp_v2 = (unsigned short)((param_2 & 0x3f) << 2) | (*(unsigned short *)(temp_v1 + 0xc226) & 0xff03);
    }
    *(unsigned short *)(temp_v1 + 0xc226) = temp_v2;
    temp_v0 = 1;
  }
  return temp_v0;
}
