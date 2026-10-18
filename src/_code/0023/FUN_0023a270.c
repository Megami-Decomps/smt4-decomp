/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a270` (_code @ 0x23a270, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e64c0; /* 0x4e64c0 */


int FUN_0023a270(int *param_1,unsigned int *param_2,int param_3)

{
  int temp_v0;
  
  if ((param_3 == *param_1) && (param_3 != 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = -0x275ec73f;
  }
  if (-1 < temp_v0) {
    *param_2 = (unsigned int)&DAT_004e64c0;
    temp_v0 = 0;
  }
  return temp_v0;
}
