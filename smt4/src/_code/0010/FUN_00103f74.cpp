/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f74` (_code @ 0x103f74, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004650b0; /* 0x4650b0 */


unsigned char FUN_00103f74(int param_1)

{
  if (param_1 != 0) {
    DAT_004650b0 = param_1;
  }
  return param_1 != 0;
}

} /* extern "C" */
