/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a464e` (_code @ 0x2a464e, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002c6840(void);


void FUN_002a464e(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c6840();
  *puVar1 = param_1;
  return;
}
