/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047c950` (_code @ 0x47c950, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_004d08d0(int);
extern int FUN_004d0ba4(int);


int FUN_0047c950(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004d0ba4(param_1 + 0x2e8);
  temp_v0 = FUN_004d08d0(temp_v0 - 0x34);
  return temp_v0 - 0x2b4;
}
