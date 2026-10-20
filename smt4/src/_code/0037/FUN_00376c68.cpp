/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376c68` (_code @ 0x376c68, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00376c68(int *param_1)

{
  if (*param_1 != 0) {
    *(unsigned int *)(*param_1 + 0x20) = 0;
  }
  return;
}

} /* extern "C" */
