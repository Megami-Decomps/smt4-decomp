/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002357a0` (_code @ 0x2357a0, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235870. */
/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: FUN_00235c44. */


void FUN_002357a0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0023592c();
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      FUN_00235870(temp_v0);
    }
  }
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    FUN_00235c44(temp_v0);
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  return;
}
