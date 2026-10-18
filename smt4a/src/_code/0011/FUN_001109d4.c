/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001109d4` (_code @ 0x1109d4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001109f4; /* 0x1109f4 */

/* Supplied declaration required: FUN_002e93ec. */


unsigned int FUN_001109d4(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x50) = *param_2;
  *(unsigned int *)(param_1 + 0x10) = param_2[1];
  FUN_002e93ec(param_1 + 0x28,&LAB_001109f4);
  *(unsigned short *)(param_1 + 0x2e) = 0;
  return 1;
}
