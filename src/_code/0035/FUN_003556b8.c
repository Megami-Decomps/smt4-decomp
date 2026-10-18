/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003556b8` (_code @ 0x3556b8, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;


int FUN_003556b8(int param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  int *temp_v1;
  unsigned int temp_v2 [2];
  
  piVar2 = *(int **)(param_1 + 4);
  temp_v0 = param_1;
  if (param_2 == 0) {
    temp_v0 = 2;
  }
  if (param_2 < 0) {
    if (param_2 < -8) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 1;
    }
  }
  else if (0 < param_2) {
    if (param_2 < 9) {
      temp_v0 = 3;
    }
    else {
      temp_v0 = 4;
    }
  }
  if (piVar2[temp_v0 + 3] == 0) {
    temp_v2[0] = 0;
    temp_v0 = (**(romwright_code **)(*piVar2 + 0x44))(piVar2,temp_v2);
    if (temp_v0 >= 0) {
      temp_v1 = (int *)0x0;
      temp_v0 = (**(romwright_code **)(*piVar2 + 0x3c))(piVar2,&temp_v1,temp_v2[0]);
      if (temp_v0 < 0) {
        if (-1 < temp_v0) {
          *(int *)(param_1 + 0x18) = param_2;
          temp_v0 = 0;
        }
        return temp_v0;
      }
      temp_v0 = (**(romwright_code **)(*temp_v1 + 0x14))(temp_v1,param_2);
      if (temp_v0 < 0) {
        (**(romwright_code **)(*temp_v1 + 0x2c))();
        if (-1 < temp_v0) {
          *(int *)(param_1 + 0x18) = param_2;
          temp_v0 = 0;
        }
        return temp_v0;
      }
      temp_v0 = 0;
      if (param_2 == 0) {
        temp_v0 = 2;
      }
      if (param_2 < 0) {
        if (param_2 < -8) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = 1;
        }
      }
      else if (0 < param_2) {
        if (param_2 < 9) {
          temp_v0 = 3;
        }
        else {
          temp_v0 = 4;
        }
      }
      piVar2[temp_v0 + 3] = (int)temp_v1;
      temp_v0 = 0;
    }
  }
  else {
    temp_v0 = 0;
  }
  if (-1 < temp_v0) {
    *(int *)(param_1 + 0x18) = param_2;
    temp_v0 = 0;
  }
  return temp_v0;
}
