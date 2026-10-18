/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d1bc` (_code @ 0x37d1bc, 0x444 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

extern int *DAT_00473544; /* 0x473544 */

extern int FUN_002c6a20(int, unsigned int);


unsigned int FUN_0037d1bc(int param_1,int param_2,unsigned int *param_3,unsigned int param_4,int param_5)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [11];
  int iStack_34;
  int iStack_30;
  unsigned int *puStack_2c;
  unsigned int temp_v9;
  
  temp_v6 = 0;
  temp_v4 = 0;
  temp_v5 = *(int *)(*(int *)(param_1 + 0x18) + 0x14);
  iStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  temp_v9 = param_4;
  if (param_5 != 0) {
    if (*(unsigned int *)(param_1 + 0x5c) <= (unsigned int)(*(int *)(param_1 + 0x54) + param_5)) {
      do {
        param_5 = param_5 - (*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54));
        if (*(char *)(*(int *)(param_1 + 0x18) + 8) != '\0') {
          *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc);
          *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
          *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x58);
        }
        else {
          if (*(romwright_code **)(param_1 + 0xc24) == (romwright_code *)0x0) {
            *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x5c);
            *(unsigned char *)(param_1 + 0x4d) = 1;
            *(unsigned int *)(param_2 + 0x20) = 0;
            return 1;
          }
          temp_v8[0] = *(unsigned int *)(param_1 + 0x50);
          temp_v6 = (**(romwright_code **)(param_1 + 0xc24))(temp_v8,*(unsigned int *)(param_1 + 0xc28));
          if (temp_v6 == 0) {
            *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x5c);
            *(unsigned char *)(param_1 + 0x4d) = 1;
            *(unsigned int *)(param_2 + 0x20) = 0;
            return 1;
          }
          *(unsigned int *)(param_1 + 0x50) = temp_v8[0];
          *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
          *(unsigned int *)(param_1 + 0x58) = 0;
          *(unsigned int *)(param_1 + 0x54) = 0;
        }
        temp_v4 = temp_v4 + 1;
      } while (*(unsigned int *)(param_1 + 0x5c) <= (unsigned int)(*(int *)(param_1 + 0x54) + param_5));
    }
    temp_v6 = *(int *)(param_1 + 0x54) + param_5;
    *(int *)(param_1 + 0x54) = temp_v6;
    temp_v7 = *(int *)(param_1 + 0x18);
    temp_v6 = FUN_002c6a20(temp_v6,*(unsigned int *)(temp_v7 + 0x14));
    *(int *)(param_1 + 0x34) = temp_v6;
    temp_v6 = param_5 - temp_v6 * *(int *)(temp_v7 + 0x14);
    (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),0);
    temp_v3 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x3c) - 1U == temp_v3)) {
          temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x54))();
          *(unsigned int *)(param_1 + 0x44) = temp_v0;
        }
        (**(romwright_code **)(*DAT_00473544 + 0xc))(DAT_00473544,*(unsigned int *)(param_1 + 0x14));
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(unsigned int *)(param_1 + 0x34));
    }
  }
  else if (*(char *)(param_1 + 0x4c) != '\0') {
    temp_v6 = *(int *)(param_1 + 0x48);
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x3c) - 1))
  {
    temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x54))();
    *(unsigned int *)(param_1 + 0x44) = temp_v0;
  }
  temp_v0 = *(unsigned int *)(param_1 + 0x54);
  temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x54))();
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x3c))();
  if (temp_v3 >= temp_v1) {
    temp_v5 = 0;
  }
  else if (temp_v5 != 0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x20);
    if (temp_v3 != 0) {
      temp_v1 = temp_v3 & 1;
      if (temp_v1 == 1) {
        temp_v8[0] = *param_3;
      }
      temp_v2 = (unsigned int)(temp_v1 == 1);
      if (temp_v1 < temp_v3) {
        do {
          temp_v1 = temp_v1 + 2;
          temp_v8[temp_v2] = param_3[temp_v2];
          temp_v8[temp_v2 + 1] = param_3[temp_v2 + 1];
          temp_v2 = temp_v2 + 2;
        } while (temp_v1 < *(unsigned int *)(param_1 + 0x20));
      }
    }
    temp_v7 = (**(romwright_code **)(*DAT_00473544 + 0x10))
                      (DAT_00473544,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x20),
                       temp_v8);
    if (temp_v7 == 0) {
      return 0;
    }
    temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x54))();
    temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x3c))();
    if (temp_v1 <= temp_v3) {
      *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0x34);
    }
  }
  *(unsigned char *)(param_1 + 0x4c) = 0;
  temp_v3 = *(int *)(param_1 + 0x34) + 1;
  *(unsigned int *)(param_1 + 0x34) = temp_v3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + temp_v5;
  if (*(unsigned int *)(param_1 + 0x38) < temp_v3) {
    if (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\0') {
      *(unsigned char *)(param_1 + 0x4d) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x3c);
      (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))
                (*(int **)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x44),0);
      if (*(int *)(param_1 + 0x3c) != 0) {
        temp_v3 = *(unsigned int *)(param_1 + 0x20);
        if (temp_v3 != 0) {
          temp_v1 = temp_v3 & 1;
          if (temp_v1 == 1) {
            temp_v8[0] = *param_3;
          }
          temp_v2 = (unsigned int)(temp_v1 == 1);
          if (temp_v1 < temp_v3) {
            do {
              temp_v1 = temp_v1 + 2;
              temp_v8[temp_v2] = param_3[temp_v2];
              temp_v8[temp_v2 + 1] = param_3[temp_v2 + 1];
              temp_v2 = temp_v2 + 2;
            } while (temp_v1 < *(unsigned int *)(param_1 + 0x20));
          }
        }
        temp_v7 = (**(romwright_code **)(*DAT_00473544 + 0x10))
                          (DAT_00473544,*(unsigned int *)(param_1 + 0x14),
                           *(unsigned int *)(param_1 + 0x20),temp_v8);
        if (temp_v7 == 0) {
          return 0;
        }
      }
      *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc);
      *(unsigned char *)(param_1 + 0x4c) = 1;
    }
  }
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x20) & 1;
    if (temp_v3 == 1) {
      *(unsigned int *)(param_2 + 0x24) = 0;
    }
    if (temp_v3 < *(unsigned int *)(param_1 + 0x20)) {
      do {
        temp_v7 = param_2 + temp_v3 * 4;
        temp_v3 = temp_v3 + 2;
        *(unsigned int *)(temp_v7 + 0x24) = 0;
        *(unsigned int *)(temp_v7 + 0x28) = 0;
      } while (temp_v3 < *(unsigned int *)(param_1 + 0x20));
    }
  }
  *(unsigned int *)(param_2 + 0x18) = temp_v9;
  *(int *)(param_2 + 0x20) = temp_v5;
  *(unsigned int *)(param_2 + 0x1c) = temp_v0;
  *(int *)(param_2 + 0x48) = temp_v4;
  *(int *)(param_2 + 0x44) = temp_v6;
  *(unsigned char *)(param_2 + 0x4c) = *(unsigned char *)(param_1 + 0x4d);
  return 1;
}
