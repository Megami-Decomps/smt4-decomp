/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123844` (_code @ 0x123844, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_0030f090. */


void FUN_00123844(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [32];
  
  FUN_0030f090(param_2,temp_v0,0x10);
  FUN_002e9300(param_1,temp_v0);
  return;
}
