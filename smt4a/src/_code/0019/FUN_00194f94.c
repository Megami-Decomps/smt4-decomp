/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00194f94` (_code @ 0x194f94, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_001a8d1c(unsigned int);


unsigned int FUN_00194f94(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001a8d1c(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}
