/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038afe8` (_code @ 0x38afe8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */


void FUN_0038afe8(void)

{
  if (DAT_0057f58c != 0) {
    *(unsigned char *)(DAT_0057f58c + 0x6d) = 0;
  }
  if (DAT_0057f590 != 0) {
    *(unsigned char *)(DAT_0057f590 + 0x6d) = 0;
  }
  return;
}
