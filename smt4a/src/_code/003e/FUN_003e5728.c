/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5728` (_code @ 0x3e5728, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003e5728(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0x1fc) = in_s0;
  }
  return;
}
