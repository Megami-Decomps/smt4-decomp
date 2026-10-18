/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a80b4` (_code @ 0x2a80b4, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004765ec; /* 0x4765ec */

/* Supplied declaration required: FUN_002c4450. */


void FUN_002a80b4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x24) & 2) != 0) {
    FUN_002c4450(param_2,param_3,DAT_004765ec);
    return;
  }
  return;
}
