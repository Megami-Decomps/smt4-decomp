/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231b74` (_code @ 0x231b74, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


unsigned char FUN_00231b74(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c2b1c();
  temp_v1 = param_3 * 5 + param_2;
  temp_v2 = temp_v1 % 8;
  temp_v1 = (int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1d)) >> 3;
  if (param_1 != 0x65) {
    if (param_1 != 0x66) {
      if ((((param_1 != 0x67) || (param_2 < 0)) || (param_2 >= 5)) ||
         ((param_3 < 0 || (param_3 >= 7)))) {
        return 0;
      }
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + temp_v1 + 0xd8c) & (1 << (temp_v2 & 0xff));
    }
    else {
      if (param_2 < 0) {
        return 0;
      }
      if (param_2 >= 5) {
        return 0;
      }
      if (param_3 < 0) {
        return 0;
      }
      if (param_3 >= 7) {
        return 0;
      }
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + temp_v1 + 0xd84) & (1 << (temp_v2 & 0xff));
    }
  }
  else {
    if (param_2 < 0) {
      return 0;
    }
    if (param_2 >= 5) {
      return 0;
    }
    if (param_3 < 0) {
      return 0;
    }
    if (param_3 >= 7) {
      return 0;
    }
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + temp_v1 + 0xd7c) & (1 << (temp_v2 & 0xff));
  }
  return temp_v2 != 0;
}
