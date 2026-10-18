/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdbc0` (_code @ 0x2cdbc0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0049fd14; /* 0x49fd14 */

/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_002cdbc0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(char *)(param_1 + 0x2f8) != '\0') || (DAT_0049fd14 != -1)) {
    FUN_002c57c8(6,0);
  }
  return 1;
}
