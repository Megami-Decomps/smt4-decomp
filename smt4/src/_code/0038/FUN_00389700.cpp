/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389700` (_code @ 0x389700, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);


int FUN_00389700(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002a6d50(param_1,0xc,param_2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = (int)*(char *)(temp_v0 + 0xd);
  }
  return temp_v1;
}

} /* extern "C" */
