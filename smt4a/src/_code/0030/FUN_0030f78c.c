/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f78c` (_code @ 0x30f78c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0030f78c(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 0xc) + 0x3c) - *(int *)(*(int *)(param_1 + 0xc) + 0x38)) >> 2;
}
