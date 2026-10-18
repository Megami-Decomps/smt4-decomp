/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309f94` (_code @ 0x309f94, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002acac4. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_0035eccc. */


void FUN_00309f94(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [260];
  
  FUN_002c3b44(temp_v0,0x100);
  FUN_002bf86c(temp_v0,param_1);
  FUN_002acac4(param_2,temp_v0,0x100);
  FUN_0035eccc(param_2);
  return;
}
