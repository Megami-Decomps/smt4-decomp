/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cbdac` (_code @ 0x2cbdac, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002cbdac(unsigned int param_1)

{
  return (param_1 & 0x80000000) != 0;
}
