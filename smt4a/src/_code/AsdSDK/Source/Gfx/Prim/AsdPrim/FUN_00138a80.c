/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138a80` (_code @ 0x138a80, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00636f50; /* 0x636f50 */


void FUN_00138a80(void)

{
  DAT_00636f50 = 1 - DAT_00636f50;
  *(unsigned int *)(DAT_00636f50 * 4 + 0x636f48) = 0;
  return;
}
