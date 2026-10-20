/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129d34` (_code @ 0x129d34, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471a70; /* 0x471a70 */


int FUN_00129d34(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&DAT_00471a70 + 0x1c)) + 0x75);
}

} /* extern "C" */
