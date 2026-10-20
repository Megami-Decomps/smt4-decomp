/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7c80` (_code @ 0x2a7c80, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002a7c80(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_2 + 1);
  return;
}

} /* extern "C" */
