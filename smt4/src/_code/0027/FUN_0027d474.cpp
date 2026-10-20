/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d474` (_code @ 0x27d474, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044cdf0; /* 0x44cdf0 */


void FUN_0027d474(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = DAT_0044cdf0;
  *(unsigned int *)(DAT_0044cdf0 + 0xc) = param_1;
  *(unsigned int *)(temp_v0 + 0x10) = param_2;
  *(unsigned int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x18) = in_s0;
  return;
}

} /* extern "C" */
