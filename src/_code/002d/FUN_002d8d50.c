/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8d50` (_code @ 0x2d8d50, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0049fd14; /* 0x49fd14 */

/* Supplied declaration required: FUN_002c59b8. */


unsigned int FUN_002d8d50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(char *)(param_1 + 0x2f8) != '\0') || (DAT_0049fd14 != -1)) {
    FUN_002c59b8(8,0);
  }
  return 1;
}
