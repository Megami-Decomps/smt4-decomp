/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100fa6` (_code @ 0x100fa6, 0x14a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int digitValueInBase(int, int);


int FUN_00100fa6(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 3 goto(s) */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v2 = param_4[1];
  temp_v8 = 0;
  temp_v4 = param_4[2];
  temp_v6 = -1;
  do {
    temp_v5 = temp_v6;
    temp_v6 = temp_v5 + 1;
    temp_v7 = (*(romwright_code *)param_4[6])(param_2);
    temp_v0 = (*(romwright_code *)param_4[8])();
  } while (temp_v0 != 0);
  if (temp_v7 == -1) {
    return -1;
  }
  temp_v3 = temp_v2 & 0xfffff9ff;
  temp_v0 = temp_v4;
  temp_v1 = temp_v6;
  temp_v9 = param_3;
  if (0 < temp_v4) {
    if ((int)(temp_v2 << 0x19) < 0) {
      if (temp_v7 != 0x2b) {
        if (temp_v7 != 0x2d) goto LAB_00101008;
        temp_v3 = temp_v3 | 0x400;
      }
      temp_v6 = temp_v5 + 2;
      temp_v7 = (*(romwright_code *)param_4[6])(param_2);
      temp_v4 = temp_v4 - 1;
      temp_v0 = temp_v4;
      temp_v1 = temp_v6;
      if (temp_v4 < 1) goto LAB_0010100e;
    }
LAB_00101008:
    temp_v0 = temp_v4;
    temp_v1 = temp_v6;
    if (temp_v7 == 0x30) {
      temp_v2 = temp_v3 | 0x200;
      temp_v0 = temp_v4 - 1;
      temp_v1 = temp_v6 + 1;
      temp_v7 = (*(romwright_code *)param_4[6])(param_2);
      if ((temp_v0 < 1) || ((temp_v7 != 0x78 && (temp_v7 != 0x58)))) {
        if (param_3 == 0) {
          temp_v9 = 8;
        }
      }
      else if ((param_3 == 0) || (param_3 == 0x10)) {
        temp_v0 = temp_v4 - 2;
        temp_v1 = temp_v6 + 2;
        temp_v7 = (*(romwright_code *)param_4[6])(param_2);
        temp_v9 = 0x10;
        temp_v2 = temp_v3;
      }
      goto LAB_00101082;
    }
  }
LAB_0010100e:
  temp_v2 = temp_v3;
  if (param_3 == 0) {
    temp_v9 = 10;
  }
LAB_00101082:
  while ((0 < temp_v0 && (temp_v6 = digitValueInBase(temp_v7,temp_v9), -1 < temp_v6))) {
    temp_v0 = temp_v0 - 1;
    temp_v8 = temp_v9 * temp_v8 + temp_v6;
    temp_v1 = temp_v1 + 1;
    temp_v7 = (*(romwright_code *)param_4[6])(param_2);
    temp_v2 = temp_v2 | 0x200;
  }
  (*(romwright_code *)param_4[7])(param_2);
  if ((int)(temp_v2 << 0x16) >= 0) {
    temp_v1 = -2;
  }
  else if ((temp_v2 & 1) == 0) {
    if ((int)(temp_v2 << 0x19) < 0) {
      if ((int)(temp_v2 << 0x15) < 0) {
        temp_v8 = -temp_v8;
      }
      puVar3 = (unsigned int *)*param_4;
      *param_4 = (unsigned int)(puVar3 + 1);
      piVar4 = (int *)*puVar3;
      if ((int)(temp_v2 << 0x14) < 0) {
        *(char *)piVar4 = (char)temp_v8;
      }
      else if ((int)(temp_v2 << 0x1c) < 0) {
        *(short *)piVar4 = (short)temp_v8;
      }
      else {
        *piVar4 = temp_v8;
      }
    }
    else {
      puVar3 = (unsigned int *)*param_4;
      *param_4 = (unsigned int)(puVar3 + 1);
      piVar4 = (int *)*puVar3;
      if ((int)(temp_v2 << 0x14) < 0) {
        *(char *)piVar4 = (char)temp_v8;
      }
      else if ((int)(temp_v2 << 0x1c) < 0) {
        *(short *)piVar4 = (short)temp_v8;
      }
      else {
        *piVar4 = temp_v8;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
