/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a150c` (_code @ 0x1a150c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_001a150c(int param_1,unsigned short param_2)

{
  unsigned short temp_v0;
  
  temp_v0 = *(unsigned short *)(param_1 + 0x34);
  *(unsigned short *)(param_1 + 0x34) = param_2;
  return temp_v0;
}
