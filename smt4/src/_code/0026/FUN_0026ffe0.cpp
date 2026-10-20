/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ffe0` (_code @ 0x26ffe0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(int, unsigned int);
int asdMemFree(void);

extern int g_mapTable; /* 0x448c58 */
extern int DAT_00448c88; /* 0x448c88 */
extern unsigned int DAT_00448c8c; /* 0x448c8c */

/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFree. */


void FUN_0026ffe0(void)

{
/* irregular: 2 native warning(s); review required */
  if (g_mapTable != 0) {
    asdMemFree();
    g_mapTable = 0;
  }
  if (DAT_00448c88 != 0) {
    asdTMTexTableReleaseNode(0x38,DAT_00448c8c);
    DAT_00448c8c = 0;
    DAT_00448c88 = 0;
  }
  return;
}

} /* extern "C" */
