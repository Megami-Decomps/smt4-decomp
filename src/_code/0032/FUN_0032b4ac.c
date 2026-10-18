/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b4ac` (_code @ 0x32b4ac, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0032b4ac(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = temp_v0;
  if ((*(unsigned int *)(param_1 + 0x38) & 0x7f) != 0 && param_2 != 0) {
    temp_v2 = *(unsigned int *)(param_1 + 0x38) & 0x7f;
    if (temp_v2 != 0xc) {
      if (temp_v2 == 0xd) {
        if ((param_2 & 0x80) != 0) {
          temp_v0 = 0x80;
        }
        return temp_v0;
      }
      if (temp_v2 == 0x12) {
        if ((param_2 & 0x40) != 0) {
          temp_v0 = 0x40;
        }
        if ((param_2 & 0x80) != 0) {
          temp_v0 = temp_v0 | 0x80;
        }
        if ((param_2 & 0x100) != 0) {
          temp_v0 = temp_v0 | 0x100;
        }
        return temp_v0;
      }
      temp_v1 = param_2;
      if (temp_v2 != 0xe) {
        if (temp_v2 == 0x15) {
          if ((param_2 & 0x20) != 0) {
            temp_v0 = 0x20;
          }
          if ((param_2 & 0x200) == 0) {
            return temp_v0;
          }
          return temp_v0 | 0x200;
        }
        temp_v1 = temp_v0;
        if ((param_2 & (1 << temp_v2)) != 0) {
          temp_v1 = 1 << temp_v2;
        }
      }
    }
    else {
      if ((param_2 & 0x20) != 0) {
        temp_v0 = 0x20;
      }
      if ((param_2 & 0x40) != 0) {
        temp_v0 = temp_v0 | 0x40;
      }
      if ((param_2 & 0x80) != 0) {
        temp_v0 = temp_v0 | 0x80;
      }
      if ((param_2 & 0x100) != 0) {
        temp_v0 = temp_v0 | 0x100;
      }
      temp_v1 = temp_v0;
      if ((param_2 & 0x200) != 0) {
        return temp_v0 | 0x200;
      }
    }
  }
  return temp_v1;
}
