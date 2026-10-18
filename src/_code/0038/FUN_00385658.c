/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385658` (_code @ 0x385658, 0x624 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00385a64; /* 0x385a64 */
extern unsigned char LAB_00385a70; /* 0x385a70 */
extern unsigned char LAB_00385a80; /* 0x385a80 */
extern unsigned char LAB_00385a8c; /* 0x385a8c */
extern unsigned char LAB_00385aa8; /* 0x385aa8 */
extern unsigned char LAB_00385c7c; /* 0x385c7c */
extern unsigned char LAB_00385c90; /* 0x385c90 */
extern unsigned char LAB_00385ca0; /* 0x385ca0 */
extern unsigned char LAB_00385cac; /* 0x385cac */
extern char s_e021_01_0044daf0[8]; /* 0x44daf0 */

extern int FUN_0019dfbc(unsigned int);
extern int FUN_002355ac(unsigned char);
/* Supplied declaration required: FUN_002356ec. */
/* Supplied declaration required: FUN_0026a96c. */
extern int FUN_0026b7cc(void);
extern int FUN_0027f10c(void);
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_0028796c. */
extern unsigned int FUN_0029538c(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00296528. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c0ba8(void);
extern int FUN_00381ad8(unsigned int, unsigned char);
extern int FUN_00381cf0(int);
/* Supplied declaration required: FUN_00382a88. */


void FUN_00385658(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  switch(param_1[2]) {
  case 0:
    temp_v5 = 0;
    do {
      temp_v4 = temp_v5 * 0x1a;
      if (((((unsigned short)(unsigned char)param_1[6] == *(unsigned short *)(temp_v4 + 0x44db06)) &&
           ((*(short *)(temp_v4 + 0x44db08) == -1 ||
            ((int)(char)param_1[4] == (int)*(short *)(temp_v4 + 0x44db08))))) &&
          ((*(short *)(temp_v4 + 0x44db02) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)))) &&
         ((*(short *)(temp_v4 + 0x44db04) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 == 0)))) {
        *param_1 = *param_1 | 0x20000;
        param_1[5] = (unsigned int)(s_e021_01_0044daf0 + temp_v4);
        FUN_0029c660(0,10,0xff);
        FUN_0029c660(1,10,0xff);
        FUN_0026a96c();
        param_1[2] = 6;
        return;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
    FUN_002b8b78(0xa3);
    param_1[0x3ec] = 7;
    temp_v4 = FUN_002355ac((char)param_1[6]);
    if (temp_v4 != 0) {
      FUN_002356ec(param_1,&LAB_00385a64);
    }
    else if ((char)param_1[6] != '\x02') {
      if ((char)param_1[6] != '\x03') {
        FUN_002356ec(param_1,&LAB_00385a70);
      }
      else {
        FUN_002356ec(param_1,&LAB_00385a8c);
      }
    }
    else {
      FUN_002356ec(param_1,&LAB_00385a80);
    }
    temp_v5 = param_1[2] + 1;
    param_1[2] = temp_v5;
    return;
  case 1:
    temp_v4 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v4 != 2) {
      return;
    }
    if (((char)param_1[6] != '\x02') && ((char)param_1[6] != '\x03')) {
      FUN_002b8b78(0xa4);
      param_1[2] = param_1[2] + 1;
      FUN_00382a88(param_1);
      FUN_002bdb2c(param_1 + 0x11,0x31,0xffffffff,param_1 + 9,0xb);
      FUN_002bdb2c(param_1 + 0x34,0x31,0xffffffff,param_1 + 9,0xb);
      FUN_002bdb2c(param_1 + 0x57,0x31,0xffffffff,param_1 + 9,0xb);
      FUN_002bdb2c(param_1 + 0x7a,0x31,0,param_1 + 9,0xb);
      FUN_002af854(param_1 + 0x7a,0);
      param_1[0x356] = 6;
      param_1[0x9d] = 0x43c80000;
      param_1[0x9e] = 0;
      param_1[0x9f] = param_1[0x9d];
      param_1[0xa0] = param_1[0x9e];
      param_1[0xa1] = param_1[0x9d];
      param_1[0xa2] = param_1[0x9e];
      *param_1 = *param_1 | 0x80;
      return;
    }
    temp_v5 = 4;
    param_1[2] = temp_v5;
    return;
  case 2:
    FUN_002bf9f0(param_1 + 0x7a);
    if (*(char *)((int)param_1 + 0x272) != '\0') {
      *param_1 = *param_1 | 0x10;
      temp_v5 = FUN_0029538c(param_1 + 0x11,0);
      temp_v1 = FUN_00296528(param_1 + 0x34,0);
      temp_v2 = FUN_00296528(param_1 + 0x57,0,1);
      if ((temp_v2 & temp_v5 & temp_v1) != 0) {
        temp_v4 = FUN_002355ac((char)param_1[6]);
        if (temp_v4 == 0) {
          temp_v4 = FUN_0028796c((char)param_1[6]);
          temp_v3 = FUN_0028796c((char)param_1[6]);
          temp_v4 = FUN_00381ad8(temp_v3,*(unsigned char *)(temp_v4 + 10));
          if ((temp_v4 == 0) && ((char)param_1[0x355] == '\0')) {
            FUN_002b91c4(0x1000121);
            *(unsigned char *)(param_1 + 0x355) = 1;
          }
        }
        temp_v5 = param_1[0x356] - 1;
        param_1[0x356] = temp_v5;
        if ((int)temp_v5 < 1) {
          temp_v5 = 0;
        }
        param_1[0x356] = temp_v5;
        temp_v4 = FUN_0027f10c();
        if (temp_v4 != 0) {
          FUN_002b8b78(0xa3);
          *(unsigned char *)(param_1 + 0x355) = 0;
          temp_v4 = FUN_002355ac((char)param_1[6]);
          if (temp_v4 != 0) {
            FUN_002356ec(param_1,&LAB_00385aa8);
            param_1[2] = 7;
            return;
          }
          temp_v4 = FUN_0028796c((char)param_1[6]);
          temp_v3 = FUN_0028796c((char)param_1[6]);
          temp_v4 = FUN_00381ad8(temp_v3,*(unsigned char *)(temp_v4 + 10));
          if (temp_v4 == -1) {
            if ((char)param_1[6] != '\0') {
              FUN_002356ec(param_1,&LAB_00385c7c);
            }
            else {
              FUN_002356ec(param_1,&LAB_00385c90);
            }
            param_1[2] = 7;
            return;
          }
          FUN_002af854(param_1 + 0x7a,1,0);
          param_1[2] = param_1[2] + 1;
          param_1[3] = 0;
          return;
        }
      }
    }
    break;
  case 3:
    FUN_002bf9f0(param_1 + 0x7a);
    if (*(char *)((int)param_1 + 0x272) != '\0') {
      *param_1 = *param_1 & 0xffffff6f;
      param_1[2] = param_1[2] + 1;
      return;
    }
    break;
  case 4:
    temp_v4 = FUN_00381cf0((int)(char)param_1[4]);
    if (temp_v4 != 0) {
      FUN_002356ec(param_1,&LAB_00385ca0);
    }
    else {
      FUN_002356ec(param_1,&LAB_00385cac);
    }
    temp_v5 = param_1[2] + 1;
    param_1[2] = temp_v5;
    return;
  case 5:
    temp_v4 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v4 == 2) {
      param_1[1] = 5;
      param_1[2] = 0;
      param_1[0x3ec] = 0;
      return;
    }
    break;
  case 6:
    temp_v4 = FUN_00282d98();
    if ((temp_v4 == 0) && (temp_v4 = FUN_0026b7cc(), temp_v4 != 0)) {
      param_1[1] = 0x10;
      param_1[2] = 0;
      param_1[0x3ec] = 0;
      return;
    }
    break;
  case 7:
    temp_v4 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v4 != 2) {
      return;
    }
    FUN_002af854(param_1 + 0x7a,1,0);
    temp_v5 = 3;
    param_1[2] = temp_v5;
    return;
  }
  return;
}
