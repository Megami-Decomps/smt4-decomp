/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378fb0` (_code @ 0x378fb0, 0x270 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;


void FUN_00378fb0(int param_1,unsigned int param_2,int *param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  int temp_v16 [6];
  int temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int iStack_34;
  unsigned int uStack_30;
  int *piStack_2c;
  int temp_v22;
  
  temp_v22 = param_4;
  piStack_2c = param_3;
  uStack_30 = param_2;
  iStack_34 = param_1;
  if (*(char *)(param_1 + 0x10e) != '\0') {
    temp_v13 = 0;
    temp_v4 = 0;
    temp_v16[0] = *param_3;
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v16[1] = param_3[1];
    temp_v7 = 0;
    temp_v16[2] = param_3[2];
    temp_v16[3] = param_3[3];
    temp_v20 = 0;
    if (*(char *)(param_1 + 0x10d) != '\0') {
      do {
        temp_v18 = param_1 + temp_v20 * 4;
        temp_v17 = *(int *)(temp_v18 + 0x44);
        temp_v8 = 0;
        temp_v12 = *(int *)(temp_v18 + 0x54);
        temp_v5 = *(unsigned int *)(param_1 + 0xbc);
        temp_v6 = *(unsigned int *)(param_1 + 0xc0);
        temp_v4 = *(unsigned int *)(param_1 + 0xb0);
        temp_v7 = *(unsigned int *)(param_1 + 0xd0);
        temp_v13 = *(unsigned int *)(param_1 + 0xa8);
        temp_v2 = *(int *)(temp_v18 + 0xd8);
        if (0 < param_4) {
          temp_v21 = param_1 + temp_v20 * 8;
          temp_v0 = temp_v16[temp_v20];
          do {
            temp_v11 = *(unsigned int *)(temp_v0 + temp_v8 * 4);
            temp_v3 = *(int *)(param_1 + 0xe8);
            temp_v19 = *(int *)(temp_v17 + temp_v13 * 4);
            *(unsigned int *)(temp_v17 + temp_v13 * 4) = temp_v11;
            temp_v9 = *(int *)(temp_v12 + temp_v4 * 4);
            *(unsigned int *)(temp_v12 + temp_v4 * 4) = temp_v11;
            temp_v19 = temp_v19 * temp_v3;
            temp_v1 = *(int *)(*(int *)(temp_v21 + 100) + temp_v5 * 4);
            temp_v3 = temp_v1;
            if (temp_v1 < 0) {
              temp_v3 = -temp_v1;
            }
            temp_v3 = *(int *)(param_1 + 0xc4) * temp_v3 >> 7;
            if (temp_v1 < 0) {
              temp_v3 = -temp_v3;
            }
            *(int *)(*(int *)(temp_v21 + 100) + temp_v5 * 4) = temp_v3 + temp_v9;
            temp_v3 = *(int *)(*(int *)(temp_v21 + 0x68) + temp_v6 * 4);
            if (temp_v3 >= 0) {
              temp_v10 = *(int *)(param_1 + 200) * temp_v3 >> 7;
            }
            else {
              temp_v10 = -(*(int *)(param_1 + 200) * -temp_v3 >> 7);
            }
            *(int *)(*(int *)(temp_v21 + 0x68) + temp_v6 * 4) = temp_v9 + temp_v10;
            temp_v14 = *(int *)(param_1 + 0xd4);
            temp_v13 = temp_v13 + 1;
            temp_v4 = temp_v4 + 1;
            temp_v5 = temp_v5 + 1;
            temp_v6 = temp_v6 + 1;
            temp_v10 = *(int *)(*(int *)(temp_v18 + 0x84) + temp_v7 * 4);
            temp_v9 = temp_v10;
            if (temp_v10 < 0) {
              temp_v9 = -temp_v10;
            }
            temp_v9 = temp_v9 * temp_v14 >> 7;
            if (temp_v10 < 0) {
              temp_v9 = -temp_v9;
            }
            temp_v9 = temp_v9 + (temp_v1 - temp_v3);
            temp_v15 = temp_v9 < 0;
            *(int *)(*(int *)(temp_v18 + 0x84) + temp_v7 * 4) = temp_v9;
            if (temp_v15) {
              temp_v9 = -temp_v9;
            }
            temp_v7 = temp_v7 + 1;
            temp_v3 = temp_v9 * temp_v14 >> 7;
            if (temp_v15) {
              temp_v3 = -temp_v3;
            }
            temp_v2 = (temp_v2 * *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) * (temp_v10 - temp_v3))
                    >> 7;
            *(int *)(temp_v0 + temp_v8 * 4) = (*(int *)(param_1 + 0xec) * temp_v2 + temp_v19) >> 7;
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < param_4);
        }
        *(int *)(temp_v18 + 0xd8) = temp_v2;
        temp_v20 = temp_v20 + 1;
      } while (temp_v20 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x10d));
    }
    if (temp_v13 >= *(unsigned int *)(param_1 + 0xa4)) {
      *(unsigned int *)(param_1 + 0xa8) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0xa8) = temp_v13;
    }
    if (temp_v4 >= *(unsigned int *)(param_1 + 0xac)) {
      *(unsigned int *)(param_1 + 0xb0) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0xb0) = temp_v4;
    }
    if (temp_v5 >= *(unsigned int *)(param_1 + 0xb4)) {
      *(unsigned int *)(param_1 + 0xbc) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0xbc) = temp_v5;
    }
    if (temp_v6 >= *(unsigned int *)(param_1 + 0xb8)) {
      *(unsigned int *)(param_1 + 0xc0) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0xc0) = temp_v6;
    }
    if (temp_v7 >= *(unsigned int *)(param_1 + 0xcc)) {
      *(unsigned int *)(param_1 + 0xd0) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0xd0) = temp_v7;
    }
  }
  return;
}
