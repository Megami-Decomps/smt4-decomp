/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ba38` (_code @ 0x40ba38, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0040ba70; /* 0x40ba70 */

/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */


void FUN_0040ba38(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_001cd3ec(*(unsigned int *)(param_1 + 8),&LAB_0040ba70);
  FUN_0040a908(*(unsigned int *)(param_1 + 8),0x10000);
  FUN_0040a918(*(unsigned int *)(param_1 + 8),0x30000);
  *(unsigned int *)(param_1 + 4) = 1;
  return;
}
