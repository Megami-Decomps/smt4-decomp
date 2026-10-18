/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de944` (_code @ 0x2de944, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002de944(int param_1,int param_2)

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
