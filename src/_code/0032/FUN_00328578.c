/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328578` (_code @ 0x328578, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_002a135c. */
/* Supplied declaration required: FUN_002a94e8. */
/* Supplied declaration required: FUN_002b2814. */
/* Supplied declaration required: FUN_002b2928. */
extern unsigned int FUN_002b2b78(int, unsigned int);
/* Supplied declaration required: FUN_00328bd4. */


int FUN_00328578(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1;
  FUN_002a135c();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_3;
  temp_v1 = FUN_002b2b78(param_1,param_2);
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 4) = temp_v1;
  FUN_00328bd4(*(unsigned int *)(temp_v0 + 8),param_3,*(unsigned int *)(param_4 + 8));
  FUN_002a94e8(*(unsigned int *)(temp_v0 + 8));
  FUN_002b2928(temp_v0);
  FUN_002b2814(&DAT_004dad60,temp_v0,0);
  return temp_v0;
}
