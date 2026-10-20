/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00493154` (_code @ 0x493154, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(int, int);

extern int DAT_00587fdc; /* 0x587fdc */
extern int DAT_00587fe0; /* 0x587fe0 */

/* Supplied declaration required: asdTMTexTableReleaseNode. */


void FUN_00493154(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_00587fdc = DAT_00587fdc - 1;
  if (DAT_00587fdc == 0) {
    if (DAT_00587fe0 == 0x65) {
      asdTMTexTableReleaseNode(0x13,6);
    }
    if (DAT_00587fe0 == 0x66) {
      asdTMTexTableReleaseNode(0x13,7);
    }
    if (DAT_00587fe0 == 0x67) {
      asdTMTexTableReleaseNode(0x13,8);
    }
    DAT_00587fe0 = 0;
  }
  return;
}

} /* extern "C" */
