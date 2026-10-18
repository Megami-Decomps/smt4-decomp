/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301a08` (_code @ 0x301a08, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00301a08(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      *param_2 = 0x37;
      *param_3 = 4;
      return;
    }
    if (param_1 == 3) {
      temp_v0 = 0x3b;
    }
    else {
      if (param_1 != 4) {
        *param_2 = 0;
        *param_3 = 4;
        return;
      }
      temp_v0 = 0x3f;
    }
    *param_2 = temp_v0;
  }
  else {
    *param_2 = 0;
  }
  *param_3 = 4;
  return;
}
