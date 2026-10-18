/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc234` (_code @ 0x2cc234, 0x888 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_6_stack;

extern unsigned char LAB_002cc528; /* 0x2cc528 */
extern unsigned char LAB_002cc808; /* 0x2cc808 */
extern unsigned char LAB_002ccac0; /* 0x2ccac0 */
extern unsigned char LAB_002ccac8; /* 0x2ccac8 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00259b28. */
/* Supplied declaration required: FUN_0028f2ec. */
/* Supplied declaration required: FUN_002941b4. */
/* Supplied declaration required: FUN_002b67f8. */
/* Supplied declaration required: FUN_002b68dc. */
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002bda10. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be548. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


void FUN_002cc234(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 18 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned long long temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14 [16];
  int temp_v15 [7];
  
  temp_v3 = (int)*(short *)(param_1 + 0x22);
  if ((temp_v3 == 0) || (FUN_002941b4(temp_v3,1), temp_v3 != 0)) {
    temp_v15[0] = 4;
    temp_v15[1] = 5;
    FUN_002bef14();
    FUN_002c3ba8(DAT_0044ea00);
    temp_v3 = DAT_0044ea00;
    temp_v4 = FUN_002c5f7c(1,0);
    piVar8 = (int *)(temp_v3 + 0x124c);
    temp_v6 = *piVar8;
    temp_v5 = piVar8[temp_v6 + 2];
    *piVar8 = temp_v6 + 1;
    piVar8[temp_v6 + 3] = temp_v4;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    FUN_002bf710();
    temp_v9 = 0.3f;
    temp_v8 = temp_v9;
    FUN_002ba46c(DAT_0044ea00);
    FUN_002bf558(2,0x39,3,param_4 + (int)temp_v9,param_5,0x71);
    temp_v9 = 0.29f;
    temp_v11 = 0x3e947ae1;
    if (*(short *)(param_1 + 0x22) != 0) {
      temp_v9 = temp_v8;
      FUN_002ba46c(DAT_0044ea00);
      temp_v5 = (int)temp_v8;
      temp_v8 = temp_v9;
      temp_v3 = FUN_002bf6d0(0x39,0x23);
      temp_v4 = FUN_002bf6d0(0x39,0x22);
      FUN_002b68dc((int)*(short *)(temp_v4 + 8) + temp_v5 + param_4,*(short *)(temp_v4 + 10) + param_5,
                   (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1]);
      FUN_0028f2ec((int)*(short *)(param_1 + 0x22),(int)*(short *)(temp_v3 + 8) + temp_v5 + param_4,
                   *(short *)(temp_v3 + 10) + param_5,0x72,1);
      FUN_002b67f8();
    }
    else {
      FUN_002ba46c(DAT_0044ea00);
      FUN_002bf460(2,0x39,0x21,param_4 + (int)temp_v9,param_5,0x72);
    }
    temp_v9 = temp_v8;
    FUN_002ba46c(DAT_0044ea00);
    FUN_002bf558(2,0x39,temp_v15[*(unsigned char *)(param_2 + 0x37)],param_4 + (int)temp_v8,param_5,0x73);
    temp_v8 = 0.31f;
    FUN_002ba46c(DAT_0044ea00);
    FUN_002bf558(2,0x39,6,param_4 + (int)temp_v8,param_5,0x71);
    temp_v8 = temp_v9;
    FUN_002ba46c(DAT_0044ea00);
    temp_v4 = param_4 + (int)temp_v9;
    FUN_002bf460(2,0x39,0xd,temp_v4,param_5,0x72);
    FUN_002bf460(2,0x39,0xe,temp_v4,param_5,0x73);
    temp_v3 = FUN_002bf6d0(0x39,0x10);
    if (*(unsigned char *)(param_2 + 0x36) >= 10) {
      FUN_002be7fc(temp_v14,&LAB_002cc528);
    }
    else {
      FUN_002be7fc(temp_v14,&LAB_002cc808);
    }
    FUN_002be4dc(0);
    FUN_002be16c(0,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + param_5,0,5,0x73,
                 temp_v14);
    FUN_002bef14();
    temp_v9 = 0.32f;
    temp_v10 = CONCAT44(0x3ea3d70a,temp_v8);
    FUN_002ba46c(DAT_0044ea00);
    temp_v3 = 0;
    do {
      temp_v4 = FUN_002bf6d0(0x39,temp_v3 + 0x2f);
      FUN_002bf460(2,0x39,0x2d,(int)*(short *)(temp_v4 + 8) + (int)temp_v9 + param_4,
                   *(short *)(temp_v4 + 10) + param_5,0x71);
      temp_v5 = FUN_002bf6d0(0x39,0x2e);
      temp_v0 = *(short *)(temp_v5 + 10);
      temp_v5 = (int)*(short *)(temp_v5 + 8) +
              ((int)**(short **)(temp_v5 + 0xc) - param_1[temp_v3 + 0x1a]) / 2;
      if (*(short *)(param_2 + 0x38 + temp_v3 * 2) == 0) {
        temp_v5 = temp_v5 - 4;
      }
      FUN_002bda10(param_1[temp_v3 + 0x12],0xffffff00);
      FUN_00259b28(param_1[temp_v3 + 0x12],*(short *)(temp_v4 + 8) + param_4 + temp_v5 + (int)temp_v9,
                   (int)*(short *)(temp_v4 + 10) + param_5 + temp_v0,0x72);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
    if (param_6 != 0) {
      temp_v8 = (float)temp_v11;
      FUN_002ba46c(DAT_0044ea00);
      FUN_002bf558(2,0x39,0xf,*(int *)(param_3 + 4) + param_4 + (int)temp_v8,param_5,0x71);
      FUN_002bf558(2,0x39,0x10,*(int *)(param_3 + 4) + param_4 + (int)temp_v8,param_5,0x71);
      temp_v8 = (float)temp_v10;
      FUN_002ba46c(DAT_0044ea00);
      temp_v3 = 0;
      do {
        if (*(short *)((int)param_1 + temp_v3 * 2 + 0x24) != 0) {
          temp_v4 = FUN_002bf6d0(0x39,temp_v3 + 0xac);
          temp_v5 = *(short *)(temp_v4 + 10) + param_5;
          temp_v6 = (int)*(short *)(temp_v4 + 8) + *(int *)(param_3 + 4) + param_4;
          temp_v15[2] = temp_v6 + (int)temp_v8;
          FUN_002bf558(2,0x39,0x11,temp_v15[2],temp_v5,0x71);
          temp_v4 = FUN_002bf6d0(0x39,0xaa);
          FUN_002be548((int)*(short *)((int)param_1 + temp_v3 * 2 + 0x24),
                       *(short *)(temp_v4 + 8) + temp_v15[2],*(short *)(temp_v4 + 10) + temp_v5,0x72,0);
          temp_v4 = FUN_002bf6d0(0x39,0xab);
          temp_v0 = *(short *)(temp_v4 + 8);
          temp_v1 = *(short *)(temp_v4 + 10);
          FUN_002bda10(param_1[temp_v3 + 2],0);
          FUN_00259b28(param_1[temp_v3 + 2],(int)temp_v8 + temp_v6 + temp_v0,temp_v1 + temp_v5,0x72);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 7);
    }
    if (*(char *)(param_2 + 0x37) != '\0') {
      if (*(char *)(param_2 + 0x37) == '\x01') {
        temp_v13 = 0xffffff00;
        temp_v12 = 0;
      }
    }
    else {
      temp_v13 = 0x32323200;
      temp_v12 = 0xffffff00;
    }
    temp_v8 = (float)((unsigned long long)temp_v10 >> 0x20);
    FUN_002ba46c(DAT_0044ea00);
    temp_v9 = (float)temp_v10;
    temp_v7 = temp_v12;
    if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
      if (*(char *)(param_2 + 0x37) == '\0') {
        temp_v7 = 0xf33700;
      }
      else {
        temp_v7 = 0x840000;
      }
    }
    temp_v3 = FUN_002bf6d0(0x39,8);
    FUN_002bda10(*param_1,temp_v7);
    temp_v4 = param_4 + (int)temp_v8;
    FUN_00259b28(*param_1,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + param_5,0x72);
    temp_v3 = FUN_002bf6d0(0x39,9);
    FUN_002bda10(param_1[1],temp_v12);
    FUN_00259b28(param_1[1],*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + param_5,0x72);
    temp_v3 = FUN_002bf6d0(0x39,10);
    FUN_002bda10(param_1[0xd],temp_v12);
    FUN_00259b28(param_1[0xd],*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + param_5,0x72);
    FUN_002ba46c(DAT_0044ea00);
    temp_v5 = (int)temp_v9;
    temp_v3 = FUN_002bf6d0(0x39,0x24);
    temp_v4 = param_1[0xf];
    temp_v0 = *(short *)(temp_v3 + 8);
    temp_v1 = *(short *)(temp_v3 + 10);
    temp_v2 = **(short **)(temp_v3 + 0xc);
    FUN_002bda10(param_1[0xe],temp_v13);
    FUN_00259b28(param_1[0xe],param_4 + (int)temp_v0 + (temp_v2 - temp_v4) / 2 + temp_v5,param_5 + temp_v1,
                 0x74);
    temp_v3 = FUN_002bf6d0(0x39,0x25);
    temp_v4 = param_1[0x11];
    temp_v0 = *(short *)(temp_v3 + 10);
    temp_v1 = **(short **)(temp_v3 + 0xc);
    temp_v2 = *(short *)(temp_v3 + 8);
    FUN_002bda10(param_1[0x10],temp_v13);
    FUN_00259b28(param_1[0x10],param_4 + (temp_v1 - temp_v4) + (int)temp_v2 + temp_v5,param_5 + temp_v0,0x74);
    temp_v3 = FUN_002bf6d0(0x39,0x27);
    if (*(char *)(param_2 + 0x4a) != '\0') {
      FUN_002be7fc(temp_v14,&LAB_002ccac0);
    }
    else {
      FUN_002be7fc(temp_v14,&LAB_002ccac8);
    }
    FUN_002be4dc(temp_v13);
    FUN_002be16c(0,param_4 + temp_v5 + (int)*(short *)(temp_v3 + 8),*(short *)(temp_v3 + 10) + param_5,0,5
                 ,0x74,temp_v14);
    FUN_002bef14();
    FUN_002bf710();
    temp_v3 = DAT_0044ea00;
    piVar8 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v4 = *piVar8;
    temp_v5 = piVar8[temp_v4 + 2];
    *piVar8 = temp_v4 - 1;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != piVar8[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
  }
  return;
}
