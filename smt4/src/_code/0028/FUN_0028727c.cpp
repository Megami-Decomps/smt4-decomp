/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028727c` (_code @ 0x28727c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableFreeEntry(int);
int asdTMTexTableReleaseNode(int, int);
int asdMemFree(unsigned int);
int FUN_002d661c(void);

extern signed char DAT_0043da29; /* 0x43da29 */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern unsigned int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002d661c. */


void FUN_0028727c(void)

{
/* irregular: 4 native warning(s); review required */
  DAT_0043da29 = DAT_0043da29 - '\x01';
  if (DAT_0043da29 < '\x01') {
    FUN_002d661c();
    asdMemFree(DAT_0043da30);
    asdMemFree(DAT_0043da34);
    asdTMTexTableReleaseNode(0x12,0);
    asdTMTexTableFreeEntry(0x12);
    DAT_0043da29 = '\0';
  }
  return;
}

} /* extern "C" */
