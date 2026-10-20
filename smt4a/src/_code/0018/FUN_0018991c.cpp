/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018991c` (_code @ 0x18991c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189938(void);

extern signed char DAT_00589284; /* 0x589284 */

/* Supplied declaration required: FUN_00189938. */


void FUN_0018991c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00589284 != '\0') {
    FUN_00189938();
    return;
  }
  return;
}

} /* extern "C" */
