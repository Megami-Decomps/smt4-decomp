/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123050` (_code @ 0x123050, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e32c; /* 0x44e32c */

/* Supplied declaration required: FUN_00132fb8. */
/* Supplied declaration required: FUN_0013348c. */
/* Supplied declaration required: FUN_00136fa4. */
/* Supplied declaration required: FUN_001423c0. */


unsigned int FUN_00123050(int param_1)

{
/* irregular: 4 native warning(s); review required */
  DAT_0044e32c = param_1;
  FUN_00136fa4();
  FUN_00132fb8(DAT_0044e32c + 4);
  FUN_001423c0(DAT_0044e32c + 8);
  FUN_0013348c(DAT_0044e32c + 0xc);
  return 0;
}
