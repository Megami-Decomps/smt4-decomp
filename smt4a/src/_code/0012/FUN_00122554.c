/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122554` (_code @ 0x122554, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001224e4. */
/* Supplied declaration required: FUN_002fa010. */
/* Supplied declaration required: FUN_003111fa. */


void FUN_00122554(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_001224e4(param_1,*(unsigned int *)(param_1 + 0x14));
  temp_v2 = *(int *)(param_1 + 0xc) + ((unsigned int)((7 - *(int *)(param_1 + 0x10)) + param_2) >> 3) + 1;
  if ((unsigned int)(*(int *)(*(int *)(param_1 + 8) + 0x14) - *(int *)(*(int *)(param_1 + 8) + 0x18)) <
      temp_v2) {
    temp_v0 = FUN_003111fa();
    temp_v1 = FUN_003111fa(*(unsigned int *)(param_1 + 8));
    temp_v1 = temp_v0 + (temp_v1 >> 1);
    if (temp_v1 <= temp_v2) {
      temp_v1 = temp_v2;
    }
    FUN_002fa010(*(unsigned int *)(param_1 + 8),temp_v1);
  }
  return;
}
