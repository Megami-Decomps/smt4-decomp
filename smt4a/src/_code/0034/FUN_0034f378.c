/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f378` (_code @ 0x34f378, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b9c. */


int FUN_0034f378(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 2);
  FUN_00282b9c();
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 2);
  FUN_00282b9c();
  return (unsigned int)*(unsigned short *)(temp_v1 + 0x32) - (unsigned int)*(unsigned short *)(temp_v0 + 0x32);
}
