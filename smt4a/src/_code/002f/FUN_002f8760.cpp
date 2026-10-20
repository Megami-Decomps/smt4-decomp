/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8760` (_code @ 0x2f8760, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00132384(int);
int FUN_002fe9d2(int);

/* Supplied declaration required: FUN_00132384. */
/* Supplied declaration required: FUN_002fe9d2. */


int FUN_002f8760(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_002fe9d2(param_1);
    puVar1 = *(unsigned int **)(param_1 + 0x10);
    *puVar1 = *(unsigned int *)(param_1 + 4);
    *(unsigned int **)(param_1 + 4) = puVar1;
    FUN_00132384(param_1);
  }
  return param_1;
}

} /* extern "C" */
