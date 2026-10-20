/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e4d8` (_code @ 0x23e4d8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0023e4d8(unsigned short *param_1)

{
  unsigned short temp_v0;
  
  temp_v0 = *param_1;
  if ((temp_v0 & 0x40) != 0) {
    temp_v0 = temp_v0 & 0xffbf;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 0x80) != 0) {
    temp_v0 = temp_v0 & 0xff7f;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 0x100) != 0) {
    temp_v0 = temp_v0 & 0xfeff;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 0x10) != 0) {
    temp_v0 = temp_v0 & 0xffef;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 8) != 0) {
    *param_1 = temp_v0 & 0xfff7;
  }
  return;
}

} /* extern "C" */
