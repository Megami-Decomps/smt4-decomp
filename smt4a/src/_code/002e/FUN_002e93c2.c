/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e93c2` (_code @ 0x2e93c2, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e93da. */


void FUN_002e93c2(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e93da();
  *(unsigned short *)(*(int *)(param_1 + 4) + 6) =
       (unsigned short)((param_2 & 0xff) << 8) | ((unsigned short)(param_2 >> 8) & 0xff);
  *(unsigned char *)(param_1 + 0x65) = 0;
  return;
}
