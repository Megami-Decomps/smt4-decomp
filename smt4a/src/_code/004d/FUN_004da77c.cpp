/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da77c` (_code @ 0x4da77c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004da77c(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  
  switch(param_3) {
  case 0:
    return 1;
  case 1:
    if (param_2 < 10) {
      return 1;
    }
    return 0;
  case 2:
    temp_v0 = param_2 - 10;
    if (temp_v0 >= 10) {
      return 0;
    }
    return 1;
  case 3:
    temp_v0 = param_2 - 0x14;
    if (temp_v0 >= 10) {
      return 0;
    }
    return 1;
  case 4:
    temp_v0 = param_2 - 0x1e;
    break;
  case 5:
    temp_v0 = param_2 - 0x28;
    break;
  case 6:
    temp_v0 = param_2 - 0x32;
    break;
  case 7:
    temp_v0 = param_2 - 0x3c;
    break;
  case 8:
    temp_v0 = param_2 - 0x46;
    break;
  case 9:
    temp_v0 = param_2 - 0x50;
    break;
  case 10:
    if (param_2 >= 0x5a) {
      return 1;
    }
    return 0;
  default:
    return 0;
  }
  if (temp_v0 >= 10) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
