/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a71fc` (_code @ 0x2a71fc, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */


void FUN_002a71fc(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e190 + 0xa26) = param_1;
  *(unsigned char *)(DAT_0043e18c + 0xa26) = param_1;
  return;
}

} /* extern "C" */
