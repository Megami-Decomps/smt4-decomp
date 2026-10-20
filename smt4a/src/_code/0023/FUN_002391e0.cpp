/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002391e0` (_code @ 0x2391e0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned char FUN_002391e0(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27ea6);
}

} /* extern "C" */
