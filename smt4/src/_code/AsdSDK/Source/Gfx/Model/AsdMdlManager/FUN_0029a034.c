/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a034` (_code @ 0x29a034, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004dad6c; /* 0x4dad6c */

/* Supplied declaration required: FUN_002a10bc. */
/* Supplied declaration required: FUN_002b0184. */
/* Supplied declaration required: FUN_002b01a0. */
/* Supplied declaration required: FUN_002b265c. */


int FUN_0029a034(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002a10bc();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_2;
  FUN_002b01a0(param_1,0);
  *(int *)(temp_v0 + 4) = param_1;
  FUN_002b0184();
  FUN_002b265c(&DAT_004dad6c,temp_v0,0);
  return temp_v0;
}
