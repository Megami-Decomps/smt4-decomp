/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028549c` (_code @ 0x28549c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_00192594. */
/* Supplied declaration required: FUN_002a135c. */
/* Supplied declaration required: FUN_002b2814. */


int FUN_0028549c(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002a135c();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  FUN_00192594(*(unsigned int *)(temp_v0 + 8),*(unsigned int *)(param_1 + 8),param_2);
  FUN_002b2814(&DAT_004dad60,temp_v0,0);
  return temp_v0;
}
