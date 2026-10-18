/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0b34` (_code @ 0x1d0b34, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001d1f5c. */
/* Supplied declaration required: FUN_001d2384. */
/* Supplied declaration required: FUN_001d239c. */


void FUN_001d0b34(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_001d1f5c();
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    if (*(char *)(temp_v0 + 0x139) != '\0') {
      FUN_001d239c(temp_v0);
    }
  }
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    FUN_001d2384(temp_v0);
  }
  *(unsigned int *)(param_1 + 0x130) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  return;
}
