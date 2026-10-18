/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418c3c` (_code @ 0x418c3c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00418c3c(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_1 == 0x6752) {
    if (param_2 == 0x1401) {
      return 0x20;
    }
    temp_v0 = 0;
    if (param_2 != 0x8033) {
      temp_v0 = param_2 - 0x8000;
    }
    if (param_2 != 0x8033 && temp_v0 != 0x34) {
      return 0;
    }
  }
  else if (param_1 == 0x6754) {
    if (param_2 == 0x1401) {
      return 0x18;
    }
    if (param_2 != 0x8363) {
      return 0;
    }
  }
  else {
    if (param_1 != 0x6758) {
      if (param_1 == 0x6756) {
        if (param_2 == 0x1401) {
          return 8;
        }
        if (param_2 == 0x6761) {
          return 4;
        }
      }
      return 0;
    }
    if (param_2 != 0x1401) {
      if (param_2 != 0x6760) {
        return 0;
      }
      return 8;
    }
  }
  return 0x10;
}
