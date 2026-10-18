/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003285f0` (_code @ 0x3285f0, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_002a135c. */
/* Supplied declaration required: FUN_002b2814. */
/* Supplied declaration required: FUN_002b2928. */
extern unsigned int FUN_002b2b78(int, unsigned int);
/* Supplied declaration required: FUN_00328c0c. */


int FUN_003285f0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1;
  FUN_002a135c();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_3;
  temp_v1 = FUN_002b2b78(param_1,param_2);
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 4) = temp_v1;
  FUN_00328c0c(*(unsigned int *)(temp_v0 + 8),param_3);
  FUN_002b2928(temp_v0);
  FUN_002b2814(&DAT_004dad60,temp_v0,0);
  return temp_v0;
}
