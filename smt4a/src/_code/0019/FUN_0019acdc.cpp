/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019acdc` (_code @ 0x19acdc, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0019acdc(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_1 == 0xb2) {
    return 4;
  }
  if (param_1 < 0xb3) {
    if (param_1 == 0xaf) {
      temp_v0 = 2;
    }
    else if (param_1 < 0xb0) {
      if (param_1 == 5) {
        temp_v0 = 7;
      }
      else if (param_1 == 0xae) {
        temp_v0 = 1;
      }
    }
    else {
      if (param_1 != 0xb0) {
        if (param_1 == 0xb1) {
          return 5;
        }
        return 0;
      }
      temp_v0 = 3;
    }
  }
  else {
    if (param_1 == 0xba) {
      if (param_2 == 0) {
        return 6;
      }
      return 8;
    }
    if (param_1 < 0xba) {
      if (param_1 == 0xb3) {
        return 6;
      }
      if (param_1 == 0xb9) {
        return 4;
      }
    }
    else if (param_1 == 0xbf || param_1 == 0xc0) {
      return 5;
    }
  }
  return temp_v0;
}

} /* extern "C" */
