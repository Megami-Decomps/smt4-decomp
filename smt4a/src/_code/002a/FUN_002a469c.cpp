/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a469c` (_code @ 0x2a469c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_002a469c(void)

{
  return (int)*(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e94);
}

} /* extern "C" */
