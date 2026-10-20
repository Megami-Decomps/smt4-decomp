/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a73f8` (_code @ 0x2a73f8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


int FUN_002a73f8(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2012);
}

} /* extern "C" */
