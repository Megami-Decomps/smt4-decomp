/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fcd0` (_code @ 0x36fcd0, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0036fcd0(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  switch(param_1) {
  case 1:
    return 0xae;
  case 2:
    return 0xaf;
  case 3:
    return 0xb0;
  case 4:
    if (param_2 == 0) {
      temp_v0 = 0xb2;
    }
    else {
      temp_v0 = 0xb9;
    }
    return temp_v0;
  case 5:
    if (param_2 != 0) {
      if (param_2 == 1) {
        temp_v0 = 0xbf;
      }
      else {
        temp_v0 = 0xc0;
      }
      return temp_v0;
    }
    temp_v0 = 0xb1;
    break;
  case 6:
  case 8:
    if (param_2 == 0) {
      temp_v0 = 0xb3;
    }
    else {
      temp_v0 = 0xba;
    }
    return temp_v0;
  case 7:
    return 5;
  }
  return temp_v0;
}
