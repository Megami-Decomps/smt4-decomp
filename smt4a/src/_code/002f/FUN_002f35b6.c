/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f35b6` (_code @ 0x2f35b6, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00307eb0(int, int);


unsigned int FUN_002f35b6(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_00307eb0(param_2,param_3);
  if ((temp_v0 == 0) &&
     ((temp_v0 = FUN_00307eb0(param_3,param_2), temp_v0 != 0 ||
      (temp_v0 = FUN_00307eb0(param_2 + 0x20,param_3 + 0x20), temp_v0 == 0)))) {
    return 0;
  }
  return 1;
}
