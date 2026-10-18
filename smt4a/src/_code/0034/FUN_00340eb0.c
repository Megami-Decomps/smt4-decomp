/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340eb0` (_code @ 0x340eb0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b326c; /* 0x5b326c */


unsigned int FUN_00340eb0(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_005b326c;
  DAT_005b326c = param_1;
  return temp_v0;
}
