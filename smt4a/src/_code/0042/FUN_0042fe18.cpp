/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fe18` (_code @ 0x42fe18, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int svcCloseHandle(int);

extern int g_nnCecdHandle; /* 0x5c1fc4 */

/* Supplied declaration required: svcCloseHandle. */


void FUN_0042fe18(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_nnCecdHandle != 0) {
    svcCloseHandle(g_nnCecdHandle);
    return;
  }
  return;
}

} /* extern "C" */
