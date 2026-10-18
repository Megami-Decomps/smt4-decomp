/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017f724` (_code @ 0x17f724, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b8cec(unsigned int);


unsigned int FUN_0017f724(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
        temp_v0 = FUN_002b8cec(4);
        if (temp_v0 == 0) {
          temp_v0 = FUN_002b8cec(3);
joined_r0x0017f7b8:
          if (temp_v0 == 0) {
            return 0;
          }
          goto LAB_0017f7d4;
        }
      }
      else {
        temp_v0 = FUN_002b8cec(5);
        if (temp_v0 == 0) {
          temp_v0 = FUN_002b8cec(6);
          goto joined_r0x0017f7b8;
        }
      }
LAB_0017f808:
      temp_v0 = 1;
      goto LAB_0017f80c;
    }
    temp_v0 = FUN_002b8cec(4);
    if (temp_v0 == 0) {
      temp_v0 = FUN_002b8cec(3);
      goto joined_r0x0017f78c;
    }
  }
  else {
    temp_v0 = FUN_002b8cec(5);
    if (temp_v0 == 0) {
      temp_v0 = FUN_002b8cec(6);
joined_r0x0017f78c:
      if (temp_v0 == 0) {
        return 0;
      }
      goto LAB_0017f808;
    }
  }
LAB_0017f7d4:
  temp_v0 = -1;
LAB_0017f80c:
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
