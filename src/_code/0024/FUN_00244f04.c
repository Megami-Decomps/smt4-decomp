/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244f04` (_code @ 0x244f04, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */

/* Supplied declaration required: FUN_002c2b34. */


void FUN_00244f04(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c2b34((&DAT_00464b7c)[param_1],(&DAT_00464b84)[param_1]);
  return;
}
