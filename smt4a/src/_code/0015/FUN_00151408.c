/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151408` (_code @ 0x151408, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00151408(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 0x9c) = param_2;
  *(unsigned int *)(param_1 + 0xa0) = param_3;
  *(unsigned int *)(param_1 + 0xa8) = in_s0;
  return;
}
