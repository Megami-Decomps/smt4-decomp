/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262750` (_code @ 0x262750, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e64a0(int);

extern int DAT_00588124; /* 0x588124 */

/* Supplied declaration required: FUN_002e64a0. */


void FUN_00262750(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != (unsigned short *)0x0) {
    FUN_002e64a0(*param_1);
  }
  else {
    FUN_002e64a0(0);
  }
  *(unsigned char *)(DAT_00588124 + 0xe8) = param_1 == (unsigned short *)0x0;
  return;
}

} /* extern "C" */
