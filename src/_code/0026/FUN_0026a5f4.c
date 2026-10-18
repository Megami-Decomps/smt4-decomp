/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a5f4` (_code @ 0x26a5f4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


void FUN_0026a5f4(int param_1)

{
  if (DAT_0043dcf0 != 0) {
    *(unsigned char *)(DAT_0043dcf0 + 0x17f0) = param_1 == 0;
  }
  return;
}
