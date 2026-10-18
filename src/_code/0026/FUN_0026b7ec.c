/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b7ec` (_code @ 0x26b7ec, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */
extern unsigned int DAT_0043e2b8; /* 0x43e2b8 */

/* Supplied declaration required: FUN_002c36fc. */


void FUN_0026b7ec(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0043e2a8 = 0;
  DAT_0043e2b8 = param_1 | DAT_0043e2b8;
  FUN_002c36fc(0);
  return;
}
