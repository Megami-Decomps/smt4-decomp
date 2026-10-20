/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb56c` (_code @ 0x2eb56c, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f8548(unsigned int);

extern signed char DAT_00594965; /* 0x594965 */
extern unsigned int DAT_005949ec; /* 0x5949ec */

/* Supplied declaration required: FUN_002f8548. */


void FUN_002eb56c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00594965 != '\0') {
    FUN_002f8548(DAT_005949ec);
  }
  return;
}

} /* extern "C" */
