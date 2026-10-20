/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029903c` (_code @ 0x29903c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0029903c(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        return 1;
      }
      if (param_1 != 3) {
        if ((param_1 == 5) && (param_2 != 2)) {
          return 1;
        }
      }
      else if (param_2 == 4) {
        return 1;
      }
    }
    else if (param_2 == 3 || param_2 == 4) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
