/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ea80` (_code @ 0x39ea80, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0039ea80(int param_1)

{
  unsigned int temp_v0;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x387c) != 0x1f)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
