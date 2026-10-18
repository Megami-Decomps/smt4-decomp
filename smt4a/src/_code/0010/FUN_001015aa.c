/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001015aa` (_code @ 0x1015aa, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002e3cf8(void);


void FUN_001015aa(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002e3cf8();
  *puVar1 = param_1;
  return;
}
