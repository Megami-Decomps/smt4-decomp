/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ef9b8` (_code @ 0x3ef9b8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_003ef9b8(int param_1,int param_2)

{
  unsigned short temp_v0;
  
  if ((param_2 >= 0) && (*(short *)(param_1 + 0xe0) - 1 >= param_2)) {
    temp_v0 = *(unsigned short *)(param_1 + param_2 * 2 + 0xb8);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
