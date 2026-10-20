/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126950` (_code @ 0x126950, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;


void FUN_00126950(int param_1,int *param_2)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  
  temp_v13 = 0;
  temp_v6 = 0;
  piVar8 = (int *)param_2[2];
  temp_v5 = *param_2;
  temp_v1 = param_2[1];
  temp_v2 = piVar8[1];
  temp_v3 = piVar8[2];
  temp_v4 = piVar8[4];
  temp_v7 = *piVar8;
  do {
    temp_v10 = temp_v6 * 2;
    temp_v6 = temp_v6 + 1;
    *(unsigned short *)(temp_v10 + param_1 + 0xb3c) = 0;
  } while (temp_v6 < 0x10);
  *(unsigned short *)(*(int *)(*(int *)(param_1 + 0x1454) * 4 + param_1 + 0xb5c) * 4 + temp_v5 + 2) = 0;
  temp_v6 = *(int *)(param_1 + 0x1454);
  while (temp_v6 = temp_v6 + 1, temp_v6 < 0x23d) {
    temp_v10 = *(int *)(temp_v6 * 4 + param_1 + 0xb5c);
    temp_v8 = temp_v10 * 4;
    temp_v9 = *(unsigned short *)((unsigned int)*(unsigned short *)(temp_v8 + temp_v5 + 2) * 4 + temp_v5 + 2) + 1;
    if ((int)temp_v4 < (int)temp_v9) {
      temp_v13 = temp_v13 + 1;
      temp_v9 = temp_v4;
    }
    *(short *)(temp_v8 + temp_v5 + 2) = (short)temp_v9;
    if (temp_v10 <= temp_v1) {
      temp_v11 = temp_v9 * 2 + param_1;
      temp_v14 = 0;
      *(short *)(temp_v11 + 0xb3c) = *(short *)(temp_v11 + 0xb3c) + 1;
      if (temp_v3 <= temp_v10) {
        temp_v14 = *(int *)(temp_v2 + (temp_v10 - temp_v3) * 4);
      }
      temp_v0 = *(unsigned short *)(temp_v5 + temp_v8);
      *(unsigned int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + (unsigned int)temp_v0 * (temp_v9 + temp_v14);
      if (temp_v7 != 0) {
        *(unsigned int *)(param_1 + 0x16ac) =
             *(int *)(param_1 + 0x16ac) +
             (unsigned int)temp_v0 * ((unsigned int)*(unsigned short *)(temp_v8 + temp_v7 + 2) + temp_v14);
      }
    }
  }
  temp_v9 = temp_v4;
  if (temp_v13 != 0) {
    do {
      do {
        temp_v9 = temp_v9 - 1;
      } while (*(short *)(temp_v9 * 2 + param_1 + 0xb3c) == 0);
      temp_v2 = temp_v9 * 2 + param_1;
      temp_v3 = temp_v4 * 2 + param_1;
      *(short *)(temp_v2 + 0xb3c) = *(short *)(temp_v2 + 0xb3c) - 1;
      *(short *)(temp_v2 + 0xb3e) = *(short *)(temp_v2 + 0xb3e) + 2;
      temp_v13 = temp_v13 - 2;
      *(short *)(temp_v3 + 0xb3c) = *(short *)(temp_v3 + 0xb3c) - 1;
      temp_v9 = temp_v4;
    } while (0 < temp_v13);
    for (; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
      temp_v9 = (unsigned int)*(unsigned short *)(temp_v4 * 2 + param_1 + 0xb3c);
      while (temp_v9 != 0) {
        temp_v2 = *(int *)(temp_v6 * 4 + param_1 + 0xb58);
        temp_v6 = temp_v6 - 1;
        if (temp_v2 <= temp_v1) {
          temp_v2 = temp_v2 * 4;
          temp_v3 = temp_v2 + temp_v5;
          temp_v12 = (unsigned int)*(unsigned short *)(temp_v3 + 2);
          if (temp_v12 != temp_v4) {
            *(unsigned int *)(param_1 + 0x16a8) =
                 (unsigned int)*(unsigned short *)(temp_v5 + temp_v2) * (temp_v4 - temp_v12) + *(int *)(param_1 + 0x16a8);
            *(short *)(temp_v3 + 2) = (short)temp_v4;
          }
          temp_v9 = temp_v9 - 1;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
