/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8050` (_code @ 0x3c8050, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00514500. */


void FUN_003c8050(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = 0;
  temp_v3 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x38);
  temp_v1 = **(int **)(param_1 + 0x30);
  if (temp_v3 != 0) {
    do {
      temp_v0 = 0;
      FUN_00514500();
      temp_v2 = temp_v2 + 1;
      *(int *)(temp_v1 + 4) = ~(temp_v0 % 4);
      temp_v1 = temp_v1 + 0xc;
    } while (temp_v2 < temp_v3);
  }
  return;
}
