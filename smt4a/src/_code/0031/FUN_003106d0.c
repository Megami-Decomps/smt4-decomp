/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003106d0` (_code @ 0x3106d0, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b10c; /* 0x55b10c */

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002ea0b8. */


void FUN_003106d0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b10c;
  if (param_1[3] != 0) {
    FUN_002e6e14();
  }
  FUN_002ea0b8(param_1);
  return;
}
