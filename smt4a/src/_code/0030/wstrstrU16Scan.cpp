/* NON_MATCHING: romwright 0.5.0 decompilation of `wstrstrU16Scan` (_code @ 0x30ed4e, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int wstrstrU16Scan(int param_1,int param_2)

{
  short temp_v0;
  short temp_v1;
  int temp_v2;
  
  do {
    temp_v2 = 0;
    while( 1 ) {
      temp_v1 = *(short *)(param_2 + temp_v2 * 2);
      if (temp_v1 == 0) {
        return param_1;
      }
      temp_v0 = *(short *)(param_1 + temp_v2 * 2);
      if (temp_v0 == 0) {
        return 0;
      }
      if (temp_v0 != temp_v1) break;
      temp_v2 = temp_v2 + 1;
    }
    if (*(short *)(param_2 + temp_v2 * 2) == 0) {
      return param_1;
    }
    param_1 = param_1 + 2;
  } while( 1 );
}

} /* extern "C" */
