/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fa70` (_code @ 0x26fa70, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0029b0fc. */
/* Supplied declaration required: FUN_0029bb8c. */


void FUN_0026fa70(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_0029b0fc();
    return;
  }
  FUN_0029bb8c();
  return;
}
