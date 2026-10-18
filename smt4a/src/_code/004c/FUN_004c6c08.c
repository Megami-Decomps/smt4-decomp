/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6c08` (_code @ 0x4c6c08, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004c6c08(unsigned short *param_1)

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
    temp_v0 = temp_v0 & 0xfff7;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 0x800) != 0) {
    temp_v0 = temp_v0 & 0xf7ff;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 0x1000) != 0) {
    temp_v0 = temp_v0 & 0xefff;
    *param_1 = temp_v0;
  }
  if ((temp_v0 & 0x2000) != 0) {
    *param_1 = temp_v0 & 0xdfff;
  }
  return;
}
