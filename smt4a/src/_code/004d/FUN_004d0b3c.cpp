/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0b3c` (_code @ 0x4d0b3c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ca1c; /* 0x55ca1c */


void FUN_004d0b3c(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055ca1c;
  *(unsigned short *)(param_1 + 1) = 0;
  return;
}

} /* extern "C" */
