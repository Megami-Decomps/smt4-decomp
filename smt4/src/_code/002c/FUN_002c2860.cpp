/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2860` (_code @ 0x2c2860, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004c6290; /* 0x4c6290 */


void FUN_002c2860(int param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  
  temp_v0 = param_1 == 0x400;
  if (!temp_v0) {
    param_3 = param_1 - 0x401;
    temp_v0 = param_3 == 0;
  }
  if (temp_v0) {
    (*(int *)((unsigned char *)&DAT_004c6290 + 0x124)) = param_1 - 0x400;
  }
  else if (param_3 == 0xf) {
    (*(int *)((unsigned char *)&DAT_004c6290 + 0x124)) = 2;
  }
  return;
}

} /* extern "C" */
