/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135a7c` (_code @ 0x135a7c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001359a8(void);

/* Supplied declaration required: FUN_001359a8. */


void FUN_00135a7c(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  if (puVar1 != *(unsigned int **)(param_1 + 8)) {
    *(unsigned int **)(param_1 + 4) = puVar1 + 2;
    if (puVar1 != (unsigned int *)0x0) {
      temp_v0 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = temp_v0;
    }
    return;
  }
  FUN_001359a8();
  return;
}

} /* extern "C" */
