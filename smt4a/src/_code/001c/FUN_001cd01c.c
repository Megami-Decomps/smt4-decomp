/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd01c` (_code @ 0x1cd01c, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


int FUN_001cd01c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_r12 */
  unsigned char temp_v0;
  short temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int in_r12;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  
  temp_v4 = *(unsigned int *)(param_2 + 4) & 0xff;
  temp_v10 = temp_v4 != 0;
  if (temp_v10) {
    in_r12 = 0;
  }
  *(char *)(param_1 + 0xc) = (char)*(unsigned int *)(param_2 + 4);
  piVar3 = (int *)(param_2 + 8);
  while (temp_v10) {
    temp_v3 = in_r12 * 4;
    temp_v4 = temp_v4 - 1;
    temp_v10 = temp_v4 != 0;
    in_r12 = in_r12 + 1;
    *(int *)(param_1 + temp_v3 + 0x10) = *piVar3 + param_2;
    piVar3 = piVar3 + 1;
  }
  *(int *)(param_1 + 0x9c) = piVar3[5];
  temp_v3 = 0;
  temp_v0 = *(unsigned char *)(param_1 + 0xc);
  temp_v4 = (unsigned int)temp_v0;
  temp_v8 = 0;
  if (temp_v8 < temp_v4) {
    do {
      temp_v5 = *(int *)(param_1 + temp_v8 * 4 + 0x10);
      temp_v6 = 0;
      if (temp_v6 < *(unsigned int *)(temp_v5 + 0x1c)) {
        do {
          temp_v1 = *(short *)(*(int *)(temp_v5 + 0x18) + temp_v5 + temp_v6 * 0x14);
          if (temp_v1 != 0) {
            if (temp_v1 == 1) {
              temp_v3 = temp_v3 + 2;
            }
            else if (temp_v1 == 2) {
              temp_v3 = temp_v3 + 6;
            }
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(unsigned int *)(temp_v5 + 0x1c));
      }
      temp_v8 = (temp_v8 + 1) & 0xff;
    } while (temp_v8 < temp_v4);
  }
  temp_v8 = 0;
  if (temp_v4 != 0) {
    temp_v10 = (temp_v0 & 1) != 0;
    if (temp_v10) {
      temp_v8 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x10) + 6);
    }
    temp_v2 = (unsigned int)temp_v10;
    temp_v5 = 0;
    for (temp_v6 = (unsigned int)(temp_v0 >> 1); temp_v6 != 0; temp_v6 = temp_v6 - 1) {
      temp_v7 = param_1 + temp_v2 * 4;
      temp_v2 = temp_v2 + 2;
      temp_v8 = temp_v8 + *(unsigned char *)(*(int *)(temp_v7 + 0x10) + 6);
      temp_v5 = temp_v5 + (unsigned int)*(unsigned char *)(*(int *)(temp_v7 + 0x14) + 6);
    }
    temp_v8 = temp_v8 + temp_v5;
  }
  temp_v5 = (temp_v4 - temp_v8) * (temp_v8 + 1);
  temp_v8 = 0;
  temp_v3 = *(int *)(param_1 + 0x9c) * 4 + temp_v4 * 4 + temp_v3 * 4 + temp_v5 * 4;
  if (temp_v4 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + temp_v8 * 4 + 0x10) + 6) == '\0') {
        temp_v7 = 0;
        temp_v3 = temp_v3 + 0x98;
        temp_v6 = temp_v4;
        do {
          temp_v9 = *(int *)(param_1 + temp_v7 * 4 + 0x10);
          if (*(char *)(temp_v9 + 6) != '\0') {
            if (*(char *)(temp_v9 + 0x14) == '\x01') {
              temp_v9 = 200;
            }
            else {
              temp_v9 = 0xc0;
            }
            temp_v3 = temp_v3 + temp_v9;
          }
          temp_v6 = temp_v6 - 1;
          temp_v7 = temp_v7 + 1;
        } while (0 < (int)temp_v6);
      }
      temp_v8 = (temp_v8 + 1) & 0xff;
    } while (temp_v8 < temp_v4);
  }
  return temp_v3 + temp_v4 * 8 + 4 + temp_v5 * 4;
}
