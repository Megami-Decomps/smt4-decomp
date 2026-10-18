/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e5cc` (_code @ 0x10e5cc, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464d50; /* 0x464d50 */


void FUN_0010e5cc(unsigned int param_1)

{
  DAT_00464d50 = param_1 & 0xffffff00;
  return;
}
