/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348c3c` (_code @ 0x348c3c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_00348c3c(unsigned char param_1)

{
  *(unsigned char *)(DAT_0057f65c + 0xff4) = param_1;
  return;
}

} /* extern "C" */
