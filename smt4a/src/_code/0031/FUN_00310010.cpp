/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310010` (_code @ 0x310010, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00310010(int param_1,int param_2)

{
  if (param_2 != 0) {
    return *(int *)(param_1 + 8) + param_2 * 0xd8;
  }
  return param_1 + 0x10;
}

} /* extern "C" */
