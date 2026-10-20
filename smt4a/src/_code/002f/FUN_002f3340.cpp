/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3340` (_code @ 0x2f3340, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559100; /* 0x559100 */


void FUN_002f3340(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_00559100;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

} /* extern "C" */
