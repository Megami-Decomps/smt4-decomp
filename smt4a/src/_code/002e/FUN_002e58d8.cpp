/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e58d8` (_code @ 0x2e58d8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_eventEffect; /* 0x57f3b4 */


unsigned int FUN_002e58d8(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (((*(int *)((unsigned char *)&g_eventEffect + 0x8)) != 0) && (*(int *)((*(int *)((unsigned char *)&g_eventEffect + 0x8)) + 8) == 3)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
