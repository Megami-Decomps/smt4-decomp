/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd768` (_code @ 0x2fd768, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e97b4. */


void FUN_002fd768(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [256];
  
  FUN_002e97b4(param_2,temp_v0,0x80);
  FUN_002e9300(param_1,temp_v0);
  return;
}
