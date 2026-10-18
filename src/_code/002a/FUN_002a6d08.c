/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6d08` (_code @ 0x2a6d08, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002a6d08(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x754) & 0x10000) != 0;
}
