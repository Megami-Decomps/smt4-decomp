/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357a28` (_code @ 0x357a28, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00357a28(unsigned int param_1)

{
  return (param_1 & 0xff0fffff) << 8;
}
