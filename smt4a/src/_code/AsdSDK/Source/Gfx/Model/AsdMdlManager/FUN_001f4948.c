/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4948` (_code @ 0x1f4948, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00636de0; /* 0x636de0 */

/* Supplied declaration required: FUN_0019aa50. */
/* Supplied declaration required: FUN_0021230c. */
/* Supplied declaration required: FUN_002bed20. */


int FUN_001f4948(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002bed20();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  FUN_0021230c(*(unsigned int *)(temp_v0 + 8),*(unsigned int *)(param_1 + 8),param_2);
  FUN_0019aa50(&DAT_00636de0,temp_v0,0);
  return temp_v0;
}
