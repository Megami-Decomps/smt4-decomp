/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0080` (_code @ 0x3a0080, 0x1c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00233598. */
extern int FUN_0029d8fc(int);
extern int FUN_002af894(int);
extern int FUN_003c2c7c(unsigned int);
extern int FUN_003c2cac(unsigned int);
extern int FUN_003c2cdc(unsigned int);
extern int FUN_003c2d0c(unsigned int);
extern int FUN_003c2d3c(unsigned int);
extern int FUN_003c2d6c(unsigned int);


void FUN_003a0080(int *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  temp_v3 = *param_1;
  temp_v0 = FUN_0029d8fc((int)*(short *)((int)param_1 + 0x12));
  temp_v1 = FUN_0029d8fc((int)(short)param_1[5]);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  if (temp_v1 != 0) {
    *(unsigned char *)((int)param_1 + 0x11) = 1;
  }
  temp_v2 = FUN_002af894((int)*(short *)((int)param_1 + 0x12));
  if (temp_v2 != 0) {
    temp_v0 = *param_1;
    if (temp_v0 != param_1[1]) {
      temp_v0 = temp_v0 + 1;
    }
    else {
      temp_v0 = param_1[2];
    }
  }
  else if ((temp_v0 == 2) && (temp_v0 = *param_1, temp_v0 < param_1[1])) {
    temp_v0 = temp_v0 + 1;
  }
  else {
    temp_v0 = FUN_002af894((int)(short)param_1[5]);
    if (temp_v0 != 0) {
      temp_v0 = *param_1;
      if (temp_v0 == param_1[2]) {
        temp_v0 = param_1[1];
      }
      else {
        temp_v0 = temp_v0 - 1;
      }
    }
    else if ((temp_v1 == 2) && (temp_v0 = *param_1, 0 < temp_v0)) {
      temp_v0 = temp_v0 - 1;
    }
    else {
      temp_v0 = FUN_003c2cac(0);
      if ((temp_v0 != 0) && (*param_1 == param_1[1])) {
        temp_v0 = param_1[2];
      }
      else {
        temp_v0 = FUN_003c2d6c(0);
        if ((temp_v0 != 0) && (*param_1 == param_1[2])) {
          temp_v0 = param_1[1];
        }
        else {
          temp_v0 = FUN_003c2d3c(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 + 10;
          }
          temp_v0 = FUN_003c2d0c(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 - 10;
          }
          temp_v0 = FUN_003c2c7c(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 + 1;
          }
          temp_v1 = FUN_003c2cdc(0);
          temp_v0 = *param_1;
          if (temp_v1 == 0) goto LAB_003a0210;
          temp_v0 = temp_v0 - 1;
        }
      }
    }
  }
  *param_1 = temp_v0;
LAB_003a0210:
  if (temp_v0 <= param_1[2]) {
    temp_v0 = param_1[2];
  }
  *param_1 = temp_v0;
  if (param_1[1] < temp_v0) {
    temp_v0 = param_1[1];
  }
  *param_1 = temp_v0;
  if (temp_v0 != temp_v3) {
    FUN_00233598();
    return;
  }
  return;
}
