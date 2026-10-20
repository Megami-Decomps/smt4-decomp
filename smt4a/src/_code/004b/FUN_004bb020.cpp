/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb020` (_code @ 0x4bb020, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d05c4(int, int, int, int);

/* Supplied declaration required: FUN_004d05c4. */


void FUN_004bb020(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_004d05c4(param_1 + 0x74,0x1f,5,10);
  *(unsigned char *)(param_1 + 0x84) = 1;
  return;
}

} /* extern "C" */
