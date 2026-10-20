/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353484` (_code @ 0x353484, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003a1b38(void);

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_003a1b38. */


void FUN_00353484(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(DAT_00580c8c + param_1 * 100 + 0x68) != 0) {
    FUN_003a1b38();
    return;
  }
  return;
}

} /* extern "C" */
