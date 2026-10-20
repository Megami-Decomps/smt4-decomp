/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016a220` (_code @ 0x16a220, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001871c0(...);
int FUN_001882fc(void);
int FUN_00193c08(unsigned int, unsigned int);
int FUN_00198144(int *, unsigned int);
int FUN_001981d8(unsigned int, unsigned int, int);
int FUN_00198360(unsigned int, unsigned int, int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001871c0. */
/* Supplied declaration required: FUN_001882fc. */
/* Supplied declaration required: FUN_00193c08. */
/* Supplied declaration required: FUN_00198144. */
/* Supplied declaration required: FUN_001981d8. */
/* Supplied declaration required: FUN_00198360. */


void FUN_0016a220(int param_1)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float in_s0;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  piVar5 = (int *)(param_1 + 8);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(float *)(param_1 + 0x18) >= *(float *)(param_1 + 0x14)) {
      *(unsigned char *)(param_1 + 0x20) = 0;
      *(unsigned int *)(param_1 + (*(unsigned int *)(param_1 + 0x1c) ^ 1) * 0x30 + 0x30) = 0;
    }
    else {
      temp_v4 = *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0x14);
      temp_v6 = 1.0f;
      temp_v2 = *(int *)(param_1 + 0xc);
      temp_v5 = 0.0f;
      if ((int)temp_v4 >= 0x3f800001) {
        temp_v4 = temp_v6;
      }
      temp_v0 = 0;
      do {
        temp_v1 = temp_v0 + 1;
        *(unsigned int *)(*piVar5 + temp_v0 * 4) = 0;
        temp_v0 = temp_v1;
      } while (temp_v1 <= temp_v2 - 1U);
      temp_v2 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
      if (0.0f < temp_v4) {
        FUN_00198360(*(unsigned int *)(temp_v2 + 0x30),*(unsigned int *)(param_1 + 0x108),piVar5,
                     temp_v2 + 0x38);
      }
      temp_v2 = param_1 + (*(unsigned int *)(param_1 + 0x1c) ^ 1) * 0x30;
      if (temp_v5 < temp_v6 - temp_v4) {
        FUN_00198360(*(unsigned int *)(temp_v2 + 0x30),*(unsigned int *)(param_1 + 0x108),piVar5,
                     temp_v2 + 0x38);
      }
      FUN_00198144(piVar5,*(unsigned int *)(param_1 + 0x108));
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      temp_v2 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
      if (*(int *)(temp_v2 + 0x30) != 0) {
        FUN_00193c08(*(unsigned int *)(param_1 + 0x210),*(unsigned int *)(param_1 + 0x108));
        FUN_001981d8(*(unsigned int *)(temp_v2 + 0x30),*(unsigned int *)(param_1 + 0x108),temp_v2 + 0x38);
      }
    }
  }
  else {
    temp_v2 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
    if (*(int *)(temp_v2 + 0x30) != 0) {
      FUN_00193c08(*(unsigned int *)(param_1 + 0x210),*(unsigned int *)(param_1 + 0x108));
      FUN_001981d8(*(unsigned int *)(temp_v2 + 0x30),*(unsigned int *)(param_1 + 0x108),temp_v2 + 0x38);
    }
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + in_s0;
    temp_v3 = FUN_001871c0(param_1 + *(int *)(param_1 + 0x1c) * 0x30 + 0x24);
    temp_v2 = 0;
    if (temp_v3 != 0) {
      temp_v2 = *(int *)(param_1 + 0x25c);
    }
    if (temp_v3 != 0 && temp_v2 != 0) {
      FUN_001882fc();
    }
    FUN_001871c0(param_1 + (*(unsigned int *)(param_1 + 0x1c) ^ 1) * 0x30 + 0x24);
    return;
  }
  temp_v2 = FUN_001871c0(param_1 + *(int *)(param_1 + 0x1c) * 0x30 + 0x24);
  if ((temp_v2 != 0) && (*(int *)(param_1 + 0x25c) != 0)) {
    FUN_001882fc();
    return;
  }
  return;
}

} /* extern "C" */
