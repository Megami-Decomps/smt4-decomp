/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003402c4` (_code @ 0x3402c4, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0029bdb4. */


void FUN_003402c4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    puVar1 = *(unsigned int **)(param_1 + temp_v0 * 4 + 0x10);
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 4) == 0)) {
      *puVar1 = *puVar1 | 4;
      *(int *)(puVar1[2] + 0x74) = (int)temp_v1;
      FUN_0029bdb4();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}
