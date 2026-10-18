/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395548` (_code @ 0x395548, 0x200 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_0025c0f0. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */


void FUN_00395548(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  if ((*(unsigned int *)(param_1 + 0x70) & 1) != 0) {
    temp_v1 = *(float *)(param_1 + 0x78) + 50.0f;
    *(float *)(param_1 + 0x78) = temp_v1;
    if (0.0f < temp_v1) {
      *(unsigned int *)(param_1 + 0x78) = 0;
      *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) & 0xfffffffe;
    }
  }
  if (*(unsigned int *)(param_1 + 0x58) < 10) {
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) - 50.0f;
    *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 2;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    temp_v2 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x74);
    temp_v3 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x78);
    temp_v4 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x7c);
    if ((int)*(float *)(DAT_004474f4 + 700) >= 0x3f666667) {
      temp_v1 = (*(float *)(DAT_004474f4 + 700) - 0.9f) * 10.0f;
      if (temp_v1 < 0.0f) {
        temp_v1 = 0.0f;
      }
      else if ((int)temp_v1 >= 0x3f800001) {
        temp_v1 = 1.0f;
      }
      temp_v3 = temp_v3 + temp_v1 * 100.0f;
      FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0,&temp_v2);
      FUN_0028c880(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
    }
    else {
      FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0,&temp_v2);
      FUN_0028c880(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
    }
    FUN_0025c0f0(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
    puVar1 = *(unsigned int **)(param_1 + 0x6c);
    temp_v0 = *puVar1;
    if (DAT_0049f93e != '\0') {
      if ((temp_v0 & 2) == 0) {
        *puVar1 = temp_v0 | 2;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      }
    }
    else if ((temp_v0 & 2) != 0) {
      *puVar1 = temp_v0 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
      return;
    }
  }
  return;
}
