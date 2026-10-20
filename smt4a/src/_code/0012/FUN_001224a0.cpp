/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001224a0` (_code @ 0x1224a0, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005949d8; /* 0x5949d8 */


int FUN_001224a0(void)

{
  return (*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x160;
}

} /* extern "C" */
