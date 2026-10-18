/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263e48` (_code @ 0x263e48, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c5e2c(void);
/* Supplied declaration required: FUN_00310124. */


void FUN_00263e48(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c5e2c();
  temp_v1 = temp_v0;
  FUN_00310124();
  *(int *)(temp_v1 + 0x14) = temp_v0;
  return;
}
