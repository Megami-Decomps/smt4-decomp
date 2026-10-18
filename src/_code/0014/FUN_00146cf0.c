/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146cf0` (_code @ 0x146cf0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_00146cf0(int param_1,unsigned short param_2)

{
  unsigned short temp_v0;
  
  temp_v0 = *(unsigned short *)(param_1 + 0x36);
  *(unsigned short *)(param_1 + 0x36) = (param_2 & 1) | (temp_v0 & 0xfffe);
  return temp_v0 & 1;
}
