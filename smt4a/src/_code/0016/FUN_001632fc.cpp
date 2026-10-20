/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001632fc` (_code @ 0x1632fc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


unsigned char FUN_001632fc(void)

{
  return *(int *)(DAT_0057f574 + 8) != 0;
}

} /* extern "C" */
