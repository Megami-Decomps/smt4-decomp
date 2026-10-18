/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152d64` (_code @ 0x152d64, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464b74; /* 0x464b74 */


void FUN_00152d64(int param_1)

{
  (&DAT_00464b74)[param_1] = (&DAT_00464b74)[param_1] & 0xfffffffe;
  return;
}
