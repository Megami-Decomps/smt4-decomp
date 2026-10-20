/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e49dc` (_code @ 0x2e49dc, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002e49dc(unsigned int param_1,unsigned int param_2)

{
  if (param_1 < 0x3a) {
    param_1 = param_1 - 0x30;
  }
  if ((param_1 & 0xffffffdf) >= 0x41) {
    param_1 = (param_1 & 0xffffffdf) - 0x37;
  }
  if (param_2 <= param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}

} /* extern "C" */
