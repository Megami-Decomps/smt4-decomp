/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b464` (_code @ 0x13b464, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void FUN_0013b464(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  if (*(int *)(param_1 + 4) != 0) {
    do {
      temp_v1 = **(unsigned int **)(param_1 + 4) >> 0x18;
      if (param_2 != 0) {
        temp_v1 = temp_v1 | 1;
      }
      else {
        temp_v1 = temp_v1 & 0xfffffffe;
      }
      temp_v0 = (unsigned char)hasExclusiveAccess(*(unsigned int **)(param_1 + 4));
    } while (!temp_v0);
    **(unsigned int **)(param_1 + 4) = (**(unsigned int **)(param_1 + 4) & 0xffffff) | (temp_v1 << 0x18);
  }
  return;
}
