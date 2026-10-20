/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6408` (_code @ 0x3d6408, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a043c(int, int);

/* Supplied declaration required: FUN_002a043c. */


void FUN_003d6408(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_002a043c(*(int *)(param_1 + 0x730),0);
    return;
  }
  return;
}

} /* extern "C" */
