/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8340` (_code @ 0x4c8340, 0x384 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int dataTable41FindById(void);
int FUN_003e8bb0(unsigned int [9], int, int);
int FUN_003f0e20(...);
int source4CCopyHalves(void);
int kindIdStore(unsigned int, int [2]);

/* stack frame of param_5: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
} param_5_stack;

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: dataTable41FindById. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: source4CCopyHalves. */
/* Supplied declaration required: kindIdStore. */


unsigned int FUN_004c8340(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short temp_v10 [12];
  int temp_v11 [2];
  int temp_v12;
  unsigned int temp_v13 [9];
  int temp_v14;
  
  temp_v6 = 0;
  temp_v1 = btlGetMainState();
  switch(param_4) {
  case 3:
  case 7:
  case 8:
  case 9:
    return 100;
  case 4:
    if (param_5 < 0) {
      return 100;
    }
  }
  temp_v9 = 0;
  temp_v12 = temp_v1;
  if (-1 < param_1) {
    FUN_003f0e20(temp_v1,param_1);
    temp_v9 = temp_v1;
  }
  temp_v1 = temp_v12;
  FUN_003f0e20(temp_v12,param_2);
  if (param_3 == 6 || param_3 == 7) {
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_2);
    temp_v3 = 0;
    if (temp_v2 != 0) {
      temp_v3 = *(int *)(temp_v2 + 0xcc);
    }
    if ((temp_v2 != 0 && temp_v3 != 0) && -1 < temp_v3) {
      temp_v6 = 0x10000;
    }
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_2);
    temp_v3 = 0;
    if (temp_v2 != 0) {
      temp_v3 = *(int *)(temp_v2 + 200);
    }
    if ((temp_v2 != 0 && temp_v3 != 0) && -1 < temp_v3) {
      temp_v6 = temp_v6 | 0x20000;
    }
  }
  if (param_3 != 0x14) {
    if (param_4 != 0) {
      if ((param_4 == 1) && ((-1 >= param_5 || (param_5 != 0x14)))) {
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,param_2);
        temp_v3 = 0;
        if (temp_v2 != 0) {
          temp_v3 = *(int *)(temp_v2 + 200);
        }
        if (!((temp_v2 == 0 || temp_v3 == 0) || temp_v3 < 0)) {
          temp_v6 = temp_v6 | 0x20000;
        }
      }
    }
    else {
      temp_v3 = btlGetMainState();
      FUN_003f0e20(temp_v3,param_2);
      if ((temp_v3 != 0) && (*(int *)(temp_v3 + 0xc4) >= 1)) {
        temp_v6 = temp_v6 | 0x20000;
      }
    }
  }
  temp_v11[0] = 0;
  kindIdStore(param_3,temp_v11);
  temp_v3 = temp_v1 + temp_v11[0] * 2;
  temp_v0 = *(unsigned short *)(temp_v3 + 0x2b6);
  temp_v7 = temp_v0 & 0xffff03ff;
  if (temp_v0 >> 10 == 1) {
    temp_v6 = temp_v6 | 0x10000;
  }
  if (temp_v0 >> 10 == 4) {
    temp_v6 = temp_v6 | 0x40000;
  }
  if (temp_v0 >> 10 == 3) {
    temp_v6 = temp_v6 | 0x20000;
  }
  if (temp_v0 >> 10 == 2) {
    temp_v6 = temp_v6 | 0x800000;
  }
  if (temp_v0 >> 10 == 5) {
    temp_v6 = temp_v6 | 0x80000;
  }
  if ((temp_v0 >> 10 != 2) || (temp_v0 >> 10 == *(unsigned short *)(temp_v3 + 0x28c) >> 10)) {
    temp_v8 = 0;
    temp_v13[0] = param_3;
    temp_v4 = btlGetMainState();
    FUN_003f0e20(temp_v4,param_2);
    temp_v10[0] = 0;
    temp_v10[1] = 0;
    temp_v10[2] = 0;
    temp_v10[3] = 0;
    temp_v10[4] = 0;
    temp_v10[5] = 0;
    temp_v10[6] = 0;
    temp_v10[7] = 0;
    temp_v10[8] = 0;
    temp_v10[9] = 0;
    source4CCopyHalves();
    temp_v3 = 0;
    do {
      temp_v5 = (unsigned int)temp_v10[temp_v3];
      if (((temp_v5 != 0) && (dataTable41FindById(), temp_v5 != 0)) &&
         (temp_v13[0] == (*(unsigned int *)(temp_v5 + 0x44) & 0xffff) >> 0xb)) {
        temp_v5 = (*(unsigned int *)(temp_v5 + 0x44) & 0xfffff) >> 0x10;
        if (temp_v5 == 1) {
          temp_v8 = temp_v8 | 0x80000;
        }
        else if (temp_v5 == 2) {
          temp_v8 = temp_v8 | 0x10000;
        }
        else if (temp_v5 == 3) {
          temp_v8 = temp_v8 | 0x20000;
        }
        else if (temp_v5 == 4) {
          temp_v8 = temp_v8 | 0x40000;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 9);
    temp_v6 = temp_v6 | temp_v8;
  }
  if ((temp_v6 & 0x800000) != 0) {
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_2);
    temp_v3 = 0;
    if (temp_v2 != 0) {
      temp_v3 = *(int *)(temp_v2 + 0x118);
    }
    if ((temp_v2 != 0 && temp_v3 != 0) && -1 < temp_v3) {
      temp_v6 = (temp_v6 & 0xff7fffff) | 0x1040000;
    }
  }
  if ((temp_v9 != 0) && (*(char *)(temp_v11[0] + temp_v9 + 0x2f5) != '\0')) {
    temp_v6 = temp_v6 & 0xfef8ffff;
  }
  if ((0 < *(int *)(temp_v1 + 0x154)) && (temp_v11[0] != 0x14)) {
    if (*(int *)(temp_v1 + 0x154) - 1 == temp_v11[0]) {
      temp_v6 = temp_v6 | 0x400000;
    }
    else {
      temp_v6 = temp_v6 | 0x220000;
    }
  }
  if (((temp_v1 != 0) && (*(char *)(temp_v1 + 0x239) != '\0')) &&
     (FUN_003e8bb0(temp_v13,temp_v12,temp_v9), temp_v14 != 0)) {
    temp_v6 = (temp_v6 & 0xfef0ffff) | 0x800000;
  }
  if ((temp_v6 & 0x80000) != 0) {
    temp_v7 = (temp_v7 * 0x32) / 100;
  }
  return temp_v6 | temp_v7;
}

} /* extern "C" */
