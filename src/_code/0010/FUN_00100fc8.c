/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100fc8` (_code @ 0x100fc8, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00100f9c(int);


unsigned int FUN_00100fc8(unsigned short *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *param_3;
  if (temp_v0 != 0) {
    temp_v2 = param_2 - 0x40;
    if ((temp_v2 < 0x3f) || (param_2 - 0x80 < 0x7d)) {
      if (temp_v0 < 0xe0) {
        temp_v1 = -0x81;
      }
      else {
        temp_v1 = -0xc1;
      }
      if (param_2 >= 0x80) {
        temp_v2 = param_2 - 0x41;
      }
      temp_v1 = FUN_00100f9c((int)(((temp_v0 + temp_v1) * 0xbc + temp_v2) * 0x10000) >> 0x10);
      if (temp_v1 != 0xffff) {
        *param_1 = (short)temp_v1;
        *param_3 = 0;
        return 1;
      }
    }
  }
  else {
    if ((param_2 - 0x81 < 0x1f) || (param_2 - 0xe0 < 0x10)) {
      *param_3 = param_2;
      return 0xfffffffe;
    }
    if (((param_2 < 0xf0) && (param_2 != 0x80)) && (param_2 != 0xa0)) {
      if (param_2 != 0x5c) {
        if (param_2 != 0x7e) {
          if (param_2 - 0xa1 < 0x3f) {
            param_2 = (param_2 + 0xfec0) & 0xffff;
          }
        }
        else {
          param_2 = 0x203e;
        }
      }
      else {
        param_2 = 0xa5;
      }
      *param_1 = (short)param_2;
      return 1;
    }
  }
  return 0xffffffff;
}
