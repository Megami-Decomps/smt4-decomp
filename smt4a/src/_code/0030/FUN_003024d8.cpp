/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003024d8` (_code @ 0x3024d8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd7c0(unsigned int, unsigned int, int);

extern int DAT_0058069c; /* 0x58069c */

/* Supplied declaration required: FUN_003fd7c0. */


void FUN_003024d8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(DAT_0058069c + 0x1c) == param_1) {
    FUN_003fd7c0(*(unsigned int *)(*(int *)(DAT_0058069c + 0x10) + 4),param_2,2);
    return;
  }
  return;
}

} /* extern "C" */
