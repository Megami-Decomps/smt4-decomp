/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f138` (_code @ 0x31f138, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned int FUN_0031f138(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + param_1 * 0x50;
    if ((int)param_2 >= 0x40) {
      temp_v2 = *(unsigned short *)(temp_v1 + 0x5f42) | 0xfc;
    }
    else {
      temp_v2 = (unsigned short)((param_2 & 0x3f) << 2) | (*(unsigned short *)(temp_v1 + 0x5f42) & 0xff03);
    }
    *(unsigned short *)(temp_v1 + 0x5f42) = temp_v2;
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
