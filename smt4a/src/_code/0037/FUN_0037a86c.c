/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a86c` (_code @ 0x37a86c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0037a86c(int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = *param_1;
  while( 1 ) {
    if (temp_v0 == 0) {
      return 0;
    }
    if (*(int *)(temp_v0 + 8) == param_2) break;
    temp_v0 = *(int *)(temp_v0 + 0x18);
  }
  return temp_v0;
}
