/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb310` (_code @ 0x2eb310, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135586(void);

/* Supplied declaration required: FUN_00135586. */


void FUN_002eb310(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  if (puVar1 != *(unsigned int **)(param_1 + 8)) {
    *(unsigned int **)(param_1 + 4) = puVar1 + 1;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = *param_2;
    }
    return;
  }
  FUN_00135586();
  return;
}

} /* extern "C" */
