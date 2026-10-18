/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da7e0` (_code @ 0x3da7e0, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003da7e0(int param_1)

{
  if ((*(int *)(param_1 + 0x3054) != 0) && ((*(unsigned char *)(*(int *)(param_1 + 0x3054) + 8) & 1) != 0)) {
    return (*(unsigned int *)(param_1 + 0x3028) & 0x2000) >> 0xd;
  }
  return 1;
}
