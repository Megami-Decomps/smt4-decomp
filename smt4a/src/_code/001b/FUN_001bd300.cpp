/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bd300` (_code @ 0x1bd300, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001bd300(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(unsigned char *)(param_1 + 3) = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  *(unsigned char *)(param_1 + 0x28) = 3;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2f] = 0;
  return;
}

} /* extern "C" */
