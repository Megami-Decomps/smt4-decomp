/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019d36c` (_code @ 0x19d36c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f24c; /* 0x57f24c */


void FUN_0019d36c(void)

{
  if (0 < *(short *)(DAT_0057f24c + 0x64c)) {
    *(short *)(DAT_0057f24c + 0x64c) = *(short *)(DAT_0057f24c + 0x64c) - 1;
  }
  return;
}

} /* extern "C" */
