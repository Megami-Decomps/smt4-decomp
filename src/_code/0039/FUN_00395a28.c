/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395a28` (_code @ 0x395a28, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421f34; /* 0x421f34 */


void FUN_00395a28(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_00421f34;
  return;
}
