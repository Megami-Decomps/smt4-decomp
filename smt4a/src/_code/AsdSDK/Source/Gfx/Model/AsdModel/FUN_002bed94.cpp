/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bed94` (_code @ 0x2bed94, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3c78; /* 0x5b3c78 */


void FUN_002bed94(int param_1)

{
  (&DAT_005b3c78)[param_1] = (&DAT_005b3c78)[param_1] & 0xfffffffe;
  return;
}

} /* extern "C" */
