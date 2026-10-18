/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106d88` (_code @ 0x106d88, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e7bc; /* 0x44e7bc */

/* Supplied declaration required: FUN_0010fb34. */
/* Supplied declaration required: FUN_00128098. */


void FUN_00106d88(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e7bc == '\0') {
    FUN_0010fb34();
    FUN_00128098();
    DAT_0044e7bc = '\x01';
  }
  return;
}
