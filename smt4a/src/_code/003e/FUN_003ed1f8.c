/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed1f8` (_code @ 0x3ed1f8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003ed1f8(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = (int)*(short *)(param_1 + temp_v0 * 2 + 0x2214);
    if (temp_v1 == param_2) {
      return;
    }
    if (temp_v1 < 1) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x2a) {
      return;
    }
  }
  *(short *)(param_1 + temp_v0 * 2 + 0x2214) = (short)param_2;
  return;
}
