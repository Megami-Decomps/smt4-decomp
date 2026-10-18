/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141ff8` (_code @ 0x141ff8, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_0014d36c(unsigned int);


unsigned int FUN_00141ff8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0014d36c(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}
