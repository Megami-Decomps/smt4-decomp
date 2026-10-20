/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f6384` (_code @ 0x4f6384, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004f6384(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = param_1 + temp_v0 * 4;
    temp_v2 = *(int *)(temp_v1 + 200);
    if (temp_v2 < 1) {
      temp_v2 = *(int *)(temp_v1 + 0xcc);
    }
    if (0 < temp_v2) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x32) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
