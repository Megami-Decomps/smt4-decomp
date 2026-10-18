/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff524` (_code @ 0x3ff524, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003ff524(unsigned short *param_1,unsigned int param_2)

{
  unsigned short temp_v0;
  
  temp_v0 = *param_1;
  if (param_2 != 0x1c) {
    if ((int)param_2 < 0x1d) {
      if (param_2 == 0x16) {
        *param_1 = temp_v0 | 0x3be0;
        return;
      }
      if (param_2 == 0x18) {
        *param_1 = temp_v0 | 0x3fe2;
        return;
      }
      if (param_2 == 0x1b) {
        *param_1 = temp_v0 | 0x3be2;
        return;
      }
    }
    else {
      if (param_2 == 0x1f) {
        temp_v0 = temp_v0 | 0x220;
        *param_1 = temp_v0;
        return;
      }
      if (param_2 == 0x25) {
        temp_v0 = temp_v0 | 0x3bea;
        *param_1 = temp_v0;
        return;
      }
    }
    temp_v0 = temp_v0 | (unsigned short)(1 << (param_2 & 0xff));
  }
  else {
    temp_v0 = temp_v0 | 0x39c0;
  }
  *param_1 = temp_v0;
  return;
}
