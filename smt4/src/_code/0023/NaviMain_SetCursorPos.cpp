/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_SetCursorPos` (_code @ 0x2319a4, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044cdf0; /* 0x44cdf0 */


void NaviMain_SetCursorPos(unsigned int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0044cdf0;
  temp_v1 = param_2[1];
  *(unsigned int *)(DAT_0044cdf0 + 0x38) = *param_2;
  *(unsigned int *)(temp_v0 + 0x3c) = temp_v1;
  return;
}

} /* extern "C" */
