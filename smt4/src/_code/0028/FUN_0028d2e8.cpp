/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d2e8` (_code @ 0x28d2e8, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned short FUN_0028d2e8(int param_1,int param_2)

{
  unsigned short temp_v0;
  
  if ((param_2 >= 0) && (*(short *)(param_1 + 0xb4) - 1 >= param_2)) {
    temp_v0 = *(unsigned short *)(param_1 + param_2 * 2 + 0x8c);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
