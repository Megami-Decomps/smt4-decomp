/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039fe64` (_code @ 0x39fe64, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00233404. */
extern int FUN_0029d65c(int);
extern int FUN_002af600(int);
extern int FUN_003c2a54(unsigned int);
extern int FUN_003c2a84(unsigned int);
extern int FUN_003c2ab4(unsigned int);
extern int FUN_003c2ae4(unsigned int);
extern int FUN_003c2b14(unsigned int);
extern int FUN_003c2b44(unsigned int);


void FUN_0039fe64(int *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  temp_v3 = *param_1;
  temp_v0 = FUN_0029d65c((int)*(short *)((int)param_1 + 0x12));
  temp_v1 = FUN_0029d65c((int)(short)param_1[5]);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  if (temp_v1 != 0) {
    *(unsigned char *)((int)param_1 + 0x11) = 1;
  }
  temp_v2 = FUN_002af600((int)*(short *)((int)param_1 + 0x12));
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
    temp_v0 = FUN_002af600((int)(short)param_1[5]);
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
      temp_v0 = FUN_003c2a84(0);
      if ((temp_v0 != 0) && (*param_1 == param_1[1])) {
        temp_v0 = param_1[2];
      }
      else {
        temp_v0 = FUN_003c2b44(0);
        if ((temp_v0 != 0) && (*param_1 == param_1[2])) {
          temp_v0 = param_1[1];
        }
        else {
          temp_v0 = FUN_003c2b14(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 + 10;
          }
          temp_v0 = FUN_003c2ae4(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 - 10;
          }
          temp_v0 = FUN_003c2a54(0);
          if (temp_v0 != 0) {
            *param_1 = *param_1 + 1;
          }
          temp_v1 = FUN_003c2ab4(0);
          temp_v0 = *param_1;
          if (temp_v1 == 0) goto LAB_0039fff4;
          temp_v0 = temp_v0 - 1;
        }
      }
    }
  }
  *param_1 = temp_v0;
LAB_0039fff4:
  if (temp_v0 <= param_1[2]) {
    temp_v0 = param_1[2];
  }
  *param_1 = temp_v0;
  if (param_1[1] < temp_v0) {
    temp_v0 = param_1[1];
  }
  *param_1 = temp_v0;
  if (temp_v0 != temp_v3) {
    FUN_00233404();
    return;
  }
  return;
}
