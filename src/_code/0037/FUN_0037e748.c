/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e748` (_code @ 0x37e748, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015dbd0. */
/* Supplied declaration required: FUN_002b743c. */
/* Supplied declaration required: FUN_002bf59c. */
/* Supplied declaration required: FUN_0037c214. */


void FUN_0037e748(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  
  FUN_002b743c(param_1 + 4,param_2 + 0x58);
  FUN_002bf59c(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  FUN_0015dbd0(param_1,param_2);
  for (piVar1 = (int *)(param_2 + 0x58); (piVar1 != (int *)(param_1 + 8) && (piVar1[-6] >= 2));
      piVar1 = (int *)*piVar1) {
    if (piVar1[-6] != 0x7fff) {
      FUN_0037c214(piVar1 + -0x16);
    }
  }
  return;
}
