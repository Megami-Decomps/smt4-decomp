/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162848` (_code @ 0x162848, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00162848(int param_1)

{
  return *(short *)(param_1 + 0x48) != 0;
}
