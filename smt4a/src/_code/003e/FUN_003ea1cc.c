/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea1cc` (_code @ 0x3ea1cc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003ea1cc(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = -1;
  temp_v1 = 0;
  while( 1 ) {
    temp_v2 = (int)*(short *)(param_1 + temp_v1 * 2 + 0x3006);
    if (-1 < temp_v2) {
      temp_v0 = (int)(short)((short)temp_v0 + 1);
    }
    if (temp_v2 == param_2) break;
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0xc) {
      return -1;
    }
  }
  return temp_v0;
}
