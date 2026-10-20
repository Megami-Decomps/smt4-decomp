/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a668` (_code @ 0x13a668, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f4c4(unsigned int);

/* Supplied declaration required: FUN_0013f4c4. */


void FUN_0013a668(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0013f4c4(*(unsigned int *)(param_1 * 4 + 0x5880c0) & 0xff);
  return;
}

} /* extern "C" */
