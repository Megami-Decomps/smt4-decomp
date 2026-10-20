/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7014` (_code @ 0x2b7014, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002af39c(int);

extern unsigned int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_002af39c. */


void FUN_002b7014(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002af39c(DAT_004729e4 << 2);
  DAT_004729e0 = 0;
  DAT_004729e4 = 0;
  return;
}

} /* extern "C" */
