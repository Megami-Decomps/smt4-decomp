/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a86e4` (_code @ 0x2a86e4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002ae898. */


void FUN_002a86e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_002ae898(*(unsigned int *)(param_1 + 0x10));
    FUN_002a60cc(DAT_00433158,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x84));
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x84) = 0xffffffff;
  }
  return;
}
