/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001abac8` (_code @ 0x1abac8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);


int FUN_001abac8(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return temp_v0 + param_1 * 4 + 0x2a0;
}
