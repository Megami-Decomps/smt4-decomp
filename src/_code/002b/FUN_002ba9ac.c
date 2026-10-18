/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba9ac` (_code @ 0x2ba9ac, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00131968(); /* 0x131968 */
extern signed char DAT_0044e3b0; /* 0x44e3b0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002b486c. */
/* Supplied declaration required: FUN_002b4b88. */


unsigned long long FUN_002ba9ac(int param_1)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x310) = 0;
  *(unsigned int *)(param_1 + 0x314) = 0;
  *(unsigned int *)(param_1 + 0x350) = 0;
  if (*(int *)(param_1 + 0x318) != 0) {
    FUN_002b4b88(*(int *)(param_1 + 0x318),FUN_00131968);
    *(unsigned int *)(param_1 + 0x318) = 0;
  }
  FUN_002b486c(param_1);
  return romwright_piece_4_4(0xe2d12000,(int)DAT_0044e3b0);
}
