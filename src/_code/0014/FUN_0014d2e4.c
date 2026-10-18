/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d2e4` (_code @ 0x14d2e4, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_00151d94(unsigned int);


unsigned char FUN_0014d2e4(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00151d94(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (unsigned int *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (unsigned int *)0x0;
}
