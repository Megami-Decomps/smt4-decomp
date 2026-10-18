/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a308c` (_code @ 0x2a308c, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002a308c(int param_1)

{
  return *(unsigned char *)(param_1 + 0x10) & 1;
}
