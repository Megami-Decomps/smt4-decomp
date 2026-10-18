/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336b98` (_code @ 0x336b98, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00336b98(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 4;
    temp_v2 = (int)*(short *)(temp_v0 + 0x445c);
    if (temp_v2 == param_2) {
      if (*(short *)(temp_v0 + 0x445e) != -1) {
        *(short *)(temp_v0 + 0x445e) = *(short *)(temp_v0 + 0x445e) + 1;
      }
      return;
    }
    if (temp_v2 == 0) {
      *(short *)(temp_v0 + 0x445c) = (short)param_2;
      if (*(short *)(temp_v0 + 0x445e) != -1) {
        *(short *)(temp_v0 + 0x445e) = *(short *)(temp_v0 + 0x445e) + 1;
      }
      return;
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x10) {
      return;
    }
  } while( 1 );
}
