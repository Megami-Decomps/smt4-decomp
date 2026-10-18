/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6f48` (_code @ 0x2a6f48, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002a6f48(int param_1)

{
  if (param_1 == 0x17) {
    return 0x16;
  }
  if (param_1 < 0x18) {
    if (param_1 == 2) {
      return 9;
    }
    if (param_1 == 3) {
      return 0xe;
    }
    if (param_1 == 4) {
      return 0xd;
    }
    if (param_1 == 0xc) {
      return 0x11;
    }
  }
  else {
    if (param_1 == 0x18) {
      return 0x14;
    }
    if (param_1 == 0x1f) {
      return 10;
    }
    if (param_1 == 0x20) {
      return 0xf;
    }
  }
  return 0xffffffff;
}
