/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100bd4` (_code @ 0x100bd4, 0x1a bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c5e80. */
extern unsigned int *FUN_002c6644(void);


void FUN_00100bd4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c6644();
  temp_v0 = *puVar1;
  FUN_002c5e80(param_1,0,10);
  *puVar1 = temp_v0;
  return;
}
