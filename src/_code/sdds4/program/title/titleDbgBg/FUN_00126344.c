/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126344` (_code @ 0x126344, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e2e8; /* 0x44e2e8 */

/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00126344(void)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)(DAT_0044e2e8 + 4) = 1;
  FUN_002aeb2c(0);
  FUN_002aea7c(0);
  if (DAT_0044e2e8 != 0) {
    FUN_002c4360();
    DAT_0044e2e8 = 0;
  }
  return;
}
