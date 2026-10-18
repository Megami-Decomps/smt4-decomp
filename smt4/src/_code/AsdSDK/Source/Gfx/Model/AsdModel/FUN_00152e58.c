/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152e58` (_code @ 0x152e58, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464b74; /* 0x464b74 */


void FUN_00152e58(int param_1)

{
  (&DAT_00464b74)[param_1] = (&DAT_00464b74)[param_1] & 0xfffffffe;
  return;
}
