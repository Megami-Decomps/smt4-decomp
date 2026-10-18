/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037da34` (_code @ 0x37da34, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235ddc. */


void FUN_0037da34(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    FUN_00235ddc(temp_v0);
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  return;
}
