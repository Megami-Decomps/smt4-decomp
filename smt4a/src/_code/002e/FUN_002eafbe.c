/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eafbe` (_code @ 0x2eafbe, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002eafbe(int param_1)

{
  if ((*(char *)(param_1 + 0x24) != '\0') &&
     ((*(char *)(param_1 + 0x24) != '\x01' || ((*(unsigned int *)(param_1 + 0x8c) & 0xff) >= 2)))) {
    return 1;
  }
  return 0;
}
