/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046c458` (_code @ 0x46c458, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001b2d88(unsigned int, unsigned int, unsigned int);


unsigned char FUN_0046c458(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_001b2d88(param_1,0x36,param_2);
  return temp_v0 != 0;
}

} /* extern "C" */
