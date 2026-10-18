/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ba64` (_code @ 0x36ba64, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00636de0; /* 0x636de0 */

/* Supplied declaration required: FUN_001847c4. */
/* Supplied declaration required: FUN_00185b84. */
/* Supplied declaration required: FUN_0019aa50. */
/* Supplied declaration required: FUN_0019cba8. */
/* Supplied declaration required: FUN_002bed20. */


int FUN_0036ba64(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002bed20();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_3;
  FUN_001847c4(param_1,param_2);
  *(int *)(*(int *)(temp_v0 + 8) + 4) = param_1;
  FUN_0019cba8(*(unsigned int *)(temp_v0 + 8),param_3);
  FUN_00185b84(temp_v0);
  FUN_0019aa50(&DAT_00636de0,temp_v0,0);
  return temp_v0;
}
