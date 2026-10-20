/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351590` (_code @ 0x351590, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00351590(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x8c);
  while( 1 ) {
    if (temp_v0 == 0) {
      return 0;
    }
    if (*(int *)(temp_v0 + 0x90) == param_2) break;
    temp_v0 = *(int *)(temp_v0 + 0xac);
  }
  return temp_v0;
}

} /* extern "C" */
