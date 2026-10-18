/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028de4c` (_code @ 0x28de4c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0028de4c(int param_1)

{
  if (((*(unsigned int *)(param_1 + 0x44a0) & 2) == 0) &&
     (((*(unsigned int *)(param_1 + 0x44a0) & 0x2000000) != 0 || (*(int *)(param_1 + 0xc4) < 0)))) {
    return 1;
  }
  return 0;
}
