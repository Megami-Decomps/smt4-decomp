/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c424` (_code @ 0x29c424, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_0029c424(unsigned char param_1)

{
  if (DAT_0044e190 != 0) {
    *(unsigned char *)(DAT_0044e190 + 0x412) = param_1;
  }
  return;
}
