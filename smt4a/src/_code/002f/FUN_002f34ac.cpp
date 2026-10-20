/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f34ac` (_code @ 0x2f34ac, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002f34ac(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
     (*(short *)(param_1 + 6) == *(short *)(param_2 + 6))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
