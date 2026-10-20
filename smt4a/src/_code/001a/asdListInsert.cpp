/* NON_MATCHING: romwright 0.5.0 decompilation of `asdListInsert` (_code @ 0x1ab958, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


unsigned int asdListInsert(int *param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int in_r12;
  unsigned char temp_v2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  temp_v1 = param_1[2];
  if (temp_v1 < 1) {
    *param_1 = param_2;
    param_1[1] = param_2;
  }
  else if ((param_3 < temp_v1) && (param_3 != -1)) {
    temp_v2 = param_3 != 0;
    temp_v0 = param_3;
    if (temp_v2) {
      in_r12 = -temp_v1;
      temp_v0 = param_3 + temp_v1;
    }
    if (!((temp_v2 && param_3 != in_r12) && temp_v0 < 0 == (temp_v2 && SBORROW4(param_3,in_r12)))) {
      temp_v1 = *param_1;
      *(int *)(temp_v1 + 0x14) = param_2;
      *(int *)(param_2 + 0x18) = temp_v1;
      *param_1 = param_2;
    }
    else {
      if (param_3 < 0) {
        param_3 = param_3 + 1 + temp_v1;
      }
      for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[6]) {
        if (*piVar2 == param_3) goto LAB_001aba00;
      }
      piVar2 = (int *)0x0;
LAB_001aba00:
      temp_v1 = piVar2[5];
      if (temp_v1 != 0) {
        *(int *)(param_2 + 0x14) = temp_v1;
        *(int *)(temp_v1 + 0x18) = param_2;
      }
      else {
        *(unsigned int *)(param_2 + 0x14) = 0;
        *param_1 = param_2;
      }
      *(int **)(param_2 + 0x18) = piVar2;
      piVar2[5] = param_2;
    }
  }
  else {
    temp_v1 = param_1[1];
    *(int *)(temp_v1 + 0x18) = param_2;
    *(int *)(param_2 + 0x14) = temp_v1;
    param_1[1] = param_2;
  }
  temp_v1 = 0;
  for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[6]) {
    *piVar2 = temp_v1;
    temp_v1 = temp_v1 + 1;
  }
  param_1[2] = temp_v1;
  return 1;
}

} /* extern "C" */
