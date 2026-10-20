/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac468` (_code @ 0x3ac468, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_countdown; /* 0x43d9e0 */


void FUN_003ac468(void)

{
  *(unsigned char *)((*(int *)((unsigned char *)&g_countdown + 0x4)) + 0x1d) = 5;
  return;
}

} /* extern "C" */
