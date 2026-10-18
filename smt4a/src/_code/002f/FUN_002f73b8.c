/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f73b8` (_code @ 0x2f73b8, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005949a0; /* 0x5949a0 */


unsigned int FUN_002f73b8(int param_1)

{
  if ((*(char *)(param_1 + 0x2c) != '\x02') &&
     (((*(char *)(param_1 + 0x2c) != '\x01' || (*(unsigned int *)(param_1 + 0x28) == 0)) ||
      ((*(unsigned int *)(param_1 + 0x28) & ~DAT_005949a0) != 0)))) {
    return 0;
  }
  return 1;
}
