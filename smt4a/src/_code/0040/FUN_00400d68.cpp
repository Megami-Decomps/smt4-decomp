/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00400d68` (_code @ 0x400d68, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fdae8(unsigned int);

/* Supplied declaration required: FUN_003fdae8. */


void FUN_00400d68(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_003fdae8(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4));
    return;
  }
  return;
}

} /* extern "C" */
