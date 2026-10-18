/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a6c8` (_code @ 0x21a6c8, 0x318 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00270d30; /* 0x270d30 */

/* Supplied declaration required: FUN_0010063a. */


void FUN_0021a6c8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7 [3];
  
  puVar4 = (unsigned int *)(param_1 + 0x4850);
  FUN_0010063a(param_1 + 0x4858,*puVar4,0x40,&LAB_00270d30);
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v2 = *puVar4;
  temp_v0 = 0;
  if (0 < (int)temp_v2) {
    temp_v6 = (temp_v2 & 1) != 0;
    temp_v1 = param_1 + 0x4828;
    temp_v4 = param_1 + 0x47e8;
    if (temp_v6) {
      temp_v1 = param_1 + 0x4868;
      temp_v4 = param_1 + 0x4828;
      temp_v7[0] = 1;
    }
    temp_v7[0] = (unsigned int)temp_v6;
    temp_v5 = (unsigned int)temp_v6;
    for (temp_v3 = (int)temp_v2 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      if (((0 < (int)temp_v5) && (*(float *)(temp_v4 + 0x40) < *(float *)(temp_v1 + 0x40))) && (temp_v0 < 1)
         ) {
        temp_v0 = temp_v0 + 1;
      }
      temp_v7[temp_v0] = temp_v7[temp_v0] + 1;
      if (((0 < (int)(temp_v5 + 1)) && (*(float *)(temp_v4 + 0x80) < *(float *)(temp_v1 + 0x80))) &&
         (temp_v0 < 1)) {
        temp_v0 = temp_v0 + 1;
      }
      temp_v1 = temp_v1 + 0x80;
      temp_v4 = temp_v4 + 0x80;
      temp_v5 = temp_v5 + 2;
      temp_v7[temp_v0] = temp_v7[temp_v0] + 1;
    }
  }
  if (*(char *)(param_1 + 0x4856) == '\0') {
    if ((int)temp_v7[0] < 1) {
      if ((int)temp_v7[1] >= 1) {
        *(unsigned char *)(param_1 + 0x4857) = 1;
        *(unsigned char *)(param_1 + 0x4856) = 1;
      }
    }
    else {
      if ((int)temp_v7[1] >= 1) {
        *(unsigned char *)(param_1 + 0x4857) = 0;
      }
      else {
        *(unsigned char *)(param_1 + 0x4857) = 1;
      }
      *(unsigned char *)(param_1 + 0x4856) = 1;
    }
  }
  temp_v0 = 0;
  if (0 < (int)temp_v2) {
    do {
      if (*(char *)(param_1 + 0x4857) != '\0') {
        temp_v2 = temp_v7[0];
        if ((int)temp_v7[0] <= temp_v0) {
          temp_v2 = temp_v7[1];
        }
        if ((temp_v2 & 1) != 0) {
          temp_v4 = temp_v0 + (int)(5 - temp_v2) / 2;
          temp_v1 = param_1 + temp_v0 * 0x40;
          *(int *)(temp_v1 + 0x488c) = temp_v4 + 0x1a1;
          *(int *)(temp_v1 + 0x4890) = temp_v4 + 0x1aa;
        }
        else {
          temp_v4 = param_1 + temp_v0 * 0x40;
          temp_v1 = temp_v0 + (int)(4 - temp_v2) / 2;
          *(int *)(temp_v4 + 0x488c) = temp_v1 + 0x1a6;
          *(int *)(temp_v4 + 0x4890) = temp_v1 + 0x1af;
        }
      }
      else if (temp_v0 < (int)temp_v7[0]) {
        if ((temp_v7[0] & 1) != 0) {
          temp_v4 = param_1 + temp_v0 * 0x40;
          temp_v1 = temp_v0 + (int)(5 - temp_v7[0]) / 2;
          *(int *)(temp_v4 + 0x488c) = temp_v1 + 0x14a;
          *(int *)(temp_v4 + 0x4890) = temp_v1 + 0x154;
        }
        else {
          temp_v4 = temp_v0 + (int)(4 - temp_v7[0]) / 2;
          temp_v1 = param_1 + temp_v0 * 0x40;
          *(int *)(temp_v1 + 0x488c) = temp_v4 + 0x165;
          *(int *)(temp_v1 + 0x4890) = temp_v4 + 0x16d;
        }
      }
      else if ((temp_v7[1] & 1) != 0) {
        temp_v4 = (temp_v0 - temp_v7[0]) + (int)(5 - temp_v7[1]) / 2;
        temp_v1 = param_1 + temp_v0 * 0x40;
        *(int *)(temp_v1 + 0x488c) = temp_v4 + 0x13b;
        *(int *)(temp_v1 + 0x4890) = temp_v4 + 0x145;
      }
      else {
        temp_v1 = (temp_v0 - temp_v7[0]) + (int)(4 - temp_v7[1]) / 2;
        temp_v4 = param_1 + temp_v0 * 0x40;
        *(int *)(temp_v4 + 0x488c) = temp_v1 + 0x159;
        *(int *)(temp_v4 + 0x4890) = temp_v1 + 0x161;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)*puVar4);
  }
  return;
}
