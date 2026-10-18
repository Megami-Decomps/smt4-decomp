/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142014` (_code @ 0x142014, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014d2f8. */
extern unsigned int *FUN_0014d318(unsigned int);


unsigned char FUN_00142014(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  
  puVar1 = (unsigned int *)FUN_0014d318(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v0 = puVar1 != (unsigned int *)0x0;
  if (temp_v0) {
    *param_3 = *puVar1;
    FUN_0014d2f8();
    param_3[1] = (unsigned int)puVar1;
  }
  return temp_v0;
}
