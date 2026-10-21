/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358f98` (_code @ 0x358f98, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int threadSleepDuration(int, int);

extern int g_nnCecdHandle; /* 0x473848 */

/* Supplied declaration required: threadSleepDuration. */


unsigned int FUN_00358f98(void)

{
/* irregular: 1 native warning(s); review required */
  while (g_nnCecdHandle == 0) {
    threadSleepDuration(10000000,0);
  }
  return 0;
}

} /* extern "C" */
