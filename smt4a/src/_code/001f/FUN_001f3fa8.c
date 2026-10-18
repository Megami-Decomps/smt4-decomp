/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f3fa8` (_code @ 0x1f3fa8, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164af0(unsigned int);


unsigned int FUN_001f3fa8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 5 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_1;
  if (param_5 != 0) {
    if (param_5 != 1) {
      if (param_5 != 2) {
        if (param_5 != 3) {
          return 0;
        }
        temp_v0 = FUN_00164af0(4);
        if (temp_v0 == 0) {
          temp_v0 = FUN_00164af0(3);
joined_r0x001f403c:
          if (temp_v0 == 0) {
            return 0;
          }
          goto LAB_001f4058;
        }
      }
      else {
        temp_v0 = FUN_00164af0(5);
        if (temp_v0 == 0) {
          temp_v0 = FUN_00164af0(6);
          goto joined_r0x001f403c;
        }
      }
LAB_001f408c:
      temp_v0 = 1;
      goto LAB_001f4090;
    }
    temp_v0 = FUN_00164af0(4);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00164af0(3);
      goto joined_r0x001f4010;
    }
  }
  else {
    temp_v0 = FUN_00164af0(5);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00164af0(6);
joined_r0x001f4010:
      if (temp_v0 == 0) {
        return 0;
      }
      goto LAB_001f408c;
    }
  }
LAB_001f4058:
  temp_v0 = -1;
LAB_001f4090:
  temp_v2 = param_3 - param_2;
  temp_v3 = temp_v0 * param_6 + temp_v3;
  if (temp_v3 < param_2) {
    temp_v0 = param_2;
    if (param_4 != 0 && temp_v2 != -1) {
      do {
        temp_v0 = temp_v3 + temp_v2 + 1;
        temp_v3 = temp_v0;
      } while (temp_v0 < param_2);
    }
  }
  else {
    temp_v0 = temp_v3;
    if ((param_3 < temp_v3) && (temp_v0 = param_3, param_4 != 0 && temp_v2 != -1)) {
      do {
        temp_v3 = (temp_v3 - temp_v2) - 1;
        temp_v0 = temp_v3;
      } while (param_3 < temp_v3);
    }
  }
  if (*param_1 != temp_v0) {
    *param_1 = temp_v0;
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  return temp_v1;
}
