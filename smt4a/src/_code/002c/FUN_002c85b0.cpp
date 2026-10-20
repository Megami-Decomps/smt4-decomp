/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c85b0` (_code @ 0x2c85b0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x588fd0 */


void FUN_002c85b0(int param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  temp_v1 = param_1 == 8;
  if (temp_v1) {
    param_1 = 3;
  }
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1383) = temp_v1;
  *(char *)(temp_v0 + 0x2018) = (char)param_1;
  return;
}

} /* extern "C" */
