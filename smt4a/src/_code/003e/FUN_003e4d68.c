/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4d68` (_code @ 0x3e4d68, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab888(unsigned int);


int FUN_003e4d68(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 >= 0xc) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_001ab888(param_1);
    temp_v0 = temp_v0 + param_1 * 0x134 + 0x1ddc;
  }
  return temp_v0;
}
