/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298d0c` (_code @ 0x298d0c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_0026d654. */


void FUN_00298d0c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(char *)(DAT_0044e144 + 0x12f1) = (char)param_1;
  FUN_0026d654(param_1 ^ 1);
  return;
}
