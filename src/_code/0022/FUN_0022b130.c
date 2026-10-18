/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b130` (_code @ 0x22b130, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e128; /* 0x43e128 */


void FUN_0022b130(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e128 + 0x20) = param_1;
  return;
}
