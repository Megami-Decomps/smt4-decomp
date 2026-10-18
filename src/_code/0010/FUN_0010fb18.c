/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fb18` (_code @ 0x10fb18, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0010fb18(unsigned int param_1)

{
  if (param_1 < 0x21) {
    param_1 = param_1 + 0x20;
  }
  else if (param_1 + 0xaef62b00 < 0x28) {
    param_1 = param_1 + 0xaef62b18;
  }
  else {
    param_1 = param_1 + 0x93725b00;
    if (param_1 >= 0x41) {
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}
