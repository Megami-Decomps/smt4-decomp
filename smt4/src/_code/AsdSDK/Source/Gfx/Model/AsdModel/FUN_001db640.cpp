/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db640` (_code @ 0x1db640, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464b74; /* 0x464b74 */


void FUN_001db640(int param_1)

{
  (&DAT_00464b74)[param_1] = (&DAT_00464b74)[param_1] | 1;
  return;
}

} /* extern "C" */
