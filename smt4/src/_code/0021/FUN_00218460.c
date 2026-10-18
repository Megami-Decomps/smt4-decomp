/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218460` (_code @ 0x218460, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00218460(int param_1,int param_2)

{
  return *(unsigned short *)(param_1 + param_2 * 2 + 0x5950) - 1 >= 4;
}
