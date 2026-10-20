/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3cc8` (_code @ 0x2a3cc8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_eventEffect; /* 0x57f3b4 */


void FUN_002a3cc8(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_eventEffect + 0xc));
  if ((*(int *)((unsigned char *)&g_eventEffect + 0xc)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&g_eventEffect + 0xc)) + 4) = 2;
    *(unsigned int *)(temp_v0 + 0x10) = 0xbca3d70a;
  }
  return;
}

} /* extern "C" */
