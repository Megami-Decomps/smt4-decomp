/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522df0` (_code @ 0x522df0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006ec(int, int, int);

/* Supplied declaration required: FUN_001006ec. */


int * FUN_00522df0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001006ec(*param_1,(param_1[2] - *param_1) >> 2,0);
  return param_1;
}

} /* extern "C" */
