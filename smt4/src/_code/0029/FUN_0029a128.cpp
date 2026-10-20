/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a128` (_code @ 0x29a128, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_0029a128(int param_1)

{
  unsigned char *puVar1;
  unsigned char temp_v0;
  
  temp_v0 = param_1 == 7;
  if (temp_v0) {
    param_1 = 3;
  }
  puVar1 = (unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e67);
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12f3) = temp_v0;
  *puVar1 = (char)param_1;
  return;
}

} /* extern "C" */
