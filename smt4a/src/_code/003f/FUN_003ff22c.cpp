/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff22c` (_code @ 0x3ff22c, 0x2f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlFindEntryValue(...);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_6_stack;

/* Supplied declaration required: btlFindEntryValue. */
extern short btlGetPropertyMaximum(unsigned int);
extern short FUN_004c53fc(unsigned int);


unsigned char FUN_003ff22c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 12 goto(s); 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = param_6 != 0;
  temp_v2 = 0;
  if (temp_v3 || param_2 != 0) {
    temp_v0 = btlFindEntryValue((int)*(short *)(param_1 + 8),7,param_3,param_4,param_1,param_2,param_3);
    if (param_2 != -7) {
      if (param_2 != -6) {
        if (param_2 != -5) {
          if (param_2 >= 1) {
            temp_v1 = btlGetPropertyMaximum(7);
            if (temp_v0 < temp_v1) {
LAB_003ff30c:
              if ((param_6 == 0) || (temp_v0 != 0)) {
                temp_v2 = 8;
              }
            }
          }
          else if ((-1 < param_2) || (temp_v1 = FUN_004c53fc(7), temp_v1 < temp_v0)) goto LAB_003ff30c;
        }
        else if (0 < temp_v0) goto LAB_003ff30c;
      }
      else if (temp_v0 < 0) goto LAB_003ff30c;
    }
    else if (temp_v0 != 0) goto LAB_003ff30c;
  }
  if (temp_v3 || param_3 != 0) {
    temp_v0 = btlFindEntryValue((int)*(short *)(param_1 + 8),8);
    if (param_3 != -7) {
      if (param_3 != -6) {
        if (param_3 != -5) {
          if (param_3 >= 1) {
            temp_v1 = btlGetPropertyMaximum(8);
            if (temp_v0 < temp_v1) {
LAB_003ff3b0:
              if ((param_6 == 0) || (temp_v0 != 0)) {
                temp_v2 = temp_v2 | 0x10;
              }
            }
          }
          else if ((-1 < param_3) || (temp_v1 = FUN_004c53fc(8), temp_v1 < temp_v0)) goto LAB_003ff3b0;
        }
        else if (0 < temp_v0) goto LAB_003ff3b0;
      }
      else if (temp_v0 < 0) goto LAB_003ff3b0;
    }
    else if (temp_v0 != 0) goto LAB_003ff3b0;
  }
  if (temp_v3 || param_4 != 0) {
    temp_v0 = btlFindEntryValue((int)*(short *)(param_1 + 8),10);
    if (param_4 != -7) {
      if (param_4 != -6) {
        if (param_4 != -5) {
          if (param_4 >= 1) {
            temp_v1 = btlGetPropertyMaximum(10);
            if (temp_v0 < temp_v1) {
LAB_003ff458:
              if ((param_6 == 0) || (temp_v0 != 0)) {
                temp_v2 = temp_v2 | 0x20;
              }
            }
          }
          else if ((-1 < param_4) || (temp_v1 = FUN_004c53fc(10), temp_v1 < temp_v0)) goto LAB_003ff458;
        }
        else if (0 < temp_v0) goto LAB_003ff458;
      }
      else if (temp_v0 < 0) goto LAB_003ff458;
    }
    else if (temp_v0 != 0) goto LAB_003ff458;
  }
  if (temp_v3 || param_5 != 0) {
    temp_v0 = btlFindEntryValue((int)*(short *)(param_1 + 8),0xb);
    if (param_5 != -7) {
      if (param_5 != -6) {
        if (param_5 != -5) {
          if (param_5 >= 1) {
            temp_v1 = btlGetPropertyMaximum(0xb);
            if (temp_v1 <= temp_v0) {
              return temp_v2 == 0;
            }
          }
          else if ((param_5 < 0) && (temp_v1 = FUN_004c53fc(0xb), temp_v0 <= temp_v1)) {
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
    if ((param_6 == 0) || (temp_v0 != 0)) {
      temp_v2 = temp_v2 | 0x40;
    }
  }
  return temp_v2 == 0;
}

} /* extern "C" */
