/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8754` (_code @ 0x4c8754, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004c8754(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = (unsigned int)((param_1 & 2) != 0);
  if ((param_1 & 0x20) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x40) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x80) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x100) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x200) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x400) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 8) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x800) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x1000) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  if ((param_1 & 0x2000) != 0) {
    temp_v0 = temp_v0 + 1;
  }
  return temp_v0;
}

} /* extern "C" */
