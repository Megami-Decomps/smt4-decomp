/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001571c4` (_code @ 0x1571c4, 0x110 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001571c4(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (0xbff - param_1 >= 0xc00) {
    temp_v0 = (0xbff - param_1) / 0xc00;
    temp_v1 = -temp_v0;
    param_1 = param_1 + temp_v0 * 0xc00;
  }
  if (-param_1 / 0xc00 != 0 && -1 < -(-param_1 / 0xc00)) {
    temp_v1 = temp_v1 + param_1 / 0xc00;
  }
  if (0 < temp_v1) {
    for (temp_v1 = temp_v1 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    }
    temp_v1 = 0;
  }
  if (temp_v1 != 0 && -1 < -temp_v1) {
    for (temp_v1 = -temp_v1 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    }
  }
  return;
}
