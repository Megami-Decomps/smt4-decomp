/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1abc` (_code @ 0x2c1abc, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b668c. */


void FUN_002c1abc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((((*(char *)(param_1 + 0x11dc) != '\0') || (*(float *)(param_1 + 0x11cc) != 1.0f)) ||
      (*(float *)(param_1 + 0x11d0) != 1.0f)) ||
     ((*(float *)(param_1 + 0x11d4) != 1.0f || (*(float *)(param_1 + 0x11d8) != 1.0f)))) {
    *(unsigned int *)(param_1 + 0x11cc) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d0) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d4) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d8) = 0x3f800000;
    FUN_002b668c(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x11cc);
  }
  *(unsigned char *)(param_1 + 0x11dc) = 0;
  return;
}
