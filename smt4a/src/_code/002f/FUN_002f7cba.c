/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7cba` (_code @ 0x2f7cba, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00103f54. */
extern unsigned int FUN_0010ed0c(unsigned int, unsigned int);


void FUN_002f7cba(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_0010ed0c(param_1,param_3);
  FUN_00103f54(param_2,temp_v0,0,1);
  return;
}
