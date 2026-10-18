/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288990` (_code @ 0x288990, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00288990(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x50;
    if (*(int *)(temp_v0 + 0x18) != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002a7aa0();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
