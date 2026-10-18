/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2d34` (_code @ 0x2a2d34, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_0015e07c. */


void FUN_002a2d34(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    FUN_0015e07c(&DAT_004ead10);
    return;
  }
  return;
}
