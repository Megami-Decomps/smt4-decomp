/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e318c` (_code @ 0x2e318c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


unsigned char FUN_002e318c(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1eb4) == '\0';
}

} /* extern "C" */
