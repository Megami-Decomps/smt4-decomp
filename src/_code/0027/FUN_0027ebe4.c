/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ebe4` (_code @ 0x27ebe4, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002347f4(int);
extern int FUN_00263e60(int);


int FUN_0027ebe4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002347f4(param_1 + 0x2e8);
  temp_v0 = FUN_00263e60(temp_v0 - 0x34);
  return temp_v0 - 0x2b4;
}
