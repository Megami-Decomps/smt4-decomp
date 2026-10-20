/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002305e8` (_code @ 0x2305e8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e140; /* 0x43e140 */


void FUN_002305e8(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e140 + 0x10) = param_1;
  return;
}

} /* extern "C" */
