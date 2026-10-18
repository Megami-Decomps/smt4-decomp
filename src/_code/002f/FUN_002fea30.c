/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fea30` (_code @ 0x2fea30, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */


void FUN_002fea30(void)

{
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0x5f) = 0;
  }
  if (DAT_0043e190 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x5f) = 0;
  }
  return;
}
