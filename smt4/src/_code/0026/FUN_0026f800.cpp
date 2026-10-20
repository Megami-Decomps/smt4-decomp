/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f800` (_code @ 0x26f800, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029ae60(void);
int FUN_0029b8ec(void);

/* Supplied declaration required: FUN_0029ae60. */
/* Supplied declaration required: FUN_0029b8ec. */


void FUN_0026f800(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_0029ae60();
    return;
  }
  FUN_0029b8ec();
  return;
}

} /* extern "C" */
