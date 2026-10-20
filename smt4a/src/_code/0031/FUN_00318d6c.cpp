/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318d6c` (_code @ 0x318d6c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int asdTMTexTableReleaseNode(int, int);
int asdTMTexTableFreeEntry(int);
int FUN_00341f4c(void);

extern signed char DAT_0057f0c5; /* 0x57f0c5 */
extern unsigned int DAT_0057f0cc; /* 0x57f0cc */
extern unsigned int DAT_0057f0d0; /* 0x57f0d0 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_00341f4c. */


void FUN_00318d6c(void)

{
/* irregular: 4 native warning(s); review required */
  DAT_0057f0c5 = DAT_0057f0c5 - '\x01';
  if (DAT_0057f0c5 < '\x01') {
    FUN_00341f4c();
    asdMemFree(DAT_0057f0cc);
    asdMemFree(DAT_0057f0d0);
    asdTMTexTableReleaseNode(10,0);
    asdTMTexTableFreeEntry(10);
    DAT_0057f0c5 = '\0';
  }
  return;
}

} /* extern "C" */
