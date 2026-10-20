/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d0a4` (_code @ 0x35d0a4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_partyPanel; /* 0x57f268 */


int FUN_0035d0a4(int param_1)

{
  if (((-1 < param_1) && (param_1 < 0x11)) && (g_partyPanel != 0)) {
    return g_partyPanel + param_1 * 0x8c + 0x68;
  }
  return 0;
}

} /* extern "C" */
