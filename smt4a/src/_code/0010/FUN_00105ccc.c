/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105ccc` (_code @ 0x105ccc, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558838; /* 0x558838 */


void FUN_00105ccc(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = (unsigned int)&DAT_00558838;
  param_1[1] = param_2;
  return;
}
