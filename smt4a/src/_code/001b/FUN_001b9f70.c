/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b9f70` (_code @ 0x1b9f70, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b6660. */
extern unsigned int FUN_001c35d8(void);


int FUN_001b9f70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_001c35d8();
  FUN_001b6660(temp_v0,param_1 + 0x88);
  return param_1;
}
