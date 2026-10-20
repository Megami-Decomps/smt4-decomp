/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115cb4` (_code @ 0x115cb4, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011c03c(void);

extern unsigned char DAT_00559bd8; /* 0x559bd8 */

/* Supplied declaration required: FUN_0011c03c. */


void FUN_00115cb4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011c03c();
  *param_1 = (unsigned int)&DAT_00559bd8;
  return;
}

} /* extern "C" */
