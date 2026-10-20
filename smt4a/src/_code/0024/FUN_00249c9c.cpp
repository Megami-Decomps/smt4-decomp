/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249c9c` (_code @ 0x249c9c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int asdTMTexTableReleaseNode(int, unsigned int);

extern int g_mapTable; /* 0x5821c4 */
extern int DAT_005821f4; /* 0x5821f4 */
extern unsigned int DAT_005821f8; /* 0x5821f8 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */


void FUN_00249c9c(void)

{
/* irregular: 2 native warning(s); review required */
  if (g_mapTable != 0) {
    asdMemFree();
    g_mapTable = 0;
  }
  if (DAT_005821f4 != 0) {
    asdTMTexTableReleaseNode(0x2d,DAT_005821f8);
    DAT_005821f8 = 0;
    DAT_005821f4 = 0;
  }
  return;
}

} /* extern "C" */
