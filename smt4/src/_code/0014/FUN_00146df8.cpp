/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146df8` (_code @ 0x146df8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00146df8(int param_1,unsigned char param_2)

{
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x38);
  *(unsigned char *)(param_1 + 0x38) = param_2;
  return (int)temp_v0;
}

} /* extern "C" */
