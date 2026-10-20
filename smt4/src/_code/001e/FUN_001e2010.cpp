/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2010` (_code @ 0x1e2010, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

extern int g_aocMain; /* 0x432fc8 */
extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */

/* Supplied declaration required: jobStop. */


void FUN_001e2010(void)

{
/* irregular: 1 native warning(s); review required */
  jobStop(*DAT_0043e0d0,0);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  return;
}

} /* extern "C" */
