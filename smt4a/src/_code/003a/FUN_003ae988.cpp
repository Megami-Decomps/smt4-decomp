/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae988` (_code @ 0x3ae988, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f4c4; /* 0x57f4c4 */


unsigned int FUN_003ae988(int param_1)

{
  unsigned int temp_v0;
  
  if (*(int *)(DAT_0057f4c4 + 0x634) == param_1) {
    temp_v0 = 0;
  }
  else if (*(int *)(DAT_0057f4c4 + 0x638) == param_1) {
    temp_v0 = 1;
  }
  else if (*(int *)(DAT_0057f4c4 + 0x63c) == param_1) {
    temp_v0 = 2;
  }
  else if (*(int *)(DAT_0057f4c4 + 0x640) == param_1) {
    temp_v0 = 3;
  }
  else {
    temp_v0 = 0xffffffff;
  }
  return temp_v0;
}

} /* extern "C" */
