/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016c410` (_code @ 0x16c410, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019f828. */


void FUN_0016c410(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((((*(char *)(param_1 + 0x11e8) != '\0') || (*(float *)(param_1 + 0x11d8) != 1.0f)) ||
      (*(float *)(param_1 + 0x11dc) != 1.0f)) ||
     ((*(float *)(param_1 + 0x11e0) != 1.0f || (*(float *)(param_1 + 0x11e4) != 1.0f)))) {
    *(unsigned int *)(param_1 + 0x11d8) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11dc) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11e0) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11e4) = 0x3f800000;
    FUN_0019f828(*(unsigned int *)(param_1 + 0x530),param_1 + 0x11d8);
  }
  *(unsigned char *)(param_1 + 0x11e8) = 0;
  return;
}
