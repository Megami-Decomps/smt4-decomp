/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f934` (_code @ 0x36f934, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0036f464. */


unsigned int FUN_0036f934(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if ((param_2 != (unsigned int *)0x0) && ((~*param_2 & 0x80000001) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v0 = param_2[7];
  if (temp_v0 != 0) {
    puVar1 = (unsigned int *)((int)(param_2 + 7) + temp_v0);
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x80000002) != 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  if (puVar1 != (unsigned int *)0x0) {
    FUN_0036f464();
  }
  return 0;
}
