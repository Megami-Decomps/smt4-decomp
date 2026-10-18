/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046c4f4` (_code @ 0x46c4f4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001b2ca4(unsigned int, int);
extern int FUN_001b3214(unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_0046c4f4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001b3214(param_2,param_2,param_3,param_1);
  if (temp_v0 == -1) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = FUN_001b2ca4(param_1,temp_v0);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = (int)*(char *)(temp_v1 + 0xd);
    }
  }
  return temp_v0;
}
