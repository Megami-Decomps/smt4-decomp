/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7014` (_code @ 0x3e7014, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_003e698c(unsigned int);


unsigned int FUN_003e7014(int param_1)

{
  unsigned int *puVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = (unsigned int *)FUN_003e698c(*(unsigned int *)(param_1 + 8));
    return *puVar1;
  }
  return 0;
}
