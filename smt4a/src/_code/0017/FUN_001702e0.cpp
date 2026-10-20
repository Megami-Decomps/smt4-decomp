/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001702e0` (_code @ 0x1702e0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_nngxState; /* 0x5c0aa0 */


int FUN_001702e0(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&g_nngxState + 0x1c)) + 0x75);
}

} /* extern "C" */
