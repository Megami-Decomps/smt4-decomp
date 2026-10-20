/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001664bc` (_code @ 0x1664bc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001960fc(int);

extern unsigned int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_001960fc. */


void FUN_001664bc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001960fc(DAT_005b3fe8 << 2);
  DAT_005b3fe4 = 0;
  DAT_005b3fe8 = 0;
  return;
}

} /* extern "C" */
