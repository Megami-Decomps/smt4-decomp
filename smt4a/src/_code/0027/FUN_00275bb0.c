/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275bb0` (_code @ 0x275bb0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588e5c; /* 0x588e5c */


unsigned int FUN_00275bb0(int param_1)

{
  return *(unsigned int *)(DAT_00588e5c + param_1 * 4 + 0xd8);
}
