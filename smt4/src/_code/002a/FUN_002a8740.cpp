/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8740` (_code @ 0x2a8740, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_002a8740(int param_1)

{
  return (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + param_1 * 0x604 + 0x11c;
}

} /* extern "C" */
