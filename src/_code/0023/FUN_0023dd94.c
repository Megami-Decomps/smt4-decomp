/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023dd94` (_code @ 0x23dd94, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0023dd94(unsigned short *param_1,unsigned int param_2)

{
  unsigned short temp_v0;
  
  temp_v0 = *param_1;
  switch(param_2) {
  case 0xc:
    temp_v0 = temp_v0 | 0x3e0;
    break;
  default:
    temp_v0 = temp_v0 | (unsigned short)(1 << (param_2 & 0xff));
    break;
  case 0xe:
    temp_v0 = temp_v0 | 0x7e2;
    break;
  case 0x11:
    temp_v0 = temp_v0 | 0x1e2;
    temp_v0 = temp_v0 | 0x200;
    break;
  case 0x12:
    temp_v0 = temp_v0 | 0x1c0;
    break;
  case 0x15:
    temp_v0 = temp_v0 | 0x20;
    temp_v0 = temp_v0 | 0x200;
  }
  *param_1 = temp_v0;
  return;
}
