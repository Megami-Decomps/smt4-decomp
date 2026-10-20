/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001960f0` (_code @ 0x1960f0, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_commandBufferCursor; /* 0x5b40e0 */


void FUN_001960f0(int param_1,int param_2)

{
  g_commandBufferCursor = ((param_2 - param_1) & 0xfffffffcU) + g_commandBufferCursor;
  return;
}

} /* extern "C" */
