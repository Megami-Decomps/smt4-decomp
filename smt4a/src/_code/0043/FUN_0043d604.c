/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d604` (_code @ 0x43d604, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0043f990(unsigned int);


int FUN_0043d604(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_0043f990(param_2);
  return temp_v0 + param_1 + 0x3f94;
}
