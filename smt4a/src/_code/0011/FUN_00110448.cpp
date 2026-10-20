/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110448` (_code @ 0x110448, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb1ea(unsigned int);

/* Supplied declaration required: FUN_002fb1ea. */


void FUN_00110448(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x14) = param_2;
  FUN_002fb1ea(**(unsigned int **)(param_1 + 0xc));
  return;
}

} /* extern "C" */
