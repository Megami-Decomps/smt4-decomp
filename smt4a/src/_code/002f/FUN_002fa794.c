/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa794` (_code @ 0x2fa794, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00124282. */
extern unsigned int FUN_002ea0e4(void);


void FUN_002fa794(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ea0e4();
  FUN_00124282(param_2,temp_v0);
  return;
}
