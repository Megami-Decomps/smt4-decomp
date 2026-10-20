/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001656a0` (_code @ 0x1656a0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b4008; /* 0x5b4008 */
extern unsigned char DAT_00640000; /* 0x640000 */


unsigned int FUN_001656a0(unsigned int param_1)

{
  if (((param_1 < 0x1f) && ((DAT_005b4008 & 1) == 0 && (DAT_005b4008 & 2) == 0)) &&
     (*(int *)(&DAT_00640000 + param_1 * 4) == 1)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
