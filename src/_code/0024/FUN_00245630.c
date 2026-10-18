/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245630` (_code @ 0x245630, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00247214(unsigned int, unsigned int, unsigned char);


void FUN_00245630(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_00247214(param_3,param_2,param_4 != 0);
  *(unsigned int *)(param_1 + 0x1cfc) = temp_v0;
  return;
}
