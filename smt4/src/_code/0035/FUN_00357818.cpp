/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357818` (_code @ 0x357818, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00357818(unsigned int param_1)

{
  return (param_1 & 0xff0fffff) << 8;
}

} /* extern "C" */
