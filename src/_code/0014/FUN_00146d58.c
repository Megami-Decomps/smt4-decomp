/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146d58` (_code @ 0x146d58, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_0013a5c4. */


void FUN_00146d58(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  FUN_0013a5c4(&DAT_004ead10);
  return;
}
