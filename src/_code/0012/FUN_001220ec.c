/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001220ec` (_code @ 0x1220ec, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_001220ec(int param_1)

{
  return *(char *)(param_1 + 0x8b) == '\x01' || *(char *)(param_1 + 0x8b) == '\x02';
}
