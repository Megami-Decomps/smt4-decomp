/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270384` (_code @ 0x270384, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00270384(int param_1)

{
  if (param_1 != 0x16) {
    if (param_1 < 0x17) {
      switch(param_1) {
      default:
        return 0;
      case 1:
      case 2:
      case 6:
      case 0x10:
      case 0x11:
        return 3;
      case 3:
      case 4:
      case 7:
      case 8:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x14:
      case 0x15:
        return 1;
      case 5:
      case 9:
      case 10:
      case 0x12:
      case 0x13:
        return 2;
      }
    }
    if (param_1 != 0x20) {
      if (param_1 >= 0x21) {
        if (param_1 != 0x29) {
          if (param_1 >= 0x2a) {
            return 0;
          }
          if (param_1 != 0x21 && param_1 != 0x22) {
            if (param_1 != 0x23) {
              return 0;
            }
            return 3;
          }
          return 1;
        }
        return 2;
      }
      switch(param_1) {
      case 0x17:
        return 3;
      case 0x18:
      case 0x1b:
      case 0x1c:
        break;
      case 0x19:
      case 0x1a:
      case 0x1d:
      case 0x1e:
      case 0x1f:
        return 2;
      default:
        return 0;
      }
    }
  }
  return 1;
}

} /* extern "C" */
