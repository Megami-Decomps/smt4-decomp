/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b90d0` (_code @ 0x2b90d0, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002b90d0(int param_1,unsigned int param_2)

{
  return (*(unsigned int *)(param_1 + 0x34) & param_2) != 0;
}
