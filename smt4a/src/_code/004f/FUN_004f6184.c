/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f6184` (_code @ 0x4f6184, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0031b9d4. */


void FUN_004f6184(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x339c) & 4) != 0) {
    FUN_0031b9d4();
    *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xfffffffb) | 8;
  }
  return;
}
