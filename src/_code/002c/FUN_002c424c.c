/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c424c` (_code @ 0x2c424c, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x002c3948. */


void FUN_002c424c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = (param_3 & 0xff) | ((param_3 & 0xff) << 8);
  func_0x002c3948(param_1,param_2,temp_v0 | (temp_v0 << 0x10));
  return;
}
