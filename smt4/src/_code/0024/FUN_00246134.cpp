/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246134` (_code @ 0x246134, 0x2b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022ab08(unsigned int, int *);
int FUN_0022abe0(void);
int FUN_00282924(...);
int FUN_00283e48(void);
int btlGetMainState(void);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

/* Supplied declaration required: FUN_0022ab08. */
/* Supplied declaration required: FUN_0022abe0. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: btlGetMainState. */


unsigned int FUN_00246134(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short temp_v10 [10];
  
  temp_v6 = 0;
  switch(param_3) {
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
    return 100;
  }
  temp_v2 = btlGetMainState();
  FUN_00282924(temp_v2,param_1);
  if (param_2 == 6 || param_2 == 7) {
    temp_v3 = btlGetMainState();
    FUN_00282924(temp_v3,param_1);
    temp_v1 = 0;
    if (temp_v3 != 0) {
      temp_v1 = *(short *)(temp_v3 + 0x9a);
    }
    if ((temp_v3 != 0 && temp_v1 != 0) && -1 < temp_v1) {
      temp_v6 = 0x10000;
    }
    temp_v3 = btlGetMainState();
    FUN_00282924(temp_v3,param_1);
    temp_v1 = 0;
    if (temp_v3 != 0) {
      temp_v1 = *(short *)(temp_v3 + 0x98);
    }
    if ((temp_v3 != 0 && temp_v1 != 0) && -1 < temp_v1) {
      temp_v6 = temp_v6 | 0x20000;
    }
  }
  if (param_2 != 0x11) {
    if (param_3 != 0) {
      if ((param_3 == 1) && ((-1 >= param_4 || (param_4 != 0x11)))) {
        temp_v3 = btlGetMainState();
        FUN_00282924(temp_v3,param_1);
        temp_v1 = 0;
        if (temp_v3 != 0) {
          temp_v1 = *(short *)(temp_v3 + 0x98);
        }
        if (!((temp_v3 == 0 || temp_v1 == 0) || temp_v1 < 0)) {
          temp_v6 = temp_v6 | 0x20000;
        }
      }
    }
    else {
      temp_v3 = btlGetMainState();
      FUN_00282924(temp_v3,param_1);
      if ((temp_v3 != 0) && (*(short *)(temp_v3 + 0x96) >= 1)) {
        temp_v6 = temp_v6 | 0x20000;
      }
    }
  }
  temp_v9 = 0;
  FUN_0022ab08(param_2,&temp_v9);
  temp_v8 = 0;
  temp_v0 = *(unsigned short *)(temp_v2 + temp_v9 * 2 + 0x1f2);
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
    temp_v6 = temp_v6 | 0x80000000;
  }
  if (temp_v0 >> 10 == 5) {
    temp_v6 = temp_v6 | 0x80000;
  }
  temp_v4 = btlGetMainState();
  FUN_00282924(temp_v4,param_1);
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
  FUN_0022abe0();
  temp_v3 = 0;
  do {
    temp_v5 = (unsigned int)temp_v10[temp_v3];
    if (((temp_v5 != 0) && (FUN_00283e48(), temp_v5 != 0)) &&
       (param_2 == (*(unsigned int *)(temp_v5 + 0x38) & 0xffff) >> 0xb)) {
      temp_v5 = (*(unsigned int *)(temp_v5 + 0x38) & 0xfffff) >> 0x10;
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
  temp_v8 = temp_v8 | temp_v6;
  if ((0 < *(int *)(temp_v2 + 0xc4)) && (temp_v9 != 0x11)) {
    if (*(int *)(temp_v2 + 0xc4) - 1 == temp_v9) {
      temp_v8 = temp_v8 | 0x400000;
    }
    else {
      temp_v8 = temp_v8 | 0x220000;
    }
  }
  if ((temp_v8 & 0x80000) != 0) {
    temp_v7 = (temp_v7 * 0x32) / 100;
  }
  return temp_v8 | temp_v7;
}

} /* extern "C" */
