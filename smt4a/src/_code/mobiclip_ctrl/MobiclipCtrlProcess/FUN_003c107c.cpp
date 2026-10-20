/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c107c` (_code @ 0x3c107c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0058803c; /* 0x58803c */


void FUN_003c107c(unsigned char param_1)

{
  if (DAT_0058803c != 0) {
    *(unsigned char *)(DAT_0058803c + 0x78) = param_1;
  }
  return;
}

} /* extern "C" */
