/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126420` (_code @ 0x126420, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableFreeEntry(int);
int asdTMTexTableReleaseNode(int);
int asdMemFree(void);

extern int DAT_0044e2e8; /* 0x44e2e8 */

/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFree. */


void FUN_00126420(void)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)(DAT_0044e2e8 + 4) = 1;
  asdTMTexTableReleaseNode(0);
  asdTMTexTableFreeEntry(0);
  if (DAT_0044e2e8 != 0) {
    asdMemFree();
    DAT_0044e2e8 = 0;
  }
  return;
}

} /* extern "C" */
