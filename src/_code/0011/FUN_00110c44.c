/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110c44` (_code @ 0x110c44, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00110c44(int param_1)

{
  return *(int *)(param_1 + 0x44) * (unsigned int)*(unsigned char *)(param_1 + 0x5d) * 0x280 + 0x20;
}
