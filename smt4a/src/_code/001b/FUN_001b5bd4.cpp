/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5bd4` (_code @ 0x1b5bd4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001b5bd4(int param_1,int param_2,int param_3)

{
  *(unsigned char *)(param_1 + param_2 * 2 + param_3) = 0;
  return 1;
}

} /* extern "C" */
