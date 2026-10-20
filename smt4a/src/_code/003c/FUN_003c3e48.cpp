/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3e48` (_code @ 0x3c3e48, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_partyPanel; /* 0x57f268 */


void FUN_003c3e48(int param_1)

{
  if (g_partyPanel != 0) {
    *(unsigned char *)(g_partyPanel + 0x1210) = param_1 == 0;
  }
  return;
}

} /* extern "C" */
