/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd730` (_code @ 0x4bd730, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


short FUN_004bd730(int param_1)

{
  short temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = *(short *)(param_1 + 0x62);
  }
  if (param_1 != 0 && temp_v0 != 0) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
