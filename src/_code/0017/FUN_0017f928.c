/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017f928` (_code @ 0x17f928, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0017f928(unsigned int param_1,unsigned int param_2)

{
  return ((param_1 & 0xff) << 8) | (param_2 & 0xff);
}
