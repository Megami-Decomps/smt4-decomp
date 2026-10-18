/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cde0` (_code @ 0x30cde0, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00303350. */


void FUN_0030cde0(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 4);
  if (param_3 != 0) {
    FUN_00303350(param_2 + 0x14);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}
