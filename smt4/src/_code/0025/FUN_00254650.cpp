/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254650` (_code @ 0x254650, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020ffe8(unsigned int, unsigned int);
int statusCameraSetEye(void);
int FUN_00293db0(unsigned int, int);
int FUN_00293e08(unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0020ffe8. */
/* Supplied declaration required: statusCameraSetEye. */
/* Supplied declaration required: FUN_00293db0. */
/* Supplied declaration required: FUN_00293e08. */


void FUN_00254650(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  unsigned int temp_v2 [8];
  
  switch(param_2) {
  case 0:
    if ((int)*(float *)(param_1 + 0x18) < 0x3cf5c28f) {
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 0.0005f;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    FUN_00293e08(*(unsigned int *)(param_1 + 0x1c));
    temp_v0 = *(int *)(param_1 + 0x28);
    break;
  case 1:
    if ((int)*(float *)(param_1 + 0x18) >= 0x3c449ba7) {
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - 0.0005f;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - 1;
    }
    FUN_00293e08(*(unsigned int *)(param_1 + 0x1c));
    temp_v0 = *(int *)(param_1 + 0x28);
    break;
  case 2:
    temp_v1 = *(float *)(param_1 + 0x10) + 5.0f;
    *(float *)(param_1 + 0x10) = temp_v1;
    if ((int)temp_v1 < 0x43b40001) {
      FUN_00293db0(*(unsigned int *)(param_1 + 0x1c),param_1 + 0xc);
      return;
    }
    temp_v1 = temp_v1 - 360.0f;
    *(float *)(param_1 + 0x10) = temp_v1;
    FUN_00293db0(*(unsigned int *)(param_1 + 0x1c),param_1 + 0xc);
    return;
  case 3:
    temp_v1 = *(float *)(param_1 + 0x10) - 5.0f;
    *(float *)(param_1 + 0x10) = temp_v1;
    if (0.0f <= temp_v1) {
      FUN_00293db0(*(unsigned int *)(param_1 + 0x1c),param_1 + 0xc);
      return;
    }
    temp_v1 = temp_v1 + 360.0f;
    *(float *)(param_1 + 0x10) = temp_v1;
    FUN_00293db0(*(unsigned int *)(param_1 + 0x1c),param_1 + 0xc);
    return;
  case 4:
    temp_v2[0] = 0;
    temp_v2[1] = 2;
    temp_v2[2] = 0x12;
    FUN_0020ffe8(*(unsigned int *)(param_1 + 0x1c),temp_v2[*(int *)(param_1 + 0x24)]);
    return;
  default:
    return;
  }
  if (0 < temp_v0) {
    VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  statusCameraSetEye();
  return;
}

} /* extern "C" */
