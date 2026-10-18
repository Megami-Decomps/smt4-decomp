/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6de8` (_code @ 0x3e6de8, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_003e6760(unsigned int);


unsigned int FUN_003e6de8(int param_1)

{
  unsigned int *puVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = (unsigned int *)FUN_003e6760(*(unsigned int *)(param_1 + 8));
    return *puVar1;
  }
  return 0;
}
