/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e4d4` (_code @ 0x23e4d4, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_0023e4d4(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x10) & 4) != 0;
}
