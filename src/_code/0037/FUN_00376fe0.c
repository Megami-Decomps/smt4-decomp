/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376fe0` (_code @ 0x376fe0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421598; /* 0x421598 */


void FUN_00376fe0(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00421598;
  *(unsigned char *)(param_1 + 2) = 0x2f;
  *(unsigned char *)((int)param_1 + 9) = 0;
  return;
}
