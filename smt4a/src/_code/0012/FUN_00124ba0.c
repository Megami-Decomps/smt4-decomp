/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124ba0` (_code @ 0x124ba0, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e3f68(int);


int FUN_00124ba0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002e3f68(param_1 + 0x10);
  return temp_v0 - 0x10;
}
