/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b36b8` (_code @ 0x1b36b8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001ba5bc(unsigned int, unsigned int, unsigned int);


unsigned int FUN_001b36b8(int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  
  if (param_3 != 0) {
    temp_v0 = FUN_001ba5bc(*(unsigned int *)(param_1 + 0x20),param_2,1);
    return temp_v0;
  }
  return param_2;
}
