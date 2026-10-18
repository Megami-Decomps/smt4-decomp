/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebdcc` (_code @ 0x2ebdcc, 0x8a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
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
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int FUN_0015687c(void);
/* Supplied declaration required: FUN_0015f858. */
extern int FUN_00162880(void);
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001695a0. */
extern int FUN_0016a0f0(unsigned int);
/* Supplied declaration required: FUN_00180118. */
extern int FUN_0019a7dc(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);
/* Supplied declaration required: FUN_001ba514. */
/* Supplied declaration required: FUN_002292ac. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00237898. */
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002c52e0. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: FUN_002cd8fc. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031bbe0. */
extern int FUN_003216b8(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003315c4. */
/* Supplied declaration required: FUN_00331714. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_00341ecc. */
/* Supplied declaration required: FUN_00359974. */
extern int FUN_0035fcbc(void);
/* Supplied declaration required: FUN_0035fd38. */
extern unsigned int FUN_00375848(void);
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_003deea4. */
/* Supplied declaration required: FUN_003df168. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_00417a60. */
/* Supplied declaration required: FUN_00417c24. */
/* Supplied declaration required: FUN_004185c4. */
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);
/* Supplied declaration required: FUN_00480fc0. */
/* Supplied declaration required: FUN_004d0d70. */
/* Supplied declaration required: FUN_004da2f8. */


unsigned int FUN_002ebdcc(void)

{
/* irregular: 36 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned short *puVar12;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
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
  unsigned int temp_v24;
  
  temp_v1 = FUN_00236038(0) & 0xffff;
  temp_v2 = FUN_002deb84();
  if (temp_v2 == 0) {
    FUN_00275fe4(0);
    temp_v4 = temp_v1;
    FUN_001ad9b4();
    temp_v2 = FUN_001ada74(temp_v1);
    if (temp_v2 != 0) {
      if (*(char *)(temp_v4 + 6) != '\0') {
        if (*(char *)(temp_v4 + 6) != '\x04') {
          temp_v3 = 0;
        }
        else {
          FUN_00275fe4(0,2);
          FUN_00275fe4(1,0);
          temp_v3 = 2;
        }
        FUN_00275fe4(temp_v3,0);
      }
      else {
        FUN_00275fe4(0,2);
        FUN_00275fe4(1,0);
        FUN_00275fe4(2,0);
        if (*(char *)(temp_v4 + 6) == '\0') {
          temp_v2 = FUN_00162e8c();
          FUN_004185c4(temp_v1,0);
          *(unsigned short *)(temp_v2 + 0x1096) = 0;
          *(unsigned short *)(temp_v2 + 0x1094) = 0;
        }
      }
      temp_v2 = 0;
      do {
        temp_v10 = temp_v4 + temp_v2 * 2;
        temp_v0 = *(short *)(temp_v10 + 0xe0);
        if (temp_v0 != 0) {
          FUN_003fd63c(temp_v0,1);
        }
        temp_v0 = *(short *)(temp_v10 + 0xe6);
        if (temp_v0 != 0) {
          FUN_003fd63c(temp_v0,0,1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      return 0;
    }
    FUN_003283ac(0);
    return 1;
  }
  temp_v2 = FUN_0016a0f0(0x1e);
  temp_v4 = temp_v1;
  FUN_001ad9b4();
  temp_v3 = FUN_00275bb0(0);
  switch(temp_v3) {
  case 0:
    temp_v2 = FUN_0035fcbc();
    if (temp_v2 == 0) {
      FUN_0031bbe0(0);
      FUN_00341ecc(0);
      temp_v2 = FUN_003216b8();
      if (temp_v2 != 0) {
        temp_v3 = FUN_00375848();
        FUN_00275fe4(2,temp_v3);
      }
      else {
        FUN_00275fe4(2,0xffffffff);
      }
      FUN_0035fd38(0);
      FUN_00275fe4(3,0);
      FUN_002c76c0(1);
      FUN_002c52e0(1);
      temp_v23 = 0;
      temp_v24 = 0;
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
      temp_v22 = 0;
      FUN_003df168(&temp_v11,temp_v1);
      FUN_00331714(&temp_v11);
      FUN_00275fe4(0,1);
    }
    break;
  case 1:
    temp_v2 = FUN_00162880();
    if (temp_v2 != 0) {
      FUN_003315c4();
      FUN_002c76c0(0xffffffff);
      FUN_002852f0(0);
      FUN_001681cc(0x92);
      FUN_00275bb0(3);
      FUN_0031bbe0(1);
      FUN_00341ecc(1);
      temp_v4 = FUN_00275bb0(2);
      if (-1 < (int)temp_v4) {
        temp_v2 = FUN_003216b8();
        if (temp_v2 == 0) {
          FUN_002cd8fc();
        }
        if ((temp_v4 != 0) && (temp_v5 = FUN_00375848(), temp_v5 != temp_v4)) {
          FUN_00336de4(temp_v4 & 0xffff,0);
        }
        FUN_0035fd38(1);
      }
      temp_v2 = FUN_004186a4();
      if ((temp_v2 != 0) && (temp_v4 = FUN_004186e0(), temp_v4 == temp_v1)) {
        FUN_004da2f8();
      }
      FUN_00417a60(temp_v1);
      FUN_003deea4(0);
      FUN_003283ac(1);
      return 1;
    }
    break;
  case 2:
    temp_v10 = FUN_00275bb0(2);
    temp_v3 = 9;
    if (*(char *)(temp_v4 + 6) != '\x04') {
      temp_v10 = temp_v4 + temp_v10 * 8;
      if (*(short *)(temp_v10 + 0x100) != 1) {
        if (*(short *)(temp_v10 + 0x100) == 2) {
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v10 + 0x102);
          temp_v3 = 10;
          FUN_00180118(temp_v1);
          FUN_002e342c(&temp_v13,temp_v1);
          FUN_003180c4(8,&temp_v13);
          FUN_00359974(0x18,*(unsigned int *)(temp_v10 + 0x104),0xffffffff,0);
        }
      }
      else {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v10 + 0x102);
        if (*(int *)(temp_v10 + 0x104) == 1) {
          temp_v3 = 8;
        }
        FUN_0015f858(temp_v1,1);
        FUN_002e342c(&temp_v13,temp_v1);
        FUN_003180c4(0,&temp_v13);
        FUN_00359974(0x18,*(unsigned int *)(temp_v10 + 0x104),0xffffffff,0);
      }
    }
    else {
      temp_v3 = 8;
      temp_v6 = FUN_0019a7dc();
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
      FUN_00180118(temp_v1);
      FUN_002e342c(&temp_v13,temp_v1);
      FUN_003180c4(0,&temp_v13);
      FUN_00359974(0x18,*(unsigned int *)(temp_v4 + temp_v10 * 8 + 0x104),0xffffffff,0);
    }
    FUN_001695a0();
    temp_v11 = 1;
    FUN_00237898(temp_v2,temp_v3,0,6);
    FUN_00275fe4(1,0);
    FUN_00275fe4(0,3);
    break;
  case 3:
    FUN_001695a0();
    FUN_002292ac();
    temp_v3 = FUN_00275bb0(1);
    temp_v11 = 0;
    FUN_00237898(temp_v2,0xb,temp_v3);
    temp_v10 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v10 + 1);
    if (temp_v2 != 1) {
      return 0;
    }
    temp_v2 = FUN_002a4b74();
    if (temp_v2 != 0) {
      FUN_00275fe4(1,0);
      FUN_00275fe4(0,4);
      return 0;
    }
    temp_v2 = FUN_00275bb0(2);
    temp_v2 = temp_v2 + 1;
    FUN_00275fe4(2,temp_v2);
    if (*(char *)(temp_v4 + 6) != '\x04') {
      if (*(char *)(temp_v4 + 6) != '\0') {
        return 0;
      }
      if ((temp_v2 < 4) && (*(short *)(temp_v4 + temp_v2 * 8 + 0x100) != 0)) {
        FUN_00275fe4(0,2);
        return 0;
      }
      temp_v2 = 0;
      do {
        temp_v10 = temp_v4 + temp_v2 * 8;
        if (*(short *)(temp_v10 + 0x100) != 1) {
          if (*(short *)(temp_v10 + 0x100) == 2) {
            FUN_001ba514(*(unsigned short *)(temp_v10 + 0x102));
            FUN_004d0d70();
          }
        }
        else {
          FUN_00480fc0(*(unsigned short *)(temp_v10 + 0x102),*(unsigned int *)(temp_v10 + 0x104));
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      FUN_00275fe4(1,0);
      FUN_00275fe4(0,5);
      return 0;
    }
    FUN_00275fe4(0);
    break;
  case 4:
    FUN_001695a0();
    temp_v3 = FUN_00275bb0(1);
    temp_v11 = 0;
    FUN_00237898(temp_v2,0xc,temp_v3,6);
    temp_v10 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v10 + 1);
    if (temp_v2 == 1) {
      FUN_003283ac(2);
      return 1;
    }
    break;
  case 5:
    temp_v9 = 0x3a;
    temp_v10 = FUN_00275bb0(2);
    temp_v3 = FUN_0015687c();
    FUN_002e342c(&temp_v13,temp_v3);
    FUN_003180c4(0,&temp_v13);
    if (temp_v10 >= 2) {
      temp_v9 = 0x3b;
    }
    FUN_001695a0();
    temp_v3 = FUN_00275bb0(1);
    temp_v11 = 0;
    FUN_00237898(temp_v2,temp_v9,temp_v3,6);
    temp_v10 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v10 + 1);
    if (temp_v2 != 1) {
      return 0;
    }
    FUN_00275fe4(1,0);
    FUN_00275fe4(0);
    break;
  default:
    FUN_00417a60(temp_v1);
    FUN_003deea4(0);
    FUN_003283ac(1);
    return 1;
  case 7:
    temp_v6 = FUN_00275bb0(3);
    temp_v7 = FUN_00275bb0(2);
    temp_v10 = temp_v7 << 1;
    FUN_002e3d04();
    puVar12 = (unsigned short *)(temp_v10 + temp_v6 * 2);
    FUN_003dea6c(*puVar12,0,1);
    FUN_001695a0();
    temp_v3 = FUN_00275bb0(1);
    temp_v11 = 0;
    FUN_00237898(temp_v2,0x10,temp_v3,6);
    temp_v8 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v8 + 1);
    if (temp_v2 == 1) {
      FUN_00417c24(*puVar12);
      if (temp_v7 <= temp_v6 + 1) {
        FUN_00275fe4(1,0);
        FUN_00275fe4(2,0);
        FUN_00275fe4(3,0);
        FUN_002e6490(temp_v10);
        FUN_00417a60(temp_v1);
        FUN_003deea4(0);
        FUN_003283ac(1);
        return 1;
      }
      FUN_00275fe4(1,0);
      FUN_00275fe4(3,temp_v6 + 1);
    }
    FUN_002e6490(temp_v10);
  }
  return 0;
}
