/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255398` (_code @ 0x255398, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
extern unsigned int FUN_00293c98(void);


void FUN_00255398(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,param_1);
  return;
}
