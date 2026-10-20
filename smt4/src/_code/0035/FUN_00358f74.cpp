/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358f74` (_code @ 0x358f74, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int svcCloseHandle(int);

extern int g_nnCecdHandle; /* 0x473848 */

/* Supplied declaration required: svcCloseHandle. */


void FUN_00358f74(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_nnCecdHandle != 0) {
    svcCloseHandle(g_nnCecdHandle);
    return;
  }
  return;
}

} /* extern "C" */
