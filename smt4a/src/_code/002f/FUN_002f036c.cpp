/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f036c` (_code @ 0x2f036c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


int FUN_002f036c(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2014);
}

} /* extern "C" */
