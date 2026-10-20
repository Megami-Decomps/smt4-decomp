/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276950` (_code @ 0x276950, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039cbe8(int, unsigned int);

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0039cbe8. */


void FUN_00276950(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0039cbe8(DAT_0044cdf0 + 0x40,param_1);
  return;
}

} /* extern "C" */
