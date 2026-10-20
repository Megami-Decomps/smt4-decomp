/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208b68` (_code @ 0x208b68, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f57c; /* 0x57f57c */


unsigned char FUN_00208b68(void)

{
  return *(int *)(DAT_0057f57c + 8) != 0;
}

} /* extern "C" */
