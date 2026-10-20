/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004828c4` (_code @ 0x4828c4, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd76c(int, float *);
int FUN_003fd784(int);
int FUN_003fdb18(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00581288; /* 0x581288 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161f; /* 0x5f161f */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fdb18. */


void FUN_004828c4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  if (((*(unsigned int *)(param_1 + 0x7c) & 4) != 0) &&
     (temp_v3 = *(float *)(param_1 + 0x2c) - *(float *)(DAT_00581288 + 0x1c),
     temp_v4 = *(float *)(param_1 + 0x30) - *(float *)(DAT_00581288 + 0x20),
     temp_v2 = *(float *)(param_1 + 0x34) - *(float *)(DAT_00581288 + 0x24),
     (int)romwright_sqrt_4(temp_v3 * temp_v3 + temp_v4 * temp_v4 + temp_v2 * temp_v2) >= 0x43960001)) {
    *(unsigned int *)(param_1 + 0x7c) = (*(unsigned int *)(param_1 + 0x7c) & 0xfffffffb) | 1;
  }
  if ((*(unsigned int *)(param_1 + 0x7c) & 1) != 0) {
    temp_v2 = *(float *)(param_1 + 0xb4) + 50.0f;
    *(float *)(param_1 + 0xb4) = temp_v2;
    if (0.0f < temp_v2) {
      *(unsigned int *)(param_1 + 0xb4) = 0;
      *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x7c) & 0xfffffffe;
      *(unsigned char *)(param_1 + 0xc) = *(unsigned char *)(param_1 + 0xc) & 0xfb;
    }
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    temp_v5 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xb0);
    temp_v6 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xb4);
    temp_v7 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0xb8);
    temp_v1 = *(int *)(*(int *)(param_1 + 0x78) + 4);
    FUN_003fd76c(temp_v1,&temp_v5);
    FUN_003fdb18(temp_v1);
    FUN_003fd784(temp_v1);
    if (DAT_005f161d != '\0') {
      temp_v0 = *(unsigned int *)(temp_v1 + 4) | 3;
    }
    else {
      temp_v0 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
    }
    *(unsigned int *)(temp_v1 + 4) = temp_v0;
    if ((*(unsigned int *)(param_1 + 0x7c) & 4) == 0) {
      if (DAT_005f161f != '\0') {
        temp_v0 = *(unsigned int *)(temp_v1 + 4) | 3;
      }
      else {
        temp_v0 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
      }
      *(unsigned int *)(temp_v1 + 4) = temp_v0;
      return;
    }
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
  }
  return;
}

} /* extern "C" */
