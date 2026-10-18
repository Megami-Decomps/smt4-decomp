/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00470e48` (_code @ 0x470e48, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001b2ca4(unsigned int, unsigned int, unsigned int);


int FUN_00470e48(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001b2ca4(param_1,0x10,param_2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = (int)*(char *)(temp_v0 + 0xd);
  }
  return temp_v1;
}
