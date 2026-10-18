/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034aa94` (_code @ 0x34aa94, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_0034aa94(int param_1,unsigned int param_2)

{
  if (param_1 == 0) {
    *(unsigned int *)(DAT_00588fd4 + 0x205c) = param_2;
  }
  else if (param_1 == 1) {
    *(unsigned int *)(DAT_00588fd4 + 0x2060) = param_2;
  }
  else if (param_1 == 2) {
    *(unsigned int *)(DAT_00588fd4 + 0x2064) = param_2;
  }
  return;
}
