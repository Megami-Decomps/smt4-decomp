/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fe3c` (_code @ 0x42fe3c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int svcSleepThread(int, int);

extern int g_nnCecdHandle; /* 0x5c1fc4 */

/* Supplied declaration required: svcSleepThread. */


unsigned int FUN_0042fe3c(void)

{
/* irregular: 1 native warning(s); review required */
  while (g_nnCecdHandle == 0) {
    svcSleepThread(10000000,0);
  }
  return 0;
}

} /* extern "C" */
