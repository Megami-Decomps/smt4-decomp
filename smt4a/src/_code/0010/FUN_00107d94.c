/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107d94` (_code @ 0x107d94, 0x349 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 20 slot(s), 77 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern unsigned int DAT_005949d4; /* 0x5949d4 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00103890. */
/* Supplied declaration required: FUN_00105d54. */
/* Supplied declaration required: FUN_00105dd0. */
/* Supplied declaration required: FUN_00108ea8. */
/* Supplied declaration required: FUN_00114b86. */
/* Supplied declaration required: FUN_002eab08. */
extern int FUN_002eac34(unsigned char);
extern int FUN_002eafbe(int);
/* Supplied declaration required: FUN_002eb16e. */
/* Supplied declaration required: FUN_002eb5e8. */
/* Supplied declaration required: FUN_002eb60c. */
extern int FUN_002eb6ae(int, unsigned int);
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ec934. */
extern int FUN_002eed8c(int);
extern int FUN_002ef01c(int);
/* Supplied declaration required: FUN_002ef268. */
extern int FUN_002efa1c(int *);
extern unsigned int *FUN_002efa50(int *, unsigned char);
/* Supplied declaration required: FUN_002efa58. */
/* Supplied declaration required: FUN_002efb6c. */
extern int FUN_002f035c(unsigned char *, unsigned char *);
extern int FUN_002f03f4(unsigned int, unsigned int);
extern int FUN_002f0400(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f07b8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00107d94(int *param_1,int param_2)

{
/* irregular: 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned int temp_v6;
  int *temp_v7;
  int *temp_v8;
  int *temp_v9;
  int *temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [4];
  unsigned int temp_v13;
  unsigned char temp_v14 [8];
  int *temp_v15;
  int temp_v16;
  int *temp_v17;
  int temp_v18;
  int temp_v19;
  int *temp_v20;
  unsigned int temp_v21;
  int *temp_v22;
  int *temp_v23;
  unsigned int temp_v24;
  int *temp_v25;
  unsigned int *temp_v26;
  int *temp_v27;
  unsigned char temp_v28;
  unsigned char temp_v29 [8];
  unsigned char temp_v30 [12];
  
  temp_v1 = *(unsigned short *)(param_2 + 0x3c);
  temp_v20 = param_1 + 0x28;
  temp_v24 = temp_v1 & 0xf;
  temp_v21 = 0;
  temp_v16 = param_2 + 0x80;
  if ((*(char *)(param_1[1] + 4) != '\n') && (*(char *)(param_1[1] + 4) != '\x02')) {
    if ((((temp_v1 & 0x2010) == 0) && (temp_v24 == 2)) &&
       ((temp_v5 = FUN_002eb6ae(param_2,0x800), temp_v5 == 0 &&
        (temp_v5 = FUN_002f0400(0x554,DAT_005949d4), temp_v5 == 0)))) {
      return;
    }
  }
  else if (((temp_v1 & 0xf) == 0) &&
          ((((temp_v5 = FUN_002eb6ae(param_2,0x10), temp_v5 != 0 &&
             (temp_v5 = (**(romwright_code **)(*param_1 + 0x20))(param_1), temp_v5 != 0)) &&
            ((char)temp_v20[4] == '\0')) &&
           (temp_v5 = FUN_002f03f4(*(unsigned int *)(temp_v16 + 0xc),1), temp_v5 != 0)))) {
    temp_v6 = 8;
    FUN_002ef268(param_1,temp_v6);
    return;
  }
  temp_v5 = FUN_002ef01c(param_1[1]);
  puVar7 = (unsigned int *)(param_1 + 0x38);
  temp_v26 = puVar7;
  if (*(char *)(temp_v5 + 0x70) != '\0') {
    FUN_002eab08(&temp_v7);
    *puVar7 = (unsigned int)temp_v7;
    param_1[0x39] = (int)temp_v8;
  }
  temp_v5 = FUN_002eb6ae(param_2,0x200);
  temp_v17 = param_1 + 0x20;
  if (((temp_v5 != 0) || (temp_v5 = FUN_002eb6ae(param_2,0x400), temp_v5 != 0)) &&
     ((char)temp_v17[1] != '\x02')) {
    if ((char)param_1[0x52] == '\0') {
      return;
    }
    if ((char)temp_v20[7] != '\x02') {
      return;
    }
    if ((char)temp_v17[1] == '\x01') {
      return;
    }
  }
  temp_v5 = FUN_002eb6ae(param_2,0x2000);
  temp_v27 = param_1 + 0x40;
  if ((temp_v5 == 0) && (*(unsigned short *)(param_1 + 0x41) < (unsigned short)*(unsigned char *)(temp_v16 + 4))) {
    return;
  }
  temp_v5 = FUN_002eb6ae(param_2,0x200);
  temp_v22 = param_1 + 0x47;
  temp_v23 = param_1 + 0x42;
  temp_v19 = param_2 + 0x60;
  temp_v25 = param_1 + 0x3c;
  temp_v18 = param_2 + 0x20;
  if ((temp_v5 == 0) && (temp_v5 = FUN_002eb6ae(param_2,0x400), temp_v5 == 0)) {
    if ((((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 0) &&
        (temp_v5 = FUN_002eb6ae(param_2,0x10), temp_v5 != 0)) ||
       (((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1 &&
        (temp_v5 = FUN_002eb6ae(param_2,0x10), temp_v5 == 0)))) {
      temp_v5 = FUN_002eafbe(param_2);
      piVar8 = temp_v23;
      if (temp_v5 != 0) {
        piVar8 = temp_v22;
      }
      FUN_002eb16e(piVar8,param_2 + 0x50);
    }
    if (temp_v24 != 0) {
      if ((char)param_1[0x52] != '\0') {
        if (*(char *)(temp_v19 + 5) != (char)param_1[0x52]) {
          if (temp_v24 != 1) {
            return;
          }
          if ((int)((unsigned int)*(unsigned short *)(param_2 + 0x3c) << 0x1b) < 0) {
            return;
          }
          temp_v6 = 1;
          FUN_002ef268(param_1,temp_v6);
          return;
        }
      }
      else if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1) {
        *(unsigned char *)(param_1 + 0x52) = *(unsigned char *)(temp_v19 + 5);
        temp_v7 = (int *)0x0;
        if (*(char *)(temp_v18 + 4) != '\0') {
          FUN_002eb5e8(temp_v30,0);
          temp_v7 = (int *)0x1;
          FUN_002f07b8(temp_v29,param_2);
          temp_v5 = FUN_002f035c(temp_v29,temp_v30);
          if (temp_v5 == 0) {
            temp_v2 = 0;
          }
          else {
            temp_v2 = 1;
          }
        }
        else {
          temp_v2 = 0;
        }
        piVar8 = temp_v25;
        if (temp_v2) {
          FUN_002f07b8(&temp_v7,param_2);
          *(unsigned short *)(piVar8 + 1) = (*(unsigned short *)((unsigned char *)&temp_v8 + 0));
        }
        temp_v0 = *(unsigned char *)(temp_v18 + 5);
        temp_v4 = (unsigned int)temp_v7 >> 8;
        temp_v7 = (int *)((unsigned int)temp_v7 & 0xffffff00);
        temp_v3 = temp_v0 >> 4;
        if ((temp_v3 == 1) || (temp_v7 = (int *)romwright_piece_3_1((int)temp_v4,temp_v0), temp_v3 == 9)) {
          temp_v7 = (int *)romwright_piece_3_1((((unsigned int)(temp_v7) >> 8) & 0xffffffU),temp_v0);
          temp_v5 = FUN_002eac34(temp_v3);
          if (*(char *)(temp_v5 + 0xa8) != '\0') {
            temp_v28 = *(unsigned char *)(temp_v18 + 5);
            temp_v5 = FUN_002eac34(temp_v28 >> 4);
            FUN_00103890(temp_v12,temp_v5 + 0xac);
            FUN_002ec934(&temp_v7,temp_v14,temp_v13);
            if ((int *)temp_v11 != temp_v10) {
              FUN_00105dd0(param_1 + 0x80,&temp_v7);
              FUN_00105d54(param_1 + 0x80,&temp_v7,*(unsigned char *)((int)param_1 + 0x149),
                           (char)param_1[0x52]);
            }
            FUN_002ec890(&temp_v7);
          }
        }
      }
    }
  }
  if ((int)((unsigned int)*(unsigned short *)(param_2 + 0x3c) << 0x19) < 0) {
    if (((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 2) && (temp_v5 = FUN_002efa1c(param_1), temp_v5 != 0)) {
      FUN_002efa58(&temp_v9,param_1 + 0x59,*(unsigned char *)(temp_v16 + 4));
      temp_v8 = temp_v10;
      temp_v7 = temp_v9;
      FUN_002efb6c(&temp_v7,1);
    }
    else {
      FUN_00108ea8(param_1,param_2);
    }
  }
  temp_v5 = FUN_002ef01c(param_1[1]);
  puVar7 = temp_v26;
  if (*(char *)(temp_v5 + 0x70) == '\0') {
    FUN_002eab08(&temp_v7);
    *puVar7 = (unsigned int)temp_v7;
    puVar7[1] = (unsigned int)temp_v8;
  }
  temp_v15 = param_1 + 0x24;
  temp_v8 = param_1 + 0xc0;
  if ((int)((unsigned int)*(unsigned short *)(param_2 + 0x3c) * 0x4000000) < 0) {
    param_1[0xc9] = param_1[0xc9] + 1;
    temp_v5 = FUN_002eed8c(param_2);
    temp_v8[10] = temp_v5 + temp_v8[10];
    puVar9 = (unsigned int *)FUN_002efa50(temp_v15,*(unsigned char *)(temp_v16 + 4));
    FUN_00114b86(*puVar9,param_2);
  }
  temp_v9 = param_1 + 0x70;
  temp_v10 = param_1 + 0x7a;
  FUN_002eb60c(temp_v24,0x2c0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
