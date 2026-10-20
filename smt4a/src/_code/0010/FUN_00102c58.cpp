/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102c58` (_code @ 0x102c58, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00102c58(unsigned short *param_1,unsigned short *param_2,int param_3)

{
  unsigned int temp_v0;
  
  while( 1 ) {
    if (param_3 == 0) {
      return 0;
    }
    temp_v0 = (unsigned int)*param_1;
    if ((temp_v0 == 0) || (temp_v0 != *param_2)) break;
    param_3 = param_3 - 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return temp_v0 - *param_2;
}

} /* extern "C" */
