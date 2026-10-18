/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460a5c` (_code @ 0x460a5c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00460a5c(unsigned int *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(unsigned char *)(param_1 + 2) = 0;
  }
  return;
}
