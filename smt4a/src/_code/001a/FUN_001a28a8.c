/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a28a8` (_code @ 0x1a28a8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void FUN_001a28a8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  if (*(int *)(param_1 + 4) != 0) {
    do {
      puVar2 = *(unsigned int **)(param_1 + 4);
      temp_v1 = *puVar2 >> 0x18;
      if (param_2 != 0) {
        temp_v1 = temp_v1 | 1;
      }
      else {
        temp_v1 = temp_v1 & 0xfffffffe;
      }
      temp_v0 = (unsigned char)hasExclusiveAccess(puVar2);
    } while (!temp_v0);
    *puVar2 = (*puVar2 & 0xffffff) | (temp_v1 << 0x18);
  }
  return;
}
