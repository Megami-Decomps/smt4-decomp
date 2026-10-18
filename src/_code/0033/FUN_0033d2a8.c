/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033d2a8` (_code @ 0x33d2a8, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


void FUN_0033d2a8(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  *(unsigned int *)(param_1 + 0x2f4) = param_3;
  if (param_3 >= 10) {
    param_3 = 9;
    *(unsigned int *)(param_1 + 0x2f4) = 9;
  }
  temp_v1 = 0;
  if (0 < (int)param_3) {
    do {
      puVar5 = (unsigned int *)(param_2 + temp_v1 * 0x18);
      temp_v4 = puVar5[1];
      temp_v5 = puVar5[2];
      temp_v6 = puVar5[3];
      temp_v7 = puVar5[4];
      temp_v8 = puVar5[5];
      temp_v3 = param_1 + temp_v1 * 0x54;
      temp_v1 = temp_v1 + 1;
      *(unsigned int *)(temp_v3 + 0x3c) = *puVar5;
      *(unsigned int *)(temp_v3 + 0x40) = temp_v4;
      *(unsigned int *)(temp_v3 + 0x44) = temp_v5;
      *(unsigned int *)(temp_v3 + 0x48) = temp_v6;
      *(unsigned int *)(temp_v3 + 0x4c) = temp_v7;
      *(unsigned int *)(temp_v3 + 0x50) = temp_v8;
    } while (temp_v1 < *(int *)(param_1 + 0x2f4));
  }
  *(unsigned int *)(param_1 + 0x2f8) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x2fc) = 0xffffffff;
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 0x2f4)) {
    do {
      temp_v2 = 0;
      temp_v3 = param_1 + temp_v1 * 0x54;
      *(unsigned int *)(temp_v3 + 0x34) = 0;
      *(unsigned char *)(temp_v3 + 0x38) = 1;
      *(unsigned int *)(temp_v3 + 0x2c) = 0;
      *(unsigned int *)(temp_v3 + 0x30) = 0;
      do {
        if (((unsigned int)*(unsigned short *)(temp_v3 + 0x4c) & (1 << (temp_v2 & 0xff))) != 0) {
          *(unsigned int *)(temp_v3 + *(int *)(temp_v3 + 0x2c) * 4) = temp_v2;
          *(int *)(temp_v3 + 0x2c) = *(int *)(temp_v3 + 0x2c) + 1;
        }
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < 0xb);
      if (*(char *)(temp_v3 + 0x40) != '\0') {
        if (*(int *)(temp_v3 + 0x44) != 1) {
          temp_v0 = *(int *)(param_1 + 0x2fc);
          if (*(int *)(param_1 + 0x2fc) <= *(int *)(temp_v3 + 0x48)) {
            temp_v0 = *(int *)(temp_v3 + 0x48);
          }
          *(int *)(param_1 + 0x2fc) = temp_v0;
        }
        else {
          temp_v0 = *(int *)(temp_v3 + 0x48);
          if (*(int *)(temp_v3 + 0x48) < *(int *)(param_1 + 0x2f8)) {
            temp_v0 = *(int *)(param_1 + 0x2f8);
          }
          *(int *)(param_1 + 0x2f8) = temp_v0;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x2f4));
  }
  *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
  *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
  return;
}
