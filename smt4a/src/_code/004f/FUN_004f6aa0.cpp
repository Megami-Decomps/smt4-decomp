/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f6aa0` (_code @ 0x4f6aa0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004f6aa0(int param_1)

{
  if ((*(int *)(param_1 + 0x33c8) != 0) && ((*(unsigned char *)(*(int *)(param_1 + 0x33c8) + 8) & 1) != 0)) {
    return (*(unsigned int *)(param_1 + 0x339c) & 0x2000) >> 0xd;
  }
  return 1;
}

} /* extern "C" */
