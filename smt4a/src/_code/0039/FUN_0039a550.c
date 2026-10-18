/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a550` (_code @ 0x39a550, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00102af4. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_00438944. */


void FUN_0039a550(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [260];
  
  FUN_002e6dd0(temp_v0,0x100);
  FUN_002e342c(temp_v0,param_1);
  FUN_00102af4(param_2,temp_v0,0x100);
  FUN_00438944(param_2);
  return;
}
