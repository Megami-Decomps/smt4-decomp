/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010caa4` (_code @ 0x10caa4, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f292c(void);

extern unsigned char DAT_00558f18; /* 0x558f18 */

/* Supplied declaration required: FUN_002f292c. */


void FUN_0010caa4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558f18;
  FUN_002f292c();
  return;
}

} /* extern "C" */
