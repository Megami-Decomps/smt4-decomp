/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025bc18` (_code @ 0x25bc18, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_002a10bc. */
/* Supplied declaration required: FUN_002a91f4. */
/* Supplied declaration required: FUN_002b265c. */
/* Supplied declaration required: FUN_002b2770. */
/* Supplied declaration required: FUN_002b2988. */


int FUN_0025bc18(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002a10bc();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_3;
  FUN_002b2988(param_1,param_2);
  *(int *)(*(int *)(temp_v0 + 8) + 4) = param_1;
  FUN_002a91f4(*(unsigned int *)(temp_v0 + 8),param_3);
  FUN_002b2770(temp_v0);
  FUN_002b265c(&DAT_004dad60,temp_v0,0);
  return temp_v0;
}
