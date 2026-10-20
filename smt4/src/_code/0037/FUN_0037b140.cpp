/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b140` (_code @ 0x37b140, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0037b140(unsigned int *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(unsigned char *)(param_1 + 2) = 0;
  }
  return;
}

} /* extern "C" */
