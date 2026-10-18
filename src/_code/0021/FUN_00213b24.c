/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00213b24` (_code @ 0x213b24, 0x88c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

/* Supplied declaration required: FUN_001a1538. */
/* Supplied declaration required: FUN_00221c60. */
extern int FUN_002253c8(void);
/* Supplied declaration required: FUN_00250fb4. */
/* Supplied declaration required: FUN_00250fc4. */
extern int FUN_00251100(unsigned int);
/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
/* Supplied declaration required: FUN_00287ab4. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_0028df3c. */
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_0028efe0. */
/* Supplied declaration required: FUN_00290374. */
extern int FUN_002904d0(void);
extern unsigned int FUN_00290694(void);
/* Supplied declaration required: FUN_00295780. */
/* Supplied declaration required: FUN_00295798. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002959c4. */
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029b310. */
/* Supplied declaration required: FUN_0029bc38. */
/* Supplied declaration required: FUN_0029be68. */
/* Supplied declaration required: FUN_0029bf90. */
/* Supplied declaration required: FUN_0029f088. */
extern int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002b6e60(void);
extern int FUN_002b89a0(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bd25c. */
extern unsigned int FUN_002bd3ec(void);
extern unsigned int FUN_002be828(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002c684c. */
/* Supplied declaration required: FUN_002cde7c. */
/* Supplied declaration required: FUN_002d652c. */
extern int FUN_002e43f0(void);
extern unsigned int FUN_002f25a4(void);
extern int FUN_00333c6c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00333d2c. */
/* Supplied declaration required: FUN_00333da8. */
/* Supplied declaration required: FUN_00348ae4. */
/* Supplied declaration required: FUN_00348c74. */


unsigned int FUN_00213b24(void)

{
/* irregular: 34 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned short *puVar11;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  
  temp_v0 = FUN_00296f60(0) & 0xffff;
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_00254514(0);
    temp_v3 = temp_v0;
    FUN_002b6700();
    temp_v1 = FUN_00251100(temp_v0);
    if (temp_v1 == 0) {
      FUN_0028df54(0);
      return 1;
    }
    if (*(char *)(temp_v3 + 6) == '\0') {
      FUN_00254514(0,2);
      FUN_00254514(1,0);
      FUN_00254514(2,0);
      if (*(char *)(temp_v3 + 6) != '\0') {
        return 0;
      }
      temp_v1 = FUN_002c2b1c();
      FUN_00287ab4(temp_v0,0);
      *(unsigned short *)(temp_v1 + 0x1062) = 0;
      *(unsigned short *)(temp_v1 + 0x1060) = 0;
      return 0;
    }
    if (*(char *)(temp_v3 + 6) != '\x04') {
      temp_v2 = 0;
      temp_v5 = 0;
    }
    else {
      FUN_00254514(0,2);
      FUN_00254514(1,0);
      temp_v2 = 0;
      temp_v5 = 2;
    }
    FUN_00254514(temp_v5,temp_v2);
    return 0;
  }
  temp_v1 = FUN_002b49d8(0x1e);
  temp_v3 = temp_v0;
  FUN_002b6700();
  temp_v2 = FUN_002544fc(0);
  switch(temp_v2) {
  case 0:
    temp_v1 = FUN_002e43f0();
    if (temp_v1 == 0) {
      FUN_00221c60(0);
      FUN_002d652c(0);
      temp_v1 = FUN_002253c8();
      if (temp_v1 != 0) {
        temp_v2 = FUN_002f25a4();
        FUN_00254514(2,temp_v2);
      }
      else {
        FUN_00254514(2,0xffffffff);
      }
      FUN_00295780(0);
      FUN_00254514(3,0);
      FUN_0028df3c(1);
      FUN_0029bc38(1);
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      FUN_00333da8(&temp_v10,temp_v0);
      FUN_002cde7c(&temp_v10);
      FUN_00254514(0,1);
    }
    break;
  case 1:
    temp_v1 = FUN_002b89a0();
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_0029b310();
    FUN_0028df3c(0xffffffff);
    FUN_0028df0c(0);
    FUN_002b8b78(0x90);
    FUN_002544fc(3);
    FUN_00221c60(1);
    FUN_002d652c(1);
    temp_v3 = FUN_002544fc(2);
    if (-1 < (int)temp_v3) {
      temp_v1 = FUN_002253c8();
      if (temp_v1 == 0) {
        FUN_002959c4();
      }
      if ((temp_v3 != 0) && (temp_v4 = FUN_002f25a4(), temp_v4 != temp_v3)) {
        FUN_00295798(temp_v3 & 0xffff,0);
      }
      FUN_00295780(1);
    }
    temp_v1 = FUN_002904d0();
    if ((temp_v1 != 0) && (temp_v3 = FUN_00290694(), temp_v3 == temp_v0)) {
      FUN_00290374();
      temp_v1 = FUN_00333c6c(temp_v0,1);
      if (temp_v1 != 0) {
        FUN_00254514(0,7);
        FUN_00254514(2,temp_v1);
        temp_v2 = 0;
        temp_v5 = 3;
        FUN_00254514(temp_v5,temp_v2);
        return 0;
      }
    }
    FUN_00348ae4(temp_v0);
    FUN_0028df54(1);
    return 1;
  case 2:
    temp_v6 = FUN_002544fc(2);
    temp_v2 = 9;
    if (*(char *)(temp_v3 + 6) != '\x04') {
      temp_v6 = temp_v3 + temp_v6 * 8;
      if (*(short *)(temp_v6 + 0x16c) != 1) {
        if (*(short *)(temp_v6 + 0x16c) == 2) {
          temp_v0 = (unsigned int)*(unsigned short *)(temp_v6 + 0x16e);
          temp_v2 = 10;
          FUN_002bd25c(temp_v0);
          FUN_002bf86c(&temp_v12,temp_v0);
          FUN_00295904(8,&temp_v12);
          FUN_0029f088(0x18,*(unsigned int *)(temp_v6 + 0x170),0xffffffff,0);
        }
      }
      else {
        if (*(int *)(temp_v6 + 0x170) == 1) {
          temp_v2 = 8;
        }
        temp_v5 = FUN_002be828(*(unsigned short *)(temp_v6 + 0x16e),1);
        FUN_002bf86c(&temp_v12,temp_v5);
        FUN_00295904(0,&temp_v12);
        FUN_0029f088(0x18,*(unsigned int *)(temp_v6 + 0x170),0xffffffff,0);
      }
    }
    else {
      temp_v2 = 8;
      temp_v7 = FUN_002b6e60();
      temp_v0 = (unsigned int)*(unsigned short *)(temp_v7 + 0x46);
      FUN_002bd25c(temp_v0);
      FUN_002bf86c(&temp_v12,temp_v0);
      FUN_00295904(0,&temp_v12);
      FUN_0029f088(0x18,*(unsigned int *)(temp_v3 + temp_v6 * 8 + 0x170),0xffffffff,0);
    }
    FUN_002c0128();
    temp_v10 = 1;
    FUN_0025506c(temp_v1,temp_v2,0,6);
    FUN_00254514(1,0);
    FUN_00254514(0,3);
    break;
  case 3:
    FUN_002c0128();
    FUN_001a1538();
    temp_v2 = FUN_002544fc(1);
    temp_v10 = 0;
    FUN_0025506c(temp_v1,0xb,temp_v2);
    temp_v6 = FUN_002544fc(1);
    FUN_00254514(1,temp_v6 + 1);
    if (temp_v1 != 1) {
      return 0;
    }
    temp_v1 = FUN_00297674();
    if (temp_v1 != 0) {
      FUN_00254514(1,0);
      FUN_00254514(0,4);
      return 0;
    }
    temp_v1 = FUN_002544fc(2);
    temp_v1 = temp_v1 + 1;
    FUN_00254514(2,temp_v1);
    if (*(char *)(temp_v3 + 6) != '\x04') {
      if (*(char *)(temp_v3 + 6) != '\0') {
        return 0;
      }
      if ((temp_v1 < 6) && (*(short *)(temp_v3 + temp_v1 * 8 + 0x16c) != 0)) {
        FUN_00254514(0,2);
        return 0;
      }
      temp_v1 = 0;
      do {
        temp_v6 = temp_v3 + temp_v1 * 8;
        if (*(short *)(temp_v6 + 0x16c) != 1) {
          if (*(short *)(temp_v6 + 0x16c) == 2) {
            FUN_0029bf90(*(unsigned short *)(temp_v6 + 0x16e));
            FUN_0029be68();
          }
        }
        else {
          FUN_00250fc4(*(unsigned short *)(temp_v6 + 0x16e),*(unsigned int *)(temp_v6 + 0x170));
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      FUN_00254514(1,0);
      temp_v2 = 5;
      temp_v5 = 0;
      FUN_00254514(temp_v5,temp_v2);
      return 0;
    }
    FUN_00254514(0);
    break;
  case 4:
    FUN_002c0128();
    temp_v2 = FUN_002544fc(1);
    temp_v10 = 0;
    FUN_0025506c(temp_v1,0xc,temp_v2,6);
    temp_v6 = FUN_002544fc(1);
    FUN_00254514(1,temp_v6 + 1);
    if (temp_v1 == 1) {
      FUN_0028df54(2);
      return 1;
    }
    break;
  case 5:
    temp_v5 = 0x3a;
    temp_v6 = FUN_002544fc(2);
    temp_v2 = FUN_002bd3ec();
    FUN_002bf86c(&temp_v12,temp_v2);
    FUN_00295904(0,&temp_v12);
    if (temp_v6 >= 2) {
      temp_v5 = 0x3b;
    }
    FUN_002c0128();
    temp_v2 = FUN_002544fc(1);
    temp_v10 = 0;
    FUN_0025506c(temp_v1,temp_v5,temp_v2,6);
    temp_v6 = FUN_002544fc(1);
    FUN_00254514(1,temp_v6 + 1);
    if (temp_v1 != 1) {
      return 0;
    }
    FUN_00254514(1,0);
    FUN_00254514(0);
    break;
  default:
    FUN_00348ae4(temp_v0);
    FUN_0028df54(1);
    return 1;
  case 7:
    temp_v7 = FUN_002544fc(3);
    temp_v8 = FUN_002544fc(2);
    temp_v6 = temp_v8 << 1;
    FUN_002c684c();
    FUN_00333d2c(temp_v0,temp_v6,1);
    puVar11 = (unsigned short *)(temp_v6 + temp_v7 * 2);
    FUN_0028efe0(*puVar11,0,1);
    FUN_002c0128();
    temp_v2 = FUN_002544fc(1);
    temp_v10 = 0;
    FUN_0025506c(temp_v1,0x10,temp_v2,6);
    temp_v9 = FUN_002544fc(1);
    FUN_00254514(1,temp_v9 + 1);
    if (temp_v1 == 1) {
      FUN_00348c74(*puVar11);
      if (temp_v8 <= temp_v7 + 1) {
        FUN_00254514(1,0);
        FUN_00254514(2,0);
        FUN_00254514(3,0);
        FUN_00250fb4(temp_v6);
        FUN_00348ae4(temp_v0);
        FUN_0028df54(1);
        return 1;
      }
      FUN_00254514(1,0);
      FUN_00254514(3,temp_v7 + 1);
    }
    FUN_00250fb4(temp_v6);
  }
  return 0;
}
