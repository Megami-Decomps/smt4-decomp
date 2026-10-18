/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c36fc` (_code @ 0x2c36fc, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465199; /* 0x465199 */


int FUN_002c36fc(signed char param_1)

{
  int temp_v0;
  
  temp_v0 = (int)DAT_00465199;
  DAT_00465199 = param_1;
  return temp_v0;
}
