/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da0b4` (_code @ 0x3da0b4, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00221b18. */


void FUN_003da0b4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x3028) & 4) != 0) {
    FUN_00221b18();
    *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xfffffffb) | 8;
  }
  return;
}
