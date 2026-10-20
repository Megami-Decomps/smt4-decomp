/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005153cc` (_code @ 0x5153cc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_005153cc(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 1;
  param_1[2] = (unsigned int)(param_1 + 2);
  param_1[4] = 0;
  param_1[3] = (unsigned int)(param_1 + 2);
  return;
}

} /* extern "C" */
