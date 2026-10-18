/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5c94` (_code @ 0x3e5c94, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003fdb18. */


void FUN_003e5c94(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_003fdb18();
    *(unsigned int *)(param_1 + 0xc) = *param_2;
    *(unsigned int *)(param_1 + 0x10) = param_2[1];
    *(unsigned int *)(param_1 + 0x14) = param_2[2];
  }
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 0x5c + 0x24);
    if (temp_v0 != 0) {
      FUN_003fdb18(*(unsigned int *)(temp_v0 + 4));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
