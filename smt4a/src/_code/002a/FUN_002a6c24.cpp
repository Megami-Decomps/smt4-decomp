/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6c24` (_code @ 0x2a6c24, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_useCounter; /* 0x57f27c */


int FUN_002a6c24(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&g_useCounter + 0x4)) + 0x74d);
}

} /* extern "C" */
