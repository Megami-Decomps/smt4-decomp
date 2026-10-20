/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd7b4` (_code @ 0x3fd7b4, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003fd7b4(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  *(unsigned int *)(param_1 + 0x1b4) = in_s0;
  *(unsigned int *)(param_1 + 0x1b8) = in_s1;
  *(unsigned int *)(param_1 + 0x1bc) = in_s2;
  return;
}

} /* extern "C" */
