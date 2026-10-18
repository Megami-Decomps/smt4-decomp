/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdb0c` (_code @ 0x2fdb0c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00594aa8; /* 0x594aa8 */


unsigned char FUN_002fdb0c(int param_1)

{
  if (DAT_00594aa8 != 0) {
    return 3;
  }
  return *(unsigned char *)(param_1 + 0x1a);
}
