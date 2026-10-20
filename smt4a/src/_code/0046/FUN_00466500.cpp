/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466500` (_code @ 0x466500, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00466500(int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 0x168) = in_s0;
  *(unsigned int *)(param_1 + 0x170) = param_2;
  *(unsigned int *)(param_1 + 0x16c) = 0;
  *(unsigned char *)(param_1 + 0x13b) = param_3;
  return;
}

} /* extern "C" */
