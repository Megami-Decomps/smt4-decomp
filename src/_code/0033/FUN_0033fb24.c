/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fb24` (_code @ 0x33fb24, 0x240 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short FUN_0023de58(unsigned int);
extern short FUN_00245e2c(unsigned int);
extern short FUN_00255398(int, unsigned int);


unsigned char FUN_0033fb24(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 8 goto(s) */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = param_5 != 0;
  temp_v2 = 0;
  if (temp_v3 || param_2 != 0) {
    temp_v0 = FUN_00255398((int)*(short *)(param_1 + 8),7);
    if (param_2 != -7) {
      if (param_2 != -6) {
        if (param_2 != -5) {
          if (param_2 >= 1) {
            temp_v1 = FUN_0023de58(7);
            if (temp_v0 < temp_v1) {
LAB_0033fbf8:
              if ((param_5 == 0) || (temp_v0 != 0)) {
                temp_v2 = 8;
              }
            }
          }
          else if ((-1 < param_2) || (temp_v1 = FUN_00245e2c(7), temp_v1 < temp_v0)) goto LAB_0033fbf8;
        }
        else if (0 < temp_v0) goto LAB_0033fbf8;
      }
      else if (temp_v0 < 0) goto LAB_0033fbf8;
    }
    else if (temp_v0 != 0) goto LAB_0033fbf8;
  }
  if (temp_v3 || param_3 != 0) {
    temp_v0 = FUN_00255398((int)*(short *)(param_1 + 8),10);
    if (param_3 != -7) {
      if (param_3 != -6) {
        if (param_3 != -5) {
          if (param_3 >= 1) {
            temp_v1 = FUN_0023de58(10);
            if (temp_v0 < temp_v1) {
LAB_0033fc9c:
              if ((param_5 == 0) || (temp_v0 != 0)) {
                temp_v2 = temp_v2 | 0x10;
              }
            }
          }
          else if ((-1 < param_3) || (temp_v1 = FUN_00245e2c(10), temp_v1 < temp_v0)) goto LAB_0033fc9c;
        }
        else if (0 < temp_v0) goto LAB_0033fc9c;
      }
      else if (temp_v0 < 0) goto LAB_0033fc9c;
    }
    else if (temp_v0 != 0) goto LAB_0033fc9c;
  }
  if (temp_v3 || param_4 != 0) {
    temp_v0 = FUN_00255398((int)*(short *)(param_1 + 8),0xb);
    if (param_4 != -7) {
      if (param_4 != -6) {
        if (param_4 != -5) {
          if (param_4 >= 1) {
            temp_v1 = FUN_0023de58(0xb);
            if (temp_v1 <= temp_v0) {
              return temp_v2 == 0;
            }
          }
          else if ((param_4 < 0) && (temp_v1 = FUN_00245e2c(0xb), temp_v0 <= temp_v1)) {
            return temp_v2 == 0;
          }
        }
        else if (temp_v0 < 1) {
          return temp_v2 == 0;
        }
      }
      else if (-1 < temp_v0) {
        return temp_v2 == 0;
      }
    }
    else if (temp_v0 == 0) {
      return temp_v2 == 0;
    }
    if ((param_5 == 0) || (temp_v0 != 0)) {
      temp_v2 = temp_v2 | 0x20;
    }
  }
  return temp_v2 == 0;
}
