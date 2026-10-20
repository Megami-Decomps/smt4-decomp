/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2c20` (_code @ 0x3d2c20, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003d2c20(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  if (((*(unsigned int *)(param_1 + 0x3c) & 0x7f) != 0 && param_2 != 0) && (*(short *)(param_1 + 0x86) != 6)
     ) {
    temp_v1 = *(unsigned int *)(param_1 + 0x3c) & 0x7f;
    if (temp_v1 != 0x16) {
      if (temp_v1 == 0x17) {
        if ((param_2 & 0x80) != 0) {
          temp_v0 = 0x80;
        }
        return temp_v0;
      }
      if (temp_v1 != 0x1c) {
        if (temp_v1 == 0x18) {
          return param_2;
        }
        if (temp_v1 != 0x1f) {
          if ((param_2 & (1 << temp_v1)) == 0) {
            return 0;
          }
          return 1 << temp_v1;
        }
        if ((param_2 & 0x20) != 0) {
          temp_v0 = 0x20;
        }
        if ((param_2 & 0x200) != 0) {
          temp_v0 = temp_v0 | 0x200;
        }
        return temp_v0;
      }
      if ((param_2 & 0x40) != 0) {
        temp_v0 = 0x40;
      }
      if ((param_2 & 0x80) != 0) {
        temp_v0 = temp_v0 | 0x80;
      }
      if ((param_2 & 0x100) != 0) {
        temp_v0 = temp_v0 | 0x100;
      }
      if ((param_2 & 0x800) != 0) {
        temp_v0 = temp_v0 | 0x800;
      }
      if ((param_2 & 0x1000) != 0) {
        temp_v0 = temp_v0 | 0x1000;
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
      if ((param_2 & 0x200) != 0) {
        temp_v0 = temp_v0 | 0x200;
      }
      if ((param_2 & 0x800) != 0) {
        temp_v0 = temp_v0 | 0x800;
      }
      if ((param_2 & 0x1000) != 0) {
        temp_v0 = temp_v0 | 0x1000;
      }
    }
    if ((param_2 & 0x2000) != 0) {
      return temp_v0 | 0x2000;
    }
  }
  return temp_v0;
}

} /* extern "C" */
