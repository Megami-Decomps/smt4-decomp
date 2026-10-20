/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_SetCurrentMap` (_code @ 0x21e9ac, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002314e8(int, unsigned int);

extern int g_naviMain; /* 0x44cdf0 */

/* Supplied declaration required: FUN_002314e8. */


void NaviMain_SetCurrentMap(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_naviMain;
  *(unsigned int *)(g_naviMain + 0x28) = param_1;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  FUN_002314e8(temp_v0 + 0x40,param_1);
  return;
}

} /* extern "C" */
