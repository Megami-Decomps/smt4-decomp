/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309fcc` (_code @ 0x309fcc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ac838. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: FUN_0035eabc. */


void FUN_00309fcc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [260];
  
  FUN_002c3940(temp_v0,0x100);
  FUN_002bf694(temp_v0,param_1);
  FUN_002ac838(param_2,temp_v0,0x100);
  FUN_0035eabc(param_2);
  return;
}
