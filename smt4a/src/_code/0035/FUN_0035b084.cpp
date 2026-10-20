/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b084` (_code @ 0x35b084, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bb31c(unsigned int);

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_004bb31c. */


void FUN_0035b084(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f390 != 0) {
    FUN_004bb31c(*(unsigned int *)(DAT_0057f390 + 4));
    return;
  }
  return;
}

} /* extern "C" */
