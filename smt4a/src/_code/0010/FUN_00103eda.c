/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103eda` (_code @ 0x103eda, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00103eda(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 1) {
      if ((((param_1 == 2) || (param_1 == 3)) || (param_1 == 4)) && (param_2 == 0)) {
        return 1;
      }
    }
    else {
      if (param_2 == 2) {
        return 1;
      }
      if (param_2 == 3) {
        return 1;
      }
      if (param_2 == 4) {
        return 1;
      }
    }
  }
  else if (param_2 == 1) {
    return 1;
  }
  return 0;
}
