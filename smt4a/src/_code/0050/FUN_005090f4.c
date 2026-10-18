/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005090f4` (_code @ 0x5090f4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_005085f4(unsigned int);


unsigned int FUN_005090f4(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_005085f4(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}
