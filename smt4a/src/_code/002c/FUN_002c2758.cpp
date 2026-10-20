/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2758` (_code @ 0x2c2758, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned char FUN_002c2758(int param_1)

{
  return *(unsigned char *)(param_1 + (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x28040);
}

} /* extern "C" */
