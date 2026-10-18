/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6dac` (_code @ 0x2e6dac, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005949a8; /* 0x5949a8 */

extern unsigned int *FUN_0010726c(int);


unsigned int * FUN_002e6dac(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0010726c(((unsigned int)(param_1 * -0x40000000) >> 0x1e) + param_1 + 8);
  *puVar1 = DAT_005949a8;
  return puVar1 + 2;
}
