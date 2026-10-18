/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123306` (_code @ 0x123306, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f32f8. */
extern unsigned int FUN_002fbb86(unsigned int);


void FUN_00123306(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002fbb86(param_2);
  FUN_002f32f8(param_1,temp_v0);
  return;
}
