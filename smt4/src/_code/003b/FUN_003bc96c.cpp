/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc96c` (_code @ 0x3bc96c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_003bc96c(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned char *)(param_1 + (param_2 >> 3) + 0x4c) & (1 << (param_2 & 7))) != 0;
}

} /* extern "C" */
