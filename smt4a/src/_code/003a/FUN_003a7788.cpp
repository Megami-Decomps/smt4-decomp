/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7788` (_code @ 0x3a7788, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


void FUN_003a7788(void)

{
  if (DAT_0057f268 != 0) {
    *(unsigned short *)(DAT_0057f268 + 0xa04) = 0;
  }
  return;
}

} /* extern "C" */
