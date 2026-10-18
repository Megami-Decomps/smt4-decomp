/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bd18` (_code @ 0x37bd18, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0037bd18(unsigned int *param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
  }
  return;
}
