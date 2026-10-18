/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001990d4` (_code @ 0x1990d4, 0x348 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001d1d34; /* 0x1d1d34 */

/* Supplied declaration required: FUN_002b7bca. */


void FUN_001990d4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7 [3];
  
  puVar4 = (unsigned int *)(param_1 + 0x5758);
  FUN_002b7bca(param_1 + 0x5760,*puVar4,0x2c,&LAB_001d1d34);
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v3 = *puVar4;
  temp_v0 = 0;
  if (0 < (int)temp_v3) {
    temp_v6 = (temp_v3 & 1) != 0;
    temp_v1 = param_1 + 0x5744;
    temp_v2 = param_1 + 0x5718;
    if (temp_v6) {
      temp_v1 = param_1 + 0x5770;
      temp_v2 = param_1 + 0x5744;
      temp_v7[0] = 1;
    }
    temp_v7[0] = (unsigned int)temp_v6;
    temp_v4 = (unsigned int)temp_v6;
    for (temp_v5 = (int)temp_v3 >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
      if (((0 < (int)temp_v4) && (*(float *)(temp_v2 + 0x2c) < *(float *)(temp_v1 + 0x2c))) && (temp_v0 < 1)
         ) {
        temp_v0 = temp_v0 + 1;
      }
      temp_v7[temp_v0] = temp_v7[temp_v0] + 1;
      if (((0 < (int)(temp_v4 + 1)) && (*(float *)(temp_v2 + 0x58) < *(float *)(temp_v1 + 0x58))) &&
         (temp_v0 < 1)) {
        temp_v0 = temp_v0 + 1;
      }
      temp_v1 = temp_v1 + 0x58;
      temp_v2 = temp_v2 + 0x58;
      temp_v4 = temp_v4 + 2;
      temp_v7[temp_v0] = temp_v7[temp_v0] + 1;
    }
  }
  if (*(char *)(param_1 + 0x575e) == '\0') {
    if ((int)temp_v7[0] < 1) {
      if ((int)temp_v7[1] >= 1) {
        *(unsigned char *)(param_1 + 0x575f) = 1;
        *(unsigned char *)(param_1 + 0x575e) = 1;
      }
    }
    else {
      if ((int)temp_v7[1] >= 1) {
        *(unsigned char *)(param_1 + 0x575f) = 0;
      }
      else {
        *(unsigned char *)(param_1 + 0x575f) = 1;
      }
      *(unsigned char *)(param_1 + 0x575e) = 1;
    }
  }
  temp_v0 = 0;
  if (0 < (int)temp_v3) {
    do {
      if (*(char *)(param_1 + 0x575f) != '\0') {
        temp_v3 = temp_v7[0];
        if ((int)temp_v7[0] <= temp_v0) {
          temp_v3 = temp_v7[1];
        }
        if ((temp_v3 & 1) != 0) {
          temp_v1 = temp_v0 + (int)(5 - temp_v3) / 2;
          temp_v2 = param_1 + temp_v0 * 0x2c;
          *(int *)(temp_v2 + 0x5780) = temp_v1 + 0x1a1;
          *(int *)(temp_v2 + 0x5784) = temp_v1 + 0x1aa;
        }
        else {
          temp_v1 = temp_v0 + (int)(4 - temp_v3) / 2;
          temp_v2 = param_1 + temp_v0 * 0x2c;
          *(int *)(temp_v2 + 0x5780) = temp_v1 + 0x1a6;
          *(int *)(temp_v2 + 0x5784) = temp_v1 + 0x1af;
        }
      }
      else if (temp_v0 < (int)temp_v7[0]) {
        if ((temp_v7[0] & 1) != 0) {
          temp_v1 = temp_v0 + (int)(5 - temp_v7[0]) / 2;
          temp_v2 = param_1 + temp_v0 * 0x2c;
          *(int *)(temp_v2 + 0x5780) = temp_v1 + 0x14a;
          *(int *)(temp_v2 + 0x5784) = temp_v1 + 0x154;
        }
        else {
          temp_v1 = temp_v0 + (int)(4 - temp_v7[0]) / 2;
          temp_v2 = param_1 + temp_v0 * 0x2c;
          *(int *)(temp_v2 + 0x5780) = temp_v1 + 0x165;
          *(int *)(temp_v2 + 0x5784) = temp_v1 + 0x16d;
        }
      }
      else if ((temp_v7[1] & 1) != 0) {
        temp_v1 = (temp_v0 - temp_v7[0]) + (int)(5 - temp_v7[1]) / 2;
        temp_v2 = param_1 + temp_v0 * 0x2c;
        *(int *)(temp_v2 + 0x5780) = temp_v1 + 0x13b;
        *(int *)(temp_v2 + 0x5784) = temp_v1 + 0x145;
      }
      else {
        temp_v1 = (temp_v0 - temp_v7[0]) + (int)(4 - temp_v7[1]) / 2;
        temp_v2 = param_1 + temp_v0 * 0x2c;
        *(int *)(temp_v2 + 0x5780) = temp_v1 + 0x159;
        *(int *)(temp_v2 + 0x5784) = temp_v1 + 0x161;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)*puVar4);
  }
  return;
}
