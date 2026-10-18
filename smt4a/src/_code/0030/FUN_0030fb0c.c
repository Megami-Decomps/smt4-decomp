/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fb0c` (_code @ 0x30fb0c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0030fb0c(int param_1)

{
  if ((*(int *)(param_1 + 0x120) != 0) && (*(char *)(*(int *)(param_1 + 0x120) + 0x22) != '\x05')) {
    return 1;
  }
  return 0;
}
