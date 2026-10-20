/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ddc00` (_code @ 0x1ddc00, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


int FUN_001ddc00(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) != 0) {
    temp_v0 = (int)*(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e64);
  }
  return temp_v0;
}

} /* extern "C" */
