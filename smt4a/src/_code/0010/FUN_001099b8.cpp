/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001099b8` (_code @ 0x1099b8, 0x4a2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b7b0(unsigned int, int);
int FUN_00120960(unsigned int, unsigned int, unsigned int *, unsigned int);
int FUN_002e7232(...);
int strAssign(...);
int FUN_002e75fa(...);
int FUN_002eb588(unsigned int *);
int FUN_002eb6b8(unsigned int *);
int FUN_002eb744(int);
int FUN_002ed838(int *);
int FUN_002eea5c(...);
int FUN_002f2aa0(void);
int FUN_002f2b24(...);
int FUN_002f2b5c(int, unsigned int, int);
int FUN_002f2c0a(void);
int FUN_002f2cb2(int *, unsigned int, int);
int FUN_002f2d90(...);

typedef int romwright_code(...);
/* stack frame of param_4: 23 slot(s), 90 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
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
    unsigned short sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

#ifndef ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______00594975_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s______00594975_9_1_size_check[(sizeof(union romwright_storage_s______00594975_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_u1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_s1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______00594975_9_1 s______00594975; /* 0x594975 */
extern unsigned short DAT_00594984; /* 0x594984 */
extern unsigned int DAT_00594a1c; /* 0x594a1c */
extern unsigned int DAT_00594a24; /* 0x594a24 */

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_0011b7b0. */
/* Supplied declaration required: FUN_00120960. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: strAssign. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002e76b6(void);
extern int FUN_002eac34(unsigned char);
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eb5f4(void);
extern int wordRefsDiffer_002eb690(unsigned int *, int *);
extern int FUN_002eb6ae(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002eb6b8. */
/* Supplied declaration required: FUN_002eb744. */
extern int FUN_002eb7d0(unsigned int, unsigned int);
extern int FUN_002eba9c(unsigned int *, unsigned int *);
extern int *FUN_002ed258(int, int *);
/* Supplied declaration required: FUN_002ed838. */
/* Supplied declaration required: FUN_002eea5c. */
extern int *FUN_002eff58(int, unsigned int);
extern int FUN_002eff84(int *);
extern int FUN_002f14a8(int, unsigned int);
/* Supplied declaration required: FUN_002f2aa0. */
extern int *FUN_002f2afc(void);
/* Supplied declaration required: FUN_002f2b24. */
extern int FUN_002f2b30(unsigned int);
/* Supplied declaration required: FUN_002f2b5c. */
/* Supplied declaration required: FUN_002f2c0a. */
extern int FUN_002f2c38(unsigned int, unsigned int);
extern int FUN_002f2c94(unsigned int);
/* Supplied declaration required: FUN_002f2cb2. */
/* Supplied declaration required: FUN_002f2d90. */


int FUN_001099b8(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 16 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar9;
  unsigned char temp_v5;
  unsigned int temp_v6;
  short temp_v7 [6];
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int *temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  int temp_v24;
  int temp_v25;
  int *temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  
  temp_v3 = param_2[2];
  piVar9 = (int *)0x0;
  temp_v19 = 0;
  temp_v18 = 1;
  temp_v5 = temp_v3 == 0;
  temp_v6 = 0;
  temp_v10 = temp_v3;
  temp_v25 = param_1;
  temp_v26 = param_2;
  temp_v27 = param_3;
  temp_v28 = param_4;
  do {
    if (temp_v5) {
      return 0;
    }
    temp_v4 = temp_v3;
    FUN_002f2aa0();
    temp_v5 = 1;
  } while (temp_v4 == 0);
  temp_v7[0] = (((unsigned int)(temp_v7[0]) & 0xffffff00U) | (((unsigned int)(*(unsigned char *)(temp_v3 + 0x25)) & 0xffU) << 0));
  temp_v1 = FUN_002eac34(*(unsigned char *)(temp_v3 + 0x25) >> 4);
  temp_v15 = (unsigned int)*(unsigned short *)(temp_v1 + 0x32);
  temp_v7[0] = romwright_piece_1_1((((unsigned int)(temp_v7[0]) >> 8) & 0xffU),*(unsigned char *)(temp_v3 + 0x25));
  temp_v1 = FUN_002eac34(*(unsigned char *)(temp_v3 + 0x25) >> 4);
  temp_v9 = (unsigned int)*(unsigned short *)(temp_v1 + 0x30);
  temp_v14 = temp_v15;
  if (temp_v15 < temp_v9) {
    temp_v14 = temp_v9;
  }
  temp_v0 = *(char *)(temp_v25 + 0x144);
  if (((((*(unsigned short *)(temp_v3 + 0x3c) & 0xf) == 4) || (*(int *)(temp_v3 + 0xd8) == 0)) ||
      (temp_v1 = FUN_002f14a8(*(int *)(temp_v3 + 0xd8),4), temp_v1 != 0)) && (temp_v0 != '\0')) {
    temp_v1 = FUN_002eb7d0(0x20,0);
    if (temp_v1 != 0) {
      piVar3 = (int *)FUN_002eff58(temp_v1,temp_v28);
    }
    else {
      piVar3 = (int *)0x0;
    }
    temp_v1 = FUN_002eb7d0(0x20,0);
    if (temp_v1 != 0) {
      piVar4 = (int *)FUN_002eff58(temp_v1,temp_v28);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      temp_v1 = FUN_002eff84(piVar3);
      if (((temp_v1 != 0) && (piVar4 != (int *)0x0)) && (temp_v1 = FUN_002eff84(piVar4), temp_v1 != 0)) {
        temp_v1 = FUN_002e760a(0x10);
        if (temp_v1 != 0) {
          piVar3 = (int *)FUN_002ed258(temp_v1,piVar3);
        }
        else {
          piVar3 = (int *)0x0;
        }
        FUN_002e7232(piVar3[2]);
        temp_v1 = FUN_002e760a(0x10);
        if (temp_v1 != 0) {
          piVar4 = (int *)FUN_002ed258(temp_v1,piVar4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        FUN_002e7232(piVar4[2]);
        goto LAB_00109b02;
      }
      (**(romwright_code **)(*piVar3 + 4))(piVar3);
    }
    if (piVar4 != (int *)0x0) {
      (**(romwright_code **)(*piVar4 + 4))(piVar4);
    }
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002e760a(0x10);
    if (temp_v1 != 0) {
      piVar3 = (int *)FUN_002f2afc();
    }
    else {
      piVar3 = (int *)0x0;
    }
    temp_v1 = FUN_002e760a(0x10);
    if (temp_v1 != 0) {
      piVar4 = (int *)FUN_002f2afc();
    }
    else {
      piVar4 = (int *)0x0;
    }
LAB_00109b02:
    temp_v20 = temp_v25 + 0x20;
    if (*(char *)(temp_v25 + 0x38) != '\0') {
      temp_v11 = (int *)((unsigned int)temp_v11 & 0xffff0000);
      FUN_002eea5c(piVar3,&temp_v11);
    }
    temp_v1 = FUN_002eb5f4();
    temp_v11 = (int *)(temp_v1 + 0xd4);
    temp_v13 = temp_v25 + 0x120;
    while( 1 ) {
      temp_v21 = temp_v26[4];
      temp_v1 = wordRefsDiffer_002eb690(&temp_v10,&temp_v21);
      if (temp_v1 == 0) break;
      FUN_002ed838(piVar4);
      (**(romwright_code **)(*temp_v11 + 0x20))(temp_v11,temp_v3,piVar4);
      temp_v1 = FUN_002eb6ae(temp_v3,0x20);
      if ((temp_v1 != 0) || (temp_v1 = FUN_002eb6ae(temp_v3,0x800), temp_v1 == 0)) {
        temp_v18 = 0;
      }
      temp_v1 = 0;
      if (piVar9 != (int *)0x0) {
        temp_v1 = *(int *)(piVar9[2] + 0x10);
      }
      if (temp_v28 >= (unsigned int)(*(int *)(piVar3[2] + 0x10) + *(int *)(piVar4[2] + 0x10) + temp_v1)) {
        piVar5 = piVar3;
        if (((*(char *)(temp_v20 + 0x18) != '\0') && (temp_v1 = FUN_002eb6ae(temp_v3,0x100), temp_v1 != 0)
            ) && (piVar5 = piVar9, piVar9 == (int *)0x0)) {
          temp_v1 = FUN_002e760a(0x10);
          if (temp_v1 != 0) {
            piVar5 = (int *)FUN_002f2afc();
            piVar9 = piVar5;
          }
          else {
            piVar5 = (int *)0x0;
            piVar9 = piVar5;
          }
        }
        FUN_002f2b24(piVar5,piVar4);
        FUN_002e75fa(temp_v3);
        temp_v16 = temp_v10;
        (**(romwright_code **)(*temp_v26 + 0x14))(&temp_v22,temp_v26,&temp_v16);
        temp_v10 = temp_v22;
        if ((*(int *)(temp_v3 + 0x134) != 0) && (temp_v1 = FUN_002f2b30(temp_v3), temp_v1 != 0)) {
          FUN_002f2b5c(temp_v13,temp_v3,0);
          temp_v19 = temp_v3;
        }
        temp_v6 = temp_v6 + 1;
        if (temp_v14 < temp_v6) {
          temp_v10 = temp_v26[4];
          temp_v12 = temp_v10;
        }
        else {
          while( 1 ) {
            temp_v24 = temp_v26[4];
            temp_v1 = wordRefsDiffer_002eb690(&temp_v10,&temp_v24);
            if (temp_v1 == 0) break;
            temp_v23 = temp_v10;
            temp_v17 = temp_v10;
            temp_v4 = temp_v3;
            FUN_002f2c0a();
            if ((temp_v4 != 0) && (temp_v1 = FUN_002f2c38(temp_v17,temp_v3), temp_v1 != 0)) {
              temp_v1 = FUN_002f2c94(temp_v23);
              temp_v4 = temp_v9;
              if (temp_v1 != 0) {
                temp_v4 = temp_v15;
              }
              if (temp_v6 <= temp_v4) break;
            }
            FUN_002eb6b8(&temp_v10);
          }
        }
        FUN_002e7232(temp_v3);
        temp_v3 = temp_v10;
      }
      else {
        temp_v10 = temp_v26[4];
        temp_v12 = temp_v10;
      }
    }
    temp_v5 = s______00594975.whole[0] == '\0';
    do {
      if (temp_v5) {
        temp_v2 = 0;
        goto LAB_00109dda;
      }
      temp_v5 = 1;
    } while (temp_v19 == 0);
    temp_v1 = 0;
    if (piVar9 != (int *)0x0) {
      temp_v1 = *(int *)(piVar9[2] + 0x10);
    }
    temp_v17 = DAT_00594a24;
    if (temp_v28 < DAT_00594a24) {
      temp_v17 = temp_v28;
    }
    temp_v3 = 0;
    temp_v17 = temp_v17 - (*(int *)(piVar3[2] + 0x10) + temp_v1);
    piVar5 = piVar3;
    if (0 < (int)temp_v17) {
      FUN_002ed838(piVar4);
      temp_v16 = 0;
      if (*(char *)(temp_v20 + 0x18) != '\0') {
        FUN_002eea5c(piVar4);
        temp_v16 = 2;
      }
      FUN_002eb588(&temp_v8);
      temp_v23 = (int)DAT_00594a1c >> 0x1f;
      temp_v22 = DAT_00594a1c;
      temp_v1 = FUN_002eba9c(&temp_v8,&temp_v22);
      if (temp_v1 != 0) {
        if ((int)DAT_00594a1c >= 1) {
          temp_v14 = temp_v8 - DAT_00594a1c;
          temp_v15 = (temp_v9 - ((int)DAT_00594a1c >> 0x1f)) - (unsigned int)(temp_v8 < DAT_00594a1c);
        }
        else {
          temp_v3 = -DAT_00594a1c;
          temp_v14 = temp_v8 + temp_v3;
          temp_v15 = temp_v9 + ((int)temp_v3 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v8,temp_v3);
        }
      }
      else {
        temp_v14 = 0;
        temp_v15 = temp_v14;
      }
      temp_v3 = temp_v27;
      FUN_00120960(temp_v27,temp_v19,&temp_v14,temp_v17);
      if (temp_v16 < *(unsigned int *)(piVar4[2] + 0x10)) {
        temp_v8 = *(int *)(piVar3[2] + 0x10) - temp_v16;
        temp_v1 = FUN_002e76b6();
        strAssign(piVar4[2],temp_v1 + temp_v16,temp_v8,0xffffffff);
        piVar5 = piVar4;
        piVar4 = piVar3;
      }
    }
    FUN_0011b7b0(temp_v27,temp_v13);
    if ((*(char *)(temp_v19 + 0x138) != '\x02') &&
       ((temp_v4 = temp_v26[2], temp_v9 = temp_v4, temp_v10 = temp_v4, temp_v4 == 0 ||
        (FUN_002f2aa0(), temp_v4 == 0)))) {
      FUN_002f2cb2(temp_v26,temp_v27,*(unsigned short *)(temp_v19 + 0x86));
    }
    FUN_002eb744(temp_v13);
    if (temp_v3 == 0) {
      temp_v2 = 1;
    }
    else {
      temp_v2 = 2;
    }
    FUN_002f2d90(temp_v2);
    temp_v8 = (unsigned int)DAT_00594984;
    if (DAT_00594984 >> 1 <= temp_v3) {
      FUN_002f2d90(3);
    }
    piVar3 = piVar5;
    if (temp_v8 <= temp_v3) {
      temp_v2 = 4;
LAB_00109dda:
      FUN_002f2d90(temp_v2);
    }
    if (piVar4 != (int *)0x0) {
      (**(romwright_code **)(*piVar4 + 4))(piVar4);
    }
    if (*(char *)(temp_v20 + 0x18) != '\0') {
      temp_v7[0] = (short)*(unsigned int *)(piVar3[2] + 0x10) - 2;
      strAssign(piVar3[2],temp_v7,2,0);
    }
    if (piVar9 != (int *)0x0) {
      FUN_002f2b24(piVar3,piVar9);
      (**(romwright_code **)(*piVar9 + 4))(piVar9);
    }
    temp_v1 = 0;
    if (piVar3 != (int *)0x0) {
      if (piVar3[2] != 0) {
        FUN_002f2d90(5);
        temp_v1 = piVar3[2];
        if (temp_v18 != 0) {
          *(unsigned char *)(temp_v1 + 0x1c) = *(unsigned char *)(temp_v1 + 0x1c) | 1;
        }
        FUN_002e75fa(temp_v1);
      }
      (**(romwright_code **)(*piVar3 + 4))(piVar3);
    }
  }
  return temp_v1;
}

} /* extern "C" */
