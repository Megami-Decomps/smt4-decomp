/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed344` (_code @ 0x2ed344, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002ed344(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 4) != *(int *)(param_1 + 4)) &&
     (*(int *)(param_2 + 4) - *(int *)(param_1 + 4) < 1)) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
