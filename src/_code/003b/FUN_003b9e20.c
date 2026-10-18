/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9e20` (_code @ 0x3b9e20, 0x3d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned char DAT_00404eb0; /* 0x404eb0 */
extern int DAT_0044cfb8; /* 0x44cfb8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022b158. */
extern int FUN_0022b3cc(int, int);
/* Supplied declaration required: FUN_0022b430. */
/* Supplied declaration required: FUN_0022ba6c. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002bd9ec. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c0ba8. */


void FUN_003b9e20(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [8];
  unsigned char temp_v13 [36];
  
  temp_v0 = 1;
  temp_v1 = *(int *)(param_1 + 0x5c8);
  temp_v7 = 0;
  if (temp_v7 < temp_v1) {
    do {
      temp_v2 = FUN_0022b3cc(param_1 + 0x9c,temp_v7);
      if (*(short *)(temp_v2 + 0x54) == 3) {
        if (*(char *)(temp_v2 + 0x2c) != '0') {
          temp_v3 = *(unsigned int *)(param_1 + 0xd90);
          temp_v4 = *(unsigned int *)(param_1 + 0xd88);
          DAT_0044cfb8 = 0;
          FUN_002be7fc(temp_v13,&DAT_00404eb0,temp_v2 + 0x2c);
          temp_v4 = FUN_00291018(temp_v4,temp_v13);
          FUN_002971e4(temp_v3,temp_v4);
          do {
            temp_v5 = FUN_0019dfbc(temp_v3);
          } while (temp_v5 != 2);
          if (((DAT_0044cfb8 != 0) ||
              ((*(short *)(temp_v2 + 0x3c) != 0 && (temp_v5 = FUN_002c0ba8(), temp_v5 == 0)))) ||
             ((*(short *)(temp_v2 + 0x3e) != 0 && (temp_v5 = FUN_002c0ba8(), temp_v5 != 0))))
          goto LAB_003b9f10;
          break;
        }
      }
      else {
LAB_003b9f10:
        if ((*(short *)(temp_v2 + 0x54) == 4) && (*(char *)(temp_v2 + 0x2c) != '0')) {
          temp_v3 = *(unsigned int *)(param_1 + 0xd90);
          temp_v11 = *(unsigned int *)(param_1 + 0xd88);
          DAT_0044cfb8 = 0;
          FUN_002be7fc(temp_v12,&DAT_00404eb0,temp_v2 + 0x2c);
          temp_v4 = FUN_00291018(temp_v11,temp_v12);
          FUN_002971e4(temp_v3,temp_v4);
          do {
            temp_v5 = FUN_0019dfbc(temp_v3);
          } while (temp_v5 != 2);
          if (((DAT_0044cfb8 == 0) &&
              ((*(short *)(temp_v2 + 0x3c) == 0 || (temp_v5 = FUN_002c0ba8(), temp_v5 != 0)))) &&
             ((*(short *)(temp_v2 + 0x3e) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
            temp_v0 = 0;
            break;
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v1);
  }
  temp_v7 = 0;
  if (temp_v7 < temp_v1) {
    do {
      temp_v2 = FUN_0022b3cc(param_1 + 0x9c,temp_v7);
      if ((*(short *)(temp_v2 + 0x54) == 2) && (*(char *)(temp_v2 + 0x2c) != '0')) {
        temp_v3 = *(unsigned int *)(param_1 + 0xd90);
        temp_v11 = *(unsigned int *)(param_1 + 0xd88);
        DAT_0044cfb8 = 0;
        FUN_002be7fc(temp_v12,&DAT_00404eb0,temp_v2 + 0x2c);
        temp_v4 = FUN_00291018(temp_v11,temp_v12);
        FUN_002971e4(temp_v3,temp_v4);
        do {
          temp_v5 = FUN_0019dfbc(temp_v3);
        } while (temp_v5 != 2);
        if (((DAT_0044cfb8 == 0) &&
            ((*(short *)(temp_v2 + 0x3c) == 0 || (temp_v5 = FUN_002c0ba8(), temp_v5 != 0)))) &&
           ((*(short *)(temp_v2 + 0x3e) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) break;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v1);
  }
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  switch(*(unsigned int *)(param_1 + 0xd64)) {
  case 0:
    if ((temp_v0) && (temp_v1 = FUN_002c0ba8(0x15), temp_v1 != 0)) {
      temp_v8 = 4;
      FUN_0022ba6c(param_1 + 0x9c,0xff);
      FUN_002bd9ec(param_1 + 0x42,&temp_v8);
      temp_v6 = *(unsigned int *)(param_1 + 0x20);
      *(unsigned int *)(param_1 + 0x20) = temp_v6 | 0x10;
      if ((temp_v6 & 0x40) != 0) {
        *(unsigned int *)(param_1 + 0x20) = (temp_v6 & 0xffffffbf) | 0x10;
        FUN_00297128();
        return;
      }
    }
    break;
  case 5:
    if (!temp_v0) {
      return;
    }
  case 1:
  case 2:
    FUN_0022ba6c(param_1 + 0x9c,0xff);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x40000000;
    *(unsigned char *)(param_1 + 0x6ce) = 1;
    break;
  case 6:
  case 7:
    if ((*(unsigned int *)(param_1 + 0x20) & 0x10000000) != 0) {
      FUN_0022b430(param_1,(int)*(short *)(param_1 + 0x3c),4);
    }
    else {
      FUN_0022b430(param_1,(int)*(short *)(param_1 + 0x3c),3);
    }
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x28) = 4;
    FUN_0022b158(*(unsigned int *)(param_1 + 0xe5c),0,0xffffffff);
    return;
  }
  return;
}
