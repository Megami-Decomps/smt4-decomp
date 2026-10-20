/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aba9c` (_code @ 0x4aba9c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057a9c8; /* 0x57a9c8 */


unsigned char FUN_004aba9c(void)

{
  return *(int *)(DAT_0057a9c8 + 0x74a0) != 0x10 && *(int *)(DAT_0057a9c8 + 0x74a0) != 0xc;
}

} /* extern "C" */
