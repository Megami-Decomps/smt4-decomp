/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330b58` (_code @ 0x330b58, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */
extern int DAT_0057f6a8; /* 0x57f6a8 */


unsigned int FUN_00330b58(void)

{
  return *(unsigned int *)(DAT_0057f6a8 + (unsigned int)*(unsigned char *)(DAT_0057f69c + 0x8b) * 4);
}

} /* extern "C" */
