/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be8d0` (_code @ 0x2be8d0, 0x450 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int padGetCombinedButtonState(unsigned int, int, int);
int SBORROW4(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: padGetCombinedButtonState. */


unsigned int FUN_002be8d0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  
  if ((*param_1 & 2) != 0) {
    *param_1 = *param_1 | 1;
  }
  temp_v0 = (unsigned int)(unsigned char)param_1[1];
  padGetCombinedButtonState(temp_v0,(char)param_1[2],0);
  temp_v1 = (unsigned int)*(unsigned char *)((int)param_1 + 5);
  padGetCombinedButtonState(temp_v1,*(unsigned char *)((int)param_1 + 9),0);
  temp_v2 = (unsigned int)(unsigned char)param_1[1];
  padGetCombinedButtonState(temp_v2,(char)param_1[2],2);
  temp_v3 = (unsigned int)*(unsigned char *)((int)param_1 + 5);
  padGetCombinedButtonState(temp_v3,*(unsigned char *)((int)param_1 + 9),2);
  temp_v4 = (unsigned int)(unsigned char)param_1[1];
  padGetCombinedButtonState(temp_v4,(char)param_1[2],1);
  temp_v5 = (unsigned int)*(unsigned char *)((int)param_1 + 5);
  padGetCombinedButtonState(temp_v5,*(unsigned char *)((int)param_1 + 9),1);
  temp_v6 = (unsigned int)*(unsigned char *)((int)param_1 + 6);
  padGetCombinedButtonState(temp_v6,*(unsigned char *)((int)param_1 + 10),2);
  temp_v7 = (unsigned int)*(unsigned char *)((int)param_1 + 7);
  padGetCombinedButtonState(temp_v7,*(unsigned char *)((int)param_1 + 0xb),2);
  temp_v8 = (unsigned int)*(unsigned char *)((int)param_1 + 6);
  padGetCombinedButtonState(temp_v8,*(unsigned char *)((int)param_1 + 10),1);
  temp_v9 = (unsigned int)*(unsigned char *)((int)param_1 + 7);
  padGetCombinedButtonState(temp_v9,*(unsigned char *)((int)param_1 + 0xb),1);
  temp_v10 = 0;
  if (temp_v0 != 0) {
    if (((*param_1 & 4) != 0) || ((param_1[9] + param_1[8]) - param_1[7] != -1)) {
      *param_1 = *param_1 & 0xfffffffe;
    }
    temp_v9 = param_1[7];
    if ((int)temp_v9 < 2) {
      return 0;
    }
    temp_v11 = param_1[4] - param_1[5];
    if (temp_v11 < 1) {
      temp_v11 = 1;
    }
    temp_v0 = param_1[8] + 1;
    if (temp_v11 <= (int)temp_v0) {
      temp_v10 = param_1[9];
      if ((int)temp_v9 <= (int)(param_1[4] + temp_v10)) {
        if ((int)(temp_v9 - 1) <= (int)(temp_v10 + param_1[8])) {
          temp_v9 = *param_1;
          if ((temp_v9 & 1) == 0) {
            param_1[8] = 0;
            param_1[9] = 0;
            return 1;
          }
          return 0;
        }
        param_1[8] = temp_v0;
        return 1;
      }
      temp_v10 = temp_v10 + 1;
      param_1[9] = temp_v10;
      return 1;
    }
    if ((int)temp_v0 < (int)temp_v9) {
      param_1[8] = temp_v0;
      return 1;
    }
    temp_v9 = *param_1;
  }
  else {
    if (temp_v1 != 0) {
      if (((*param_1 & 4) != 0) || (param_1[9] + param_1[8] != 0)) {
        *param_1 = *param_1 & 0xfffffffe;
      }
      temp_v9 = param_1[7];
      if ((int)temp_v9 < 2) {
        return 0;
      }
      temp_v1 = param_1[5];
      temp_v2 = param_1[8];
      temp_v0 = param_1[4];
      if ((int)temp_v9 < (int)param_1[4]) {
        temp_v0 = temp_v9;
      }
      if ((int)temp_v1 < 0) {
        temp_v1 = 0;
      }
      temp_v3 = temp_v2 - 1;
      if ((int)temp_v3 >= (int)temp_v1) {
        if (0 < (int)temp_v2) {
          param_1[8] = temp_v3;
          return 2;
        }
        temp_v1 = *param_1;
      }
      else {
        temp_v1 = param_1[9] - 1;
        if (-1 < (int)temp_v1) {
          param_1[9] = temp_v1;
          return 2;
        }
        if (0 < (int)(param_1[9] + temp_v2)) {
          param_1[8] = temp_v3;
          return 2;
        }
        temp_v1 = *param_1;
      }
      if ((temp_v1 & 1) == 0) {
        param_1[8] = temp_v0 - 1;
        param_1[9] = temp_v9 - temp_v0;
        return 2;
      }
      return 0;
    }
    if (temp_v6 != 0) {
      if (temp_v8 == 0) {
        return 0;
      }
      temp_v0 = param_1[4];
      temp_v1 = param_1[7];
      temp_v9 = temp_v0;
      if ((int)temp_v1 < (int)temp_v0) {
        temp_v9 = temp_v1;
      }
      if ((int)temp_v1 <= (int)(param_1[9] + temp_v0)) {
        param_1[8] = temp_v9 - 1;
        param_1[9] = temp_v1 - temp_v9;
        return 0;
      }
      temp_v9 = param_1[6] + param_1[9];
      param_1[9] = temp_v9;
      if ((int)temp_v1 < (int)(temp_v9 + temp_v0)) {
        param_1[9] = temp_v1 - temp_v0;
        return 3;
      }
      return 3;
    }
    if (temp_v7 != 0) {
      if (temp_v9 == 0) {
        return 0;
      }
      if ((int)param_1[9] < 1) {
        param_1[9] = 0;
        param_1[8] = 0;
        return 0;
      }
      temp_v9 = param_1[9] - param_1[6];
      param_1[9] = temp_v9;
      if ((int)temp_v9 < 1) {
        param_1[9] = 0;
        return 4;
      }
      return 4;
    }
    if (temp_v2 == 0) {
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v12 = temp_v5 == 0;
      temp_v11 = 0;
      if (!temp_v12) {
        temp_v9 = param_1[7];
        temp_v11 = temp_v9 - 1;
      }
      if ((temp_v12 || temp_v9 == 1) || temp_v11 < 0 != (!temp_v12 && SBORROW4(temp_v9,1))) {
        return 0;
      }
      temp_v1 = param_1[5];
      temp_v2 = param_1[8];
      temp_v0 = param_1[4];
      if ((int)temp_v9 < (int)param_1[4]) {
        temp_v0 = temp_v9;
      }
      if ((int)temp_v1 < 0) {
        temp_v1 = 0;
      }
      temp_v3 = temp_v2 - 1;
      if ((int)temp_v3 >= (int)temp_v1) {
        if (0 < (int)temp_v2) {
          param_1[8] = temp_v3;
          return 2;
        }
        temp_v1 = *param_1;
      }
      else {
        temp_v1 = param_1[9] - 1;
        if (-1 < (int)temp_v1) {
          param_1[9] = temp_v1;
          return 2;
        }
        if (0 < (int)(param_1[9] + temp_v2)) {
          param_1[8] = temp_v3;
          return 2;
        }
        temp_v1 = *param_1;
      }
      if ((temp_v1 & 1) == 0) {
        param_1[8] = temp_v0 - 1;
        param_1[9] = temp_v9 - temp_v0;
        return 2;
      }
      return 0;
    }
    temp_v12 = temp_v4 == 0;
    temp_v9 = 0;
    temp_v11 = 0;
    if (!temp_v12) {
      temp_v9 = param_1[7];
      temp_v11 = temp_v9 - 1;
    }
    if ((temp_v12 || temp_v9 == 1) || temp_v11 < 0 != (!temp_v12 && SBORROW4(temp_v9,1))) {
      return 0;
    }
    temp_v11 = param_1[4] - param_1[5];
    if (temp_v11 < 1) {
      temp_v11 = 1;
    }
    temp_v0 = param_1[8] + 1;
    if (temp_v11 <= (int)temp_v0) {
      temp_v10 = param_1[9];
      if ((int)temp_v9 <= (int)(param_1[4] + temp_v10)) {
        if ((int)(temp_v9 - 1) <= (int)(temp_v10 + param_1[8])) {
          temp_v9 = *param_1;
          if ((temp_v9 & 1) == 0) {
            param_1[8] = 0;
            param_1[9] = 0;
            return 1;
          }
          return 0;
        }
        param_1[8] = temp_v0;
        return 1;
      }
      temp_v10 = temp_v10 + 1;
      param_1[9] = temp_v10;
      return 1;
    }
    if ((int)temp_v0 < (int)temp_v9) {
      param_1[8] = temp_v0;
      return 1;
    }
    temp_v9 = *param_1;
  }
  if ((temp_v9 & 1) != 0) {
    return 0;
  }
  param_1[8] = 0;
  param_1[9] = temp_v10;
  return 1;
}

} /* extern "C" */
