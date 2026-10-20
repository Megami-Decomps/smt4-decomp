/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248674` (_code @ 0x248674, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a6d50(unsigned int, int);
extern int FUN_002a6f48(unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_00248674(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002a6f48(param_2,param_2,param_3,param_1);
  if (temp_v0 == -1) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = FUN_002a6d50(param_1,temp_v0);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = (int)*(char *)(temp_v1 + 0xd);
    }
  }
  return temp_v0;
}

} /* extern "C" */
