/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3214` (_code @ 0x1b3214, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001b3214(int param_1)

{
  if (param_1 == 0x10) {
    return 0x14;
  }
  if (param_1 < 0x11) {
    if (param_1 == 2) {
      return 0xd;
    }
    if (param_1 < 3) {
      if (param_1 == 0) {
        return 9;
      }
      if (param_1 == 1) {
        return 0xe;
      }
    }
    else {
      if (param_1 == 6) {
        return 0x11;
      }
      if (param_1 == 0xf) {
        return 0x16;
      }
    }
  }
  else {
    if (param_1 == 0x16) {
      return 10;
    }
    if (param_1 == 0x17) {
      return 0xf;
    }
    if (param_1 == 0x19) {
      return 0x3a;
    }
    if (param_1 == 0x34) {
      return 0x35;
    }
  }
  return 0xffffffff;
}
