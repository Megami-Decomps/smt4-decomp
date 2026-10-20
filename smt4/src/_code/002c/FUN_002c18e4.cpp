/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c18e4` (_code @ 0x2c18e4, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b634c(unsigned int, int);

/* Supplied declaration required: FUN_002b634c. */


void FUN_002c18e4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((((*(char *)(param_1 + 0x11dc) != '\0') || (*(float *)(param_1 + 0x11cc) != 1.0f)) ||
      (*(float *)(param_1 + 0x11d0) != 1.0f)) ||
     ((*(float *)(param_1 + 0x11d4) != 1.0f || (*(float *)(param_1 + 0x11d8) != 1.0f)))) {
    *(unsigned int *)(param_1 + 0x11cc) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d0) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d4) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d8) = 0x3f800000;
    FUN_002b634c(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x11cc);
  }
  *(unsigned char *)(param_1 + 0x11dc) = 0;
  return;
}

} /* extern "C" */
