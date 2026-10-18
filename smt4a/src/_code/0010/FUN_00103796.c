/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103796` (_code @ 0x103796, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned long long FUN_001623d4(void);


void FUN_00103796(unsigned long long *param_1)

{
  unsigned long long temp_v0;
  
  temp_v0 = FUN_001623d4();
  *param_1 = temp_v0;
  return;
}
