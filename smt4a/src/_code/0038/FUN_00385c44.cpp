/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385c44` (_code @ 0x385c44, 0x8e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003ed6e8(...);
int FUN_003f0070(...);
int FUN_003f0e20(...);
int FUN_003f26d4(...);
int FUN_003fd63c(int, int, int);
int FUN_0047f1c4(...);
int FUN_004a9a64(...);
int FUN_004a9c84(...);
int FUN_004c3a98(...);
int FUN_004c3c84(unsigned int, int, int);
int FUN_004c571c(...);
int FUN_004fdc9c(...);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573980; /* 0x573980 */
extern unsigned int DAT_00573984; /* 0x573984 */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739d0; /* 0x5739d0 */
extern unsigned int DAT_005739d4; /* 0x5739d4 */
extern unsigned int DAT_005739e8; /* 0x5739e8 */
extern unsigned int DAT_005739ec; /* 0x5739ec */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a00; /* 0x573a00 */
extern unsigned int DAT_00573a04; /* 0x573a04 */
extern unsigned int DAT_00573a20; /* 0x573a20 */
extern unsigned int DAT_00573a24; /* 0x573a24 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a38; /* 0x573a38 */
extern unsigned int DAT_00573a3c; /* 0x573a3c */
extern unsigned int DAT_00573a40; /* 0x573a40 */
extern unsigned int DAT_00573a44; /* 0x573a44 */
extern unsigned int DAT_00573a60; /* 0x573a60 */
extern unsigned int DAT_00573a64; /* 0x573a64 */
extern unsigned int DAT_00573ac8; /* 0x573ac8 */
extern unsigned int DAT_00573acc; /* 0x573acc */
extern unsigned int DAT_00573ad0; /* 0x573ad0 */
extern unsigned int DAT_00573ad4; /* 0x573ad4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */
extern unsigned int DAT_00573b00; /* 0x573b00 */
extern unsigned int DAT_00573b04; /* 0x573b04 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014bef4(unsigned int);
extern int FUN_0018719c(unsigned int);
extern unsigned int flagSelectVariant(void);
extern int FUN_00261424(void);
extern int FUN_002626e0(void);
extern int FUN_002e2b38(void);
extern int FUN_003e48bc(void);
extern int FUN_003e4978(void);
/* Supplied declaration required: FUN_003ed6e8. */
/* Supplied declaration required: FUN_003f0070. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_0047f1c4. */
/* Supplied declaration required: FUN_004a9a64. */
/* Supplied declaration required: FUN_004a9c84. */
/* Supplied declaration required: FUN_004c3a98. */
/* Supplied declaration required: FUN_004c3c84. */
/* Supplied declaration required: FUN_004c571c. */
extern int FUN_004ec93c(unsigned int);
extern int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fdc9c. */


void FUN_00385c44(unsigned int *param_1)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  short temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int *puVar15;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned short temp_v17;
  unsigned int *puVar20;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned int temp_v20 [4];
  unsigned int temp_v21;
  unsigned int uStack_44;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  
  puVar15 = param_1 + 0x1168;
  temp_v25 = param_1[0x1169];
  temp_v24 = *puVar15;
  temp_v23 = temp_v25 & DAT_005739f4;
  temp_v22 = temp_v24 & DAT_005739f0;
  if (!(temp_v23 == 0 && temp_v22 == 0)) {
    temp_v7 = 4;
    temp_v8 = 0x32;
  }
  else {
    temp_v7 = 0;
    temp_v8 = 4;
  }
  temp_v16 = temp_v7 + temp_v8;
  temp_v26 = 0;
  *(unsigned short *)(param_1 + 0x131c) = 0;
  temp_v6 = DAT_005739a4;
  temp_v5 = DAT_005739a0;
  temp_v3 = DAT_0057398c;
  temp_v13 = DAT_00573988;
  temp_v4 = DAT_00573984;
  temp_v0 = DAT_00573980;
  temp_v15 = DAT_0057397c;
  temp_v12 = DAT_00573978;
  if (temp_v7 < temp_v16) {
    temp_v20[0] = DAT_00573988;
    temp_v20[2] = DAT_00573980;
    temp_v21 = DAT_005739a0;
    temp_v20[3] = DAT_00573984;
    temp_v20[1] = DAT_0057398c;
    uStack_44 = DAT_005739a4;
    temp_v14 = param_1[0x7ff];
    do {
      temp_v27 = temp_v7 * 0x81;
      puVar20 = (unsigned int *)(temp_v14 + temp_v7 * 0x408);
      temp_v9 = *puVar20;
      temp_v10 = puVar20[1];
      if (((temp_v10 & temp_v15) != 0 || (temp_v9 & temp_v12) != 0) &&
         ((temp_v9 & temp_v5) == 0 && (temp_v10 & temp_v6) == 0)) {
        if ((!((temp_v9 & temp_v0) == 0 && (temp_v10 & temp_v4) == 0)) ||
           (!((temp_v9 & temp_v13) == 0 && (temp_v10 & temp_v3) == 0))) {
          temp_v11 = (short)param_1[0x131c] + 1;
        }
        else {
          temp_v17 = 0;
          temp_v8 = *(int *)(temp_v14 + temp_v7 * 0x408 + 0x404);
          if (temp_v8 != 0) {
            temp_v17 = (unsigned short)*(unsigned char *)(temp_v8 + 0x1f);
          }
          temp_v11 = (short)param_1[0x131c] + temp_v17;
        }
        *(short *)(param_1 + 0x131c) = temp_v11;
      }
      temp_v7 = temp_v7 + 1;
    } while ((int)temp_v7 < (int)temp_v16);
  }
  if ((temp_v23 == 0 && temp_v22 == 0) &&
     ((temp_v24 & DAT_00573ae8) == 0 && (temp_v25 & DAT_00573aec) == 0)) {
    temp_v11 = (unsigned short)(unsigned char)param_1[0x1394] + (short)param_1[0x131c];
    *(short *)(param_1 + 0x131c) = temp_v11;
    if (temp_v11 >= 9) {
      *(unsigned short *)(param_1 + 0x131c) = 8;
    }
    temp_v8 = FUN_0018719c(0x590);
    if (temp_v8 != 0) {
      *(unsigned short *)(param_1 + 0x131c) = 8;
      FUN_003fd63c(0x590,0,1);
    }
  }
  temp_v8 = FUN_002626e0();
  if (((temp_v8 != 0) && (-1 < (int)param_1[0x3c])) &&
     ((param_1[0x1169] & DAT_005739f4) != 0 || (*puVar15 & DAT_005739f0) != 0)) {
    temp_v8 = FUN_00261424();
    temp_v11 = (short)param_1[0x131c] + (short)(temp_v8 / 2);
    *(short *)(param_1 + 0x131c) = temp_v11;
    if (temp_v11 >= 6) {
      *(unsigned short *)(param_1 + 0x131c) = 6;
    }
  }
  temp_v1 = (unsigned short)param_1[0x131c];
  *(unsigned short *)(param_1 + 0x131d) = temp_v1;
  *(unsigned short *)((int)param_1 + 0x4c72) = temp_v1;
  *(unsigned short *)((int)param_1 + 0x4c76) = temp_v1;
  *(unsigned short *)(param_1 + 0x131e) = temp_v1;
  *(unsigned short *)((int)param_1 + 0x4c7a) = temp_v1;
  temp_v18 = (DAT_005739f0 & *puVar15) == 0;
  temp_v19 = (DAT_005739f4 & param_1[0x1169]) == 0;
  if (temp_v18 && temp_v19) {
    temp_v7 = 0;
    temp_v8 = 4;
  }
  else {
    temp_v7 = 4;
    temp_v8 = 0x32;
  }
  temp_v15 = temp_v7 + temp_v8;
  temp_v12 = temp_v7;
  if (temp_v7 < temp_v15) {
    do {
      FUN_004c3c84(temp_v12,0x14,0);
      FUN_004c3c84(temp_v12,0x15,0);
      FUN_004c3c84(temp_v12,0x18,0);
      FUN_004c3c84(temp_v12,0x19,0);
      FUN_004c3c84(temp_v12,0x27,0);
      FUN_004c3c84(temp_v12,0x28,0);
      FUN_004c3c84(temp_v12,0x29,0);
      temp_v8 = FUN_004c3a98(temp_v12,0x24);
      if (0 < temp_v8) {
        FUN_004c571c(temp_v12,0x24,0xffffffff,0);
      }
      temp_v8 = FUN_004c3a98(temp_v12,0x25);
      if (0 < temp_v8) {
        FUN_004c571c(temp_v12,0x25,0xffffffff,0);
      }
      puVar20 = param_1;
      FUN_003f0e20(param_1,temp_v12);
      if (puVar20 != (unsigned int *)0x0) {
        *(unsigned int *)((int)puVar20 + 0x2f5) = 0;
        *(unsigned int *)((int)puVar20 + 0x2f9) = 0;
        *(unsigned int *)((int)puVar20 + 0x2fd) = 0;
        *(unsigned int *)((int)puVar20 + 0x301) = 0;
        *(unsigned int *)((int)puVar20 + 0x305) = 0;
        *(unsigned char *)((int)puVar20 + 0x309) = 0;
        temp_v0 = ~DAT_005739d0;
        puVar20[1] = puVar20[1] & ~DAT_005739d4;
        *puVar20 = *puVar20 & temp_v0;
      }
      temp_v12 = temp_v12 + 1;
    } while ((int)temp_v12 < (int)temp_v15);
  }
  temp_v4 = DAT_00573990;
  temp_v0 = DAT_00573988;
  temp_v12 = DAT_00573980;
  temp_v8 = 0;
  temp_v20[2] = DAT_00573980;
  temp_v20[3] = DAT_00573984;
  temp_v20[0] = DAT_00573988;
  temp_v20[1] = DAT_0057398c;
  temp_v21 = DAT_00573994;
  do {
    if ((((short)param_1[temp_v8 * 3 + 0x1171] != 0) &&
        (temp_v13 = param_1[temp_v8 * 3 + 0x1170], temp_v13 != 0)) &&
       (((temp_v3 = temp_v4, temp_v18 && temp_v19 && (temp_v3 = temp_v0, (temp_v12 & temp_v13) != 0)) ||
        ((temp_v13 & temp_v3) != 0)))) {
      *(unsigned char *)(param_1 + temp_v8 * 3 + 0x1172) = 0;
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 0x80);
  if (temp_v7 < temp_v15) {
    do {
      puVar20 = (unsigned int *)(param_1[0x7ff] + temp_v7 * 0x408);
      if ((((DAT_00573978 & *puVar20) != 0 || (DAT_0057397c & puVar20[1]) != 0) &&
          ((puVar20[1] & DAT_005739a4) == 0 && (*puVar20 & DAT_005739a0) == 0)) &&
         ((-1 < (short)puVar20[2] && (temp_v8 = FUN_004c3a98((int)(short)puVar20[2],0xd), 0 < temp_v8)))
         ) {
        FUN_004c571c((int)(short)puVar20[2],0xd,0xffffffff,0);
      }
      temp_v7 = temp_v7 + 1;
    } while ((int)temp_v7 < (int)temp_v15);
  }
  temp_v8 = 0;
  param_1[0x2a] = 0;
  temp_v7 = DAT_00573ac8;
  while( 1 ) {
    puVar20 = (unsigned int *)(param_1[0x7ff] + temp_v8 * 0x408);
    if ((((puVar20[1] & DAT_0057397c) != 0 || (*puVar20 & DAT_00573978) != 0) &&
        ((*puVar20 & DAT_005739a0) == 0 && (puVar20[1] & DAT_005739a4) == 0)) &&
       ((short)puVar20[0xcd] != 0)) break;
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x6d) {
      temp_v7 = *puVar15 & ~DAT_00573ac8;
      param_1[0x1169] = ~DAT_00573acc & param_1[0x1169];
      *puVar15 = temp_v7;
LAB_003861d0:
      if ((DAT_00573acc & param_1[0x1169]) == 0 && (DAT_00573ac8 & temp_v7) == 0) {
        if ((temp_v7 & DAT_00573b00) == 0 && (param_1[0x1169] & DAT_00573b04) == 0) {
          FUN_003ed6e8(param_1);
        }
        temp_v7 = DAT_00573b00;
        param_1[0x1169] = param_1[0x1169] & ~DAT_00573b04;
        *puVar15 = *puVar15 & ~temp_v7;
      }
      if ((param_1[0x1169] & DAT_00573a64) == 0 && (*puVar15 & DAT_00573a60) == 0) {
        FUN_003f26d4(param_1);
      }
      else {
        temp_v7 = ~DAT_00573a60;
        param_1[0x1169] = param_1[0x1169] & ~DAT_00573a64;
        *puVar15 = *puVar15 & temp_v7;
      }
      temp_v7 = param_1[0x1169];
      temp_v12 = *puVar15;
      temp_v18 = (DAT_005739f4 & temp_v7) != 0;
      temp_v19 = (DAT_005739f0 & temp_v12) != 0;
      temp_v20[0] = 0;
      if (((DAT_005739e8 & temp_v12) != 0 || (DAT_005739ec & temp_v7) != 0) &&
         ((char)param_1[0x116e] == '\0')) {
        temp_v20[0] = 1;
      }
      temp_v20[1] = (unsigned int)((temp_v7 & DAT_00573a04) != 0 || (temp_v12 & DAT_00573a00) != 0);
      FUN_004a9a64(DAT_0057a9c8,temp_v18 || temp_v19,
                   (int)(char)((char)temp_v26 + (char)(short)param_1[0x131c]),(int)(char)temp_v26);
      temp_v7 = *puVar15 | DAT_00573a00;
      temp_v12 = param_1[0x1169] | DAT_00573a04;
      *puVar15 = temp_v7;
      param_1[0x1169] = temp_v12;
      if (((temp_v12 & DAT_00573a3c) != 0 || (temp_v7 & DAT_00573a38) != 0) && (!temp_v18 && !temp_v19)) {
        temp_v12 = (temp_v12 & ~DAT_00573a3c) | DAT_00573a44;
        *puVar15 = (temp_v7 & ~DAT_00573a38) | DAT_00573a40;
        param_1[0x1169] = temp_v12;
        FUN_004a9c84(DAT_0057a9c8);
      }
      temp_v8 = FUN_002e2b38();
      if ((temp_v8 != 0) &&
         ((temp_v8 = btlUnitGet(g_btlScriptUnit), temp_v8 == 0 ||
          (temp_v8 = FUN_004ec93c(g_btlScriptUnit), temp_v8 == 0)))) {
        if (((DAT_005739f4 & param_1[0x1169]) == 0 && (DAT_005739f0 & *puVar15) == 0) &&
           ((*puVar15 & DAT_00573a28) == 0 && (param_1[0x1169] & DAT_00573a2c) == 0)) {
          temp_v7 = flagSelectVariant();
          temp_v18 = temp_v7 == 1;
          if (temp_v18) {
            temp_v7 = param_1[0x2b];
          }
          temp_v19 = temp_v18 && temp_v7 == 2;
          if (temp_v18 && temp_v7 == 2) {
            temp_v19 = param_1[0x2d] == 1;
          }
          if (temp_v19) {
            temp_v20[0] = 0x124;
            temp_v20[1] = 0x125;
            temp_v8 = FUN_0014bef4(1);
            temp_v7 = temp_v20[temp_v8];
            FUN_004fdc9c(0,0,0xbb,temp_v7);
            FUN_0047f1c4(temp_v7);
            param_1[0x2b] = 1;
            param_1[0x2d] = 0;
          }
        }
      }
      param_1[0x1358] = 0;
      temp_v8 = btlUnitGet(g_btlScriptUnit);
      if ((temp_v8 == 0) || (temp_v8 = FUN_004ec93c(g_btlScriptUnit), temp_v8 == 0)) {
        temp_v7 = param_1[0x1169];
        temp_v12 = *puVar15;
        if (((DAT_005739f0 & temp_v12) == 0 && (DAT_005739f4 & temp_v7) == 0) &&
           (((((DAT_00573a28 & temp_v12) == 0 && (DAT_00573a2c & temp_v7) == 0 &&
              ((temp_v7 & DAT_00573aec) == 0 && (temp_v12 & DAT_00573ae8) == 0)) &&
             ((temp_v7 & DAT_00573a24) == 0 && (temp_v12 & DAT_00573a20) == 0)) &&
            (temp_v8 = FUN_003e48bc(), temp_v8 != 0)))) {
          temp_v8 = FUN_003e4978();
          temp_v2 = '\0';
          if (temp_v8 != 0) {
            temp_v2 = (char)param_1[0x1334];
          }
          if (temp_v8 != 0 && temp_v2 != '\0') {
            FUN_003f0070(param_1);
          }
        }
      }
      temp_v7 = DAT_00573ad0;
      param_1[0x1169] = param_1[0x1169] & ~DAT_00573ad4;
      *puVar15 = *puVar15 & ~temp_v7;
      return;
    }
  }
  param_1[0x1169] = param_1[0x1169] | DAT_00573acc;
  temp_v7 = temp_v7 | *puVar15;
  *puVar15 = temp_v7;
  goto LAB_003861d0;
}

} /* extern "C" */
