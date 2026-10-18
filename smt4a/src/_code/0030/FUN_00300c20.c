/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300c20` (_code @ 0x300c20, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00300c20(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if ((param_1 & 0x80000000) == 0) {
    return 0;
  }
  temp_v0 = (param_1 & 0x3fc00) >> 10;
  param_1 = param_1 & 0x3ff;
  if (((temp_v0 != 1) && (temp_v0 == 6)) && (param_1 == 0x1a)) {
    return 0xffffffd9;
  }
  if (param_1 == 0x3f1) {
    return 0xffffffe4;
  }
  if (param_1 < 0x3f1) {
    if (param_1 == 0x3ec) {
      return 0xffffffe4;
    }
    if (param_1 < 0x3ed) {
      if (param_1 == 7) {
        return 0xfffffff8;
      }
      if (param_1 != 8) {
        if (param_1 == 1000) {
          return 0xffffffe4;
        }
        if (param_1 == 0x3ea) {
          return 0xfffffffe;
        }
        return 0xffffffe4;
      }
    }
    else {
      param_1 = param_1 - 0x3ed;
      if (param_1 < 2) {
        return 0xffffffe4;
      }
      if (param_1 == 2) {
        return 0xffffffd5;
      }
      if (param_1 != 3) {
        return 0xffffffe4;
      }
    }
    return 0xfffffff6;
  }
  switch(param_1) {
  default:
    return 0xffffffe4;
  case 0x3f3:
    return 0xffffffcf;
  case 0x3f8:
    return 0xffffffd9;
  case 0x3f9:
    return 0xfffffff9;
  }
}
