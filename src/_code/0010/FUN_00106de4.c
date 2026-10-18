/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106de4` (_code @ 0x106de4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e7bc; /* 0x44e7bc */

/* Supplied declaration required: FUN_0010fc28. */
/* Supplied declaration required: FUN_00128174. */


void FUN_00106de4(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e7bc == '\0') {
    FUN_0010fc28();
    FUN_00128174();
    DAT_0044e7bc = '\x01';
  }
  return;
}
