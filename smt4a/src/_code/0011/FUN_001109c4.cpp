/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001109c4` (_code @ 0x1109c4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001109c4(int param_1)

{
  if ((*(unsigned short *)(param_1 + 6) & 0xff) == 0 && *(unsigned short *)(param_1 + 6) >> 8 == 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
