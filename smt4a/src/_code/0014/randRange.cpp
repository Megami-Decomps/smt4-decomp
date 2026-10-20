/* NON_MATCHING: romwright 0.5.0 decompilation of `randRange` (_code @ 0x14bef4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_randState; /* 0x5b40a0 */


unsigned int randRange(int param_1)

{
  g_randState = g_randState * 0x41c64e6d + 0x3039;
  return (g_randState >> 0x10) * (param_1 + 1) >> 0x10;
}

} /* extern "C" */
