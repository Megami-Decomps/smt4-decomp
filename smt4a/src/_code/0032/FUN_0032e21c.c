/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032e21c` (_code @ 0x32e21c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f118; /* 0x57f118 */


unsigned int FUN_0032e21c(void)

{
  if (((DAT_0057f118 != 0) && (*(int *)(DAT_0057f118 + 0xf4) == 1)) &&
     (*(int *)(DAT_0057f118 + 0xf8) == 1 || *(int *)(DAT_0057f118 + 0xf8) == -1)) {
    return 1;
  }
  return 0;
}
