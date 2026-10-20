/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324f74` (_code @ 0x324f74, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00324f74(int param_1)

{
  if (param_1 != 0x18) {
    if (param_1 < 0x19) {
      switch(param_1) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x16:
        return 1;
      case 5:
      case 10:
      case 0x13:
      case 0x17:
        return 2;
      }
    }
    else {
      if (param_1 == 0x25) {
        return 3;
      }
      if (param_1 < 0x26) {
        switch(param_1) {
        case 0x1a:
        case 0x1c:
          return 2;
        case 0x1b:
        case 0x21:
        case 0x22:
          return 1;
        }
      }
      else if (param_1 < 0x2b) {
        if (param_1 == 0x26) {
          return 3;
        }
        if (param_1 == 0x27) {
          return 1;
        }
      }
    }
    return 0;
  }
  return 1;
}

} /* extern "C" */
