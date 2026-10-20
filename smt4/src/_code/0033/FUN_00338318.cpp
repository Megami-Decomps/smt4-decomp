/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338318` (_code @ 0x338318, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00338318(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = (int)*(short *)(param_1 + temp_v0 * 2 + 0x21dc);
    if (temp_v1 == param_2) {
      return;
    }
    if (temp_v1 < 1) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x2a) {
      return;
    }
  }
  *(short *)(param_1 + temp_v0 * 2 + 0x21dc) = (short)param_2;
  return;
}

} /* extern "C" */
