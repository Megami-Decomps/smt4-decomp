/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fa28` (_code @ 0x17fa28, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0017fa28(unsigned int param_1,unsigned int param_2)

{
  return ((param_1 & 0xff) << 8) | (param_2 & 0xff);
}
