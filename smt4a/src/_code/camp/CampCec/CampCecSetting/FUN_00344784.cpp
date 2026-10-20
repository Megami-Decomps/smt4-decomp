/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344784` (_code @ 0x344784, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f12c; /* 0x57f12c */


unsigned char FUN_00344784(void)

{
  return *(char *)(DAT_0057f12c + 0x40) != '\0';
}

} /* extern "C" */
