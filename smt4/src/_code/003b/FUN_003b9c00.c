/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9c00` (_code @ 0x3b9c00, 0x3d0 bytes) from smt4_v1.2.0.cxi.
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

extern unsigned char DAT_00404e04; /* 0x404e04 */
extern int DAT_0044cfb8; /* 0x44cfb8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022afc4. */
extern int FUN_0022b238(int, int);
/* Supplied declaration required: FUN_0022b29c. */
/* Supplied declaration required: FUN_0022b8d8. */
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_002bd808. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c09d0. */


void FUN_003b9c00(int param_1)

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
      temp_v2 = FUN_0022b238(param_1 + 0x9c,temp_v7);
      if (*(short *)(temp_v2 + 0x54) == 3) {
        if (*(char *)(temp_v2 + 0x2c) != '0') {
          temp_v3 = *(unsigned int *)(param_1 + 0xd90);
          temp_v4 = *(unsigned int *)(param_1 + 0xd88);
          DAT_0044cfb8 = 0;
          FUN_002be624(temp_v13,&DAT_00404e04,temp_v2 + 0x2c);
          temp_v4 = FUN_00290d74(temp_v4,temp_v13);
          FUN_00296f4c(temp_v3,temp_v4);
          do {
            temp_v5 = FUN_0019e0c0(temp_v3);
          } while (temp_v5 != 2);
          if (((DAT_0044cfb8 != 0) ||
              ((*(short *)(temp_v2 + 0x3c) != 0 && (temp_v5 = FUN_002c09d0(), temp_v5 == 0)))) ||
             ((*(short *)(temp_v2 + 0x3e) != 0 && (temp_v5 = FUN_002c09d0(), temp_v5 != 0))))
          goto LAB_003b9cf0;
          break;
        }
      }
      else {
LAB_003b9cf0:
        if ((*(short *)(temp_v2 + 0x54) == 4) && (*(char *)(temp_v2 + 0x2c) != '0')) {
          temp_v3 = *(unsigned int *)(param_1 + 0xd90);
          temp_v11 = *(unsigned int *)(param_1 + 0xd88);
          DAT_0044cfb8 = 0;
          FUN_002be624(temp_v12,&DAT_00404e04,temp_v2 + 0x2c);
          temp_v4 = FUN_00290d74(temp_v11,temp_v12);
          FUN_00296f4c(temp_v3,temp_v4);
          do {
            temp_v5 = FUN_0019e0c0(temp_v3);
          } while (temp_v5 != 2);
          if (((DAT_0044cfb8 == 0) &&
              ((*(short *)(temp_v2 + 0x3c) == 0 || (temp_v5 = FUN_002c09d0(), temp_v5 != 0)))) &&
             ((*(short *)(temp_v2 + 0x3e) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))) {
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
      temp_v2 = FUN_0022b238(param_1 + 0x9c,temp_v7);
      if ((*(short *)(temp_v2 + 0x54) == 2) && (*(char *)(temp_v2 + 0x2c) != '0')) {
        temp_v3 = *(unsigned int *)(param_1 + 0xd90);
        temp_v11 = *(unsigned int *)(param_1 + 0xd88);
        DAT_0044cfb8 = 0;
        FUN_002be624(temp_v12,&DAT_00404e04,temp_v2 + 0x2c);
        temp_v4 = FUN_00290d74(temp_v11,temp_v12);
        FUN_00296f4c(temp_v3,temp_v4);
        do {
          temp_v5 = FUN_0019e0c0(temp_v3);
        } while (temp_v5 != 2);
        if (((DAT_0044cfb8 == 0) &&
            ((*(short *)(temp_v2 + 0x3c) == 0 || (temp_v5 = FUN_002c09d0(), temp_v5 != 0)))) &&
           ((*(short *)(temp_v2 + 0x3e) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))) break;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v1);
  }
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  switch(*(unsigned int *)(param_1 + 0xd64)) {
  case 0:
    if ((temp_v0) && (temp_v1 = FUN_002c09d0(0x15), temp_v1 != 0)) {
      temp_v8 = 4;
      FUN_0022b8d8(param_1 + 0x9c,0xff);
      FUN_002bd808(param_1 + 0x42,&temp_v8);
      temp_v6 = *(unsigned int *)(param_1 + 0x20);
      *(unsigned int *)(param_1 + 0x20) = temp_v6 | 0x10;
      if ((temp_v6 & 0x40) != 0) {
        *(unsigned int *)(param_1 + 0x20) = (temp_v6 & 0xffffffbf) | 0x10;
        FUN_00296e90();
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
    FUN_0022b8d8(param_1 + 0x9c,0xff);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x40000000;
    *(unsigned char *)(param_1 + 0x6ce) = 1;
    break;
  case 6:
  case 7:
    if ((*(unsigned int *)(param_1 + 0x20) & 0x10000000) != 0) {
      FUN_0022b29c(param_1,(int)*(short *)(param_1 + 0x3c),4);
    }
    else {
      FUN_0022b29c(param_1,(int)*(short *)(param_1 + 0x3c),3);
    }
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x28) = 4;
    FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),0,0xffffffff);
    return;
  }
  return;
}
