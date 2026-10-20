/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00493b74` (_code @ 0x493b74, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sendEvent100020D(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001802d4(int);
extern int FUN_00284140(int);
extern int getMaskType5(unsigned int);
extern int getMaskB5(unsigned int);
extern int getMaskType6(unsigned int);
extern int getMaskType4(unsigned int);
extern int getMaskType3(unsigned int);
extern int getMaskB6(unsigned int);
/* Supplied declaration required: sendEvent100020D. */


void FUN_00493b74(int *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  temp_v3 = *param_1;
  temp_v0 = FUN_00284140((int)*(short *)((int)param_1 + 0x12));
  temp_v1 = FUN_00284140((int)(short)param_1[5]);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  if (temp_v1 != 0) {
    *(unsigned char *)((int)param_1 + 0x11) = 1;
  }
  temp_v2 = FUN_001802d4((int)*(short *)((int)param_1 + 0x12));
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
    temp_v0 = FUN_001802d4((int)(short)param_1[5]);
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
      temp_v0 = getMaskB5(0);
      if ((temp_v0 != 0) && (*param_1 == param_1[1])) {
        temp_v0 = param_1[2];
      }
      else {
        temp_v0 = getMaskB6(0);
        if ((temp_v0 != 0) && (*param_1 == param_1[2])) {
          temp_v0 = param_1[1];
        }
        else {
          temp_v0 = getMaskType3(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 + 10;
          }
          temp_v0 = getMaskType4(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 - 10;
          }
          temp_v0 = getMaskType5(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 + 1;
          }
          temp_v1 = getMaskType6(0);
          temp_v0 = *param_1;
          if (temp_v1 == 0) goto LAB_00493d04;
          temp_v0 = temp_v0 - 1;
        }
      }
    }
  }
  *param_1 = temp_v0;
LAB_00493d04:
  if (temp_v0 <= param_1[2]) {
    temp_v0 = param_1[2];
  }
  *param_1 = temp_v0;
  if (param_1[1] < temp_v0) {
    temp_v0 = param_1[1];
  }
  *param_1 = temp_v0;
  if (temp_v0 != temp_v3) {
    sendEvent100020D();
    return;
  }
  return;
}

} /* extern "C" */
