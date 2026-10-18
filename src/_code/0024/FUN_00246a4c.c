/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246a4c` (_code @ 0x246a4c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00246a4c(int param_1,int param_2)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x8c);
  while( 1 ) {
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v1 = param_2 == 0;
    param_2 = param_2 - 1;
    if (temp_v1) break;
    temp_v0 = *(int *)(temp_v0 + 0xac);
  }
  return temp_v0;
}
