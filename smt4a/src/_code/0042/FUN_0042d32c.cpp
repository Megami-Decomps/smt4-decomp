/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d32c` (_code @ 0x42d32c, 0x10 bytes) from smt4a.cxi.
 * retail branches to an unnamed function (`func_0x0042cea0`) with a fixed offset, no symbol.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x0042cea0(unsigned char *, unsigned int, unsigned int);

extern unsigned char DAT_00643310; /* 0x643310 */

/* Supplied declaration required: func_0x0042cea0. */


void FUN_0042d32c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  func_0x0042cea0(&DAT_00643310,param_1,param_2);
  return;
}

} /* extern "C" */
