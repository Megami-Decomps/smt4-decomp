/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030aba4` (_code @ 0x30aba4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002903f0(int);

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_002903f0. */


void FUN_0030aba4(void)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(DAT_0043dd50 + 0x5c4) == '\0') {
    FUN_002903f0(0);
    return;
  }
  return;
}

} /* extern "C" */
