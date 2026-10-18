/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012312c` (_code @ 0x12312c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e32c; /* 0x44e32c */

/* Supplied declaration required: FUN_00133094. */
/* Supplied declaration required: FUN_00133568. */
/* Supplied declaration required: FUN_00137080. */
/* Supplied declaration required: FUN_00142a50. */


unsigned int FUN_0012312c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  DAT_0044e32c = param_1;
  FUN_00137080();
  FUN_00133094(DAT_0044e32c + 4);
  FUN_00142a50(DAT_0044e32c + 8);
  FUN_00133568(DAT_0044e32c + 0xc);
  return 0;
}
