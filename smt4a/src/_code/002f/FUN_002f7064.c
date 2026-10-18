/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7064` (_code @ 0x2f7064, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002f7064(int param_1)

{
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(char *)(*(int *)(param_1 + 0x9c) + 0x22) != '\x05')) {
    return 1;
  }
  return 0;
}
