/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003962b8` (_code @ 0x3962b8, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00447e88; /* 0x447e88 */
extern signed char DAT_0049f93e; /* 0x49f93e */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0025c0f0. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */


void FUN_003962b8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  if (((*(unsigned int *)(param_1 + 0x70) & 4) != 0) &&
     (temp_v2 = *(float *)(param_1 + 0x28) - *(float *)(DAT_00447e88 + 0x1c),
     temp_v3 = *(float *)(param_1 + 0x2c) - *(float *)(DAT_00447e88 + 0x20),
     temp_v1 = *(float *)(param_1 + 0x30) - *(float *)(DAT_00447e88 + 0x24),
     (int)romwright_sqrt_4(temp_v2 * temp_v2 + temp_v3 * temp_v3 + temp_v1 * temp_v1) >= 0x43960001)) {
    *(unsigned int *)(param_1 + 0x70) = (*(unsigned int *)(param_1 + 0x70) & 0xfffffffb) | 1;
  }
  if (((*(unsigned int *)(param_1 + 0x70) & 1) != 0) &&
     (temp_v1 = *(float *)(param_1 + 0x94) + 50.0f, *(float *)(param_1 + 0x94) = temp_v1, 0.0f < temp_v1)) {
    *(unsigned int *)(param_1 + 0x94) = 0;
    *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) & 0xfffffffe;
    *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) & 0xfb;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    temp_v4 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x90);
    temp_v5 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x94);
    temp_v6 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x98);
    FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0,&temp_v4);
    FUN_0028c880(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
    FUN_0025c0f0(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
    if ((*(unsigned int *)(param_1 + 0x70) & 4) != 0) {
      puVar1 = *(unsigned int **)(param_1 + 0x6c);
      temp_v0 = *puVar1;
    }
    else {
      puVar1 = *(unsigned int **)(param_1 + 0x6c);
      if (DAT_0049f93e == '\0') {
        if ((*puVar1 & 2) == 0) {
          return;
        }
        *puVar1 = *puVar1 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
        return;
      }
      temp_v0 = *puVar1;
    }
    if ((temp_v0 & 2) == 0) {
      *puVar1 = temp_v0 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
    }
  }
  return;
}
