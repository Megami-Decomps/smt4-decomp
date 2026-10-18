/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012342c` (_code @ 0x12342c, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004c632c; /* 0x4c632c */


void FUN_0012342c(unsigned int param_1)

{
  if (DAT_004c632c != 0) {
    *(unsigned int *)(DAT_004c632c + 0x38) = param_1;
  }
  return;
}
