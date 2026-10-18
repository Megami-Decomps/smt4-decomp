/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152298` (_code @ 0x152298, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_00155774(unsigned int);
/* Supplied declaration required: FUN_001557bc. */


unsigned char FUN_00152298(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)FUN_00155774(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (unsigned int *)0x0) {
    *param_3 = *puVar1;
    puVar2 = puVar1;
    FUN_001557bc();
    param_3[1] = (unsigned int)puVar2;
    *(unsigned char *)(param_3 + 2) = *(unsigned char *)(puVar1 + 1);
  }
  return puVar1 != (unsigned int *)0x0;
}
