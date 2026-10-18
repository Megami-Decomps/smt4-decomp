/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298fec` (_code @ 0x298fec, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea5c; /* 0x44ea5c */


void FUN_00298fec(unsigned int param_1)

{
  *(unsigned int *)(DAT_0044ea5c + 0x80) = param_1;
  return;
}
