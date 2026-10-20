/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395e44` (_code @ 0x395e44, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00422304; /* 0x422304 */


void FUN_00395e44(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_00422304;
  param_1[3] = 0;
  param_1[2] = 1;
  return;
}

} /* extern "C" */
