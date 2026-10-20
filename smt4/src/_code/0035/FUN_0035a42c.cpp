/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a42c` (_code @ 0x35a42c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0035a42c(int param_1,int param_2)

{
  if (param_1 != 10) {
    if (param_1 != 0xd) {
      return 0;
    }
    if (param_2 == 10) {
      return 2;
    }
  }
  return 1;
}

} /* extern "C" */
