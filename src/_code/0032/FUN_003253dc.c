/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003253dc` (_code @ 0x3253dc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00242a80. */
extern int FUN_00293c98(void);


unsigned int FUN_003253dc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00242a80(*param_1,1);
  temp_v0 = FUN_00293c98();
  *(unsigned int *)(temp_v0 + 0x44a0) = *(unsigned int *)(temp_v0 + 0x44a0) | 0x20000000;
  return 1;
}
