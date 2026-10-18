/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a439c` (_code @ 0x2a439c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002c6644(void);


void FUN_002a439c(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c6644();
  *puVar1 = param_1;
  return;
}
