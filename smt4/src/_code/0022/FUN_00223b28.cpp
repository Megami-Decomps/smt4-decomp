/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223b28` (_code @ 0x223b28, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned int FUN_00223b28(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + param_1 * 0x34;
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

} /* extern "C" */
