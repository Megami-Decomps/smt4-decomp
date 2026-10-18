/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a43bc` (_code @ 0x3a43bc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0056fcc8; /* 0x56fcc8 */

/* Supplied declaration required: FUN_001f4908. */


void FUN_003a43bc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001f4908();
  FUN_001f4908(1,0x3c,0xff);
  *(unsigned int *)(DAT_0056fcc8 + 0x14c) = 4;
  return;
}
