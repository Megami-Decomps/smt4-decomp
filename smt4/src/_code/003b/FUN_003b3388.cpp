/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b3388` (_code @ 0x3b3388, 0x1614 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b0750(...);
int pairSetHalves(...);
int FUN_002b93c8(...);
int FUN_002be370(...);
int FUN_002be650(...);
int vec2GetXInt(...);
int efctSetSpeed(...);

int messageKindForward(...);
int FUN_00288844(...);
int gameGetUnitRecord(...);
int FUN_002b6dd8(...);
int FUN_002ba12c(...);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_0031eba0(...);
int VectorSignedToFloat(...);
int __aeabi_idivmod(...);

typedef int romwright_code(...);
/* stack frame of param_3: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
} param_3_stack;

extern unsigned char LAB_003b3c9c; /* 0x3b3c9c */
extern unsigned char LAB_003b4078; /* 0x3b4078 */
extern unsigned char LAB_003b4818; /* 0x3b4818 */
extern unsigned char LAB_003b4820; /* 0x3b4820 */
extern int g_titleScene; /* 0x44ea00 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int unlockFlagTest(int);
/* Supplied declaration required: messageKindForward. */
/* Supplied declaration required: FUN_00288844. */
extern int FUN_00295c60(unsigned short, int);
extern int dataTable9EntryOrZero(int);
/* Supplied declaration required: gameGetUnitRecord. */
extern int gameGetSlotTable(void);
extern int categoryGetColor(int);
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: pairSetHalves. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0031eba0. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_003b3388(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 24 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *puVar9;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  char *pcVar12;
  int *piVar13;
  unsigned int temp_v11;
  int *piVar15;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int in_fpscr;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  int temp_v21;
  int aiStack_108 [4];
  int aiStack_f8 [4];
  char acStack_e8 [4];
  int *temp_v22;
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  unsigned char temp_v23 [64];
  int temp_v24;
  unsigned int temp_v25 [5];
  int temp_v26;
  unsigned int temp_v27 [4];
  int temp_v28;
  int temp_v29;
  int iStack_30;
  int temp_v30;
  int iStack_28;
  
  temp_v19 = 0.32f;
  temp_v20 = 0x3ea3d70a00000000;
  iStack_30 = param_1;
  temp_v30 = param_2;
  iStack_28 = param_3;
  FUN_002ba12c(g_titleScene);
  temp_v21 = 0;
  temp_v15 = 0x3f800000;
  temp_v14 = (int)temp_v19 + temp_v30;
  temp_v4 = gameGetSlotTable();
  FUN_002bf380(2,0x28,0,temp_v14,param_3,0x65);
  pcVar12 = (char *)(param_1 + 0x3560);
  if (*pcVar12 == '\0') {
    FUN_002bf380(2,0x28,1,temp_v14,param_3,0x65);
    FUN_002bf288(2,0x28,0x3c,temp_v14,param_3,0x6a);
    FUN_002bf288(2,0x28,4,temp_v14,param_3,0x6a);
  }
  if (*pcVar12 == '\x01') {
    FUN_002bf380(2,0x28,1,temp_v14,param_3,0x65);
    FUN_002bf288(2,0x28,0x3d,temp_v14,param_3,0x6a);
    FUN_002bf288(2,0x28,5,temp_v14,param_3,0x6a);
  }
  if (*pcVar12 == '\x02') {
    FUN_002bf380(2,0x28,1,temp_v14,param_3,0x65);
    FUN_002bf288(2,0x28,6,temp_v14,param_3,0x6a);
  }
  temp_v14 = g_titleScene;
  temp_v5 = packNibblesAndByte(6,1,0);
  piVar13 = (int *)(temp_v14 + 0x12ac);
  temp_v8 = piVar13[*piVar13 + 2];
  piVar13[*piVar13 + 2] = temp_v5;
  if (*(char *)(temp_v14 + 0x12c4) != '\0' || temp_v8 != temp_v5) {
    (**(romwright_code **)(temp_v14 + 0x12c8))();
    *(unsigned char *)(temp_v14 + 0x12c4) = 0;
  }
  temp_v16 = romwright_piece_4_4(0x3e9eb852,temp_v15);
  temp_v18 = 0x3e99999a;
  temp_v14 = param_1 + 0xd500;
  temp_v5 = 0;
  do {
    acStack_e8[temp_v5] = '\0';
    temp_v8 = FUN_002bf4f8(0x28,temp_v5 + 0x30);
    if (temp_v5 == 0) {
      temp_v12 = 0xffffffff;
      temp_v13 = temp_v12;
LAB_003b35ac:
      temp_v19 = (float)((unsigned long long)temp_v16 >> 0x20);
      FUN_002ba12c(g_titleScene);
      temp_v6 = (int)temp_v19 + temp_v30;
      if ((0 < *(short *)(param_1 + 0xd49a)) || (*(char *)(temp_v14 + 0x30) < temp_v21)) {
        temp_v19 = (float)temp_v18;
        FUN_002ba12c(g_titleScene);
        temp_v6 = (int)temp_v19 + temp_v30;
      }
      acStack_e8[temp_v5] = '\x01';
      aiStack_e0[temp_v5] = temp_v6;
      aiStack_d0[temp_v5] = param_3;
      temp_v3 = *(short *)(temp_v8 + 8);
      aiStack_108[temp_v5] = (int)temp_v3;
      temp_v2 = *(short *)(temp_v8 + 10);
      aiStack_f8[temp_v5] = (int)temp_v2;
      temp_v25[temp_v5] = temp_v12;
      temp_v27[temp_v5] = temp_v13;
      FUN_002bf288(2,0x28,7,temp_v3 + temp_v6,temp_v2 + param_3,0x6a);
    }
    else if (-1 < *(char *)(temp_v4 + temp_v5 + 0x9107)) {
      temp_v6 = gameGetUnitRecord();
      temp_v13 = (unsigned int)*(unsigned short *)(temp_v6 + 0x46);
      temp_v12 = (unsigned int)*(char *)(temp_v4 + temp_v5 + 0x9107);
      goto LAB_003b35ac;
    }
    temp_v8 = g_titleScene;
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  temp_v14 = packNibblesAndByte(6,7,0);
  piVar13 = (int *)(temp_v8 + 0x12ac);
  temp_v21 = piVar13[*piVar13 + 2];
  piVar13[*piVar13 + 2] = temp_v14;
  if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v21 != temp_v14) {
    (**(romwright_code **)(temp_v8 + 0x12c8))();
    *(unsigned char *)(temp_v8 + 0x12c4) = 0;
  }
  temp_v14 = 0;
  do {
    if (acStack_e8[temp_v14] != '\0') {
      param_3 = aiStack_d0[temp_v14];
      temp_v21 = aiStack_e0[temp_v14];
      FUN_002bf288(2,0x28,8,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x6a);
      FUN_002bf288(2,0x28,9,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x6a);
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  temp_v24 = 0;
  temp_v26 = FUN_002bf4f8(0x28,7);
  temp_v14 = FUN_002bf4f8(0x28,0x1d);
  temp_v21 = 0;
  do {
    if (acStack_e8[temp_v21] != '\0') {
      temp_v6 = aiStack_e0[temp_v21];
      param_3 = aiStack_d0[temp_v21];
      temp_v22 = (int *)temp_v27[temp_v21];
      temp_v5 = -1;
      temp_v8 = *(int *)(param_1 + temp_v21 * 4 + 0xd570);
      if ((int)temp_v25[temp_v21] < 0) {
        temp_v7 = gameGetPlayerData();
        temp_v1 = *(unsigned short *)(temp_v7 + 0x72);
      }
      else {
        temp_v7 = gameGetUnitRecord();
        temp_v1 = *(unsigned short *)(temp_v7 + 0x44);
      }
      temp_v7 = 0;
      temp_v13 = 1;
      do {
        if (((unsigned int)temp_v1 & (1 << (temp_v13 & 0xff))) != 0) {
          if (temp_v7 == temp_v8) {
            temp_v5 = categoryGetColor((int)(short)temp_v13);
            break;
          }
          temp_v7 = temp_v7 + 1;
        }
        temp_v13 = temp_v13 + 1;
      } while ((int)temp_v13 < 0xb);
      if (temp_v24 != temp_v5) {
        temp_v24 = temp_v5;
        drawSetColorFromRGBA8(temp_v5);
      }
      FUN_0031eba0((int)(short)(int)temp_v22,aiStack_108[temp_v21] + (int)*(short *)(temp_v14 + 8) + temp_v6,
                   aiStack_f8[temp_v21] + (int)*(short *)(temp_v14 + 10) + param_3,0x6d,1,
                   aiStack_108[temp_v21] + temp_v6,aiStack_f8[temp_v21] + param_3,
                   (int)**(short **)(temp_v26 + 0xc),(int)(*(short **)(temp_v26 + 0xc))[1]);
    }
    temp_v15 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 4);
  FUN_002bed3c();
  temp_v20 = romwright_piece_4_4(temp_v15,0x3e947ae1);
  temp_v14 = 0;
  do {
    if (acStack_e8[temp_v14] != '\0') {
      temp_v19 = (float)temp_v20;
      temp_v11 = temp_v25[temp_v14];
      param_3 = aiStack_d0[temp_v14];
      FUN_002ba12c(g_titleScene);
      temp_v12 = 0;
      temp_v21 = aiStack_f8[temp_v14];
      temp_v13 = 1;
      temp_v5 = (int)temp_v19 + temp_v30 + aiStack_108[temp_v14];
      do {
        if ((int)temp_v11 < 0) {
          temp_v8 = gameGetPlayerData();
          temp_v1 = *(unsigned short *)(temp_v8 + 0x72);
        }
        else {
          temp_v8 = gameGetUnitRecord(temp_v11);
          temp_v1 = *(unsigned short *)(temp_v8 + 0x44);
        }
        if (((unsigned int)temp_v1 & (1 << (temp_v13 & 0xff))) != 0) {
          temp_v8 = FUN_002bf4f8(0x28,temp_v12 * 2 + 0x11e);
          FUN_00288844(*(short *)(temp_v8 + 8) + temp_v5,
                       (int)*(short *)(temp_v8 + 10) + temp_v21 + param_3,0x24);
          temp_v8 = FUN_002bf4f8(0x28,temp_v12 * 2 + 0x11d);
          messageKindForward((int)(short)temp_v13,*(short *)(temp_v8 + 8) + temp_v5,
                       (int)*(short *)(temp_v8 + 10) + temp_v21 + param_3,0x24);
          temp_v12 = (temp_v12 + 1) & 0xffff;
          if (temp_v12 >= 6) break;
        }
        temp_v13 = temp_v13 + 1;
      } while ((int)temp_v13 < 0xb);
      if (temp_v12 >= 2) {
        temp_v5 = param_1 + temp_v14 * 4;
        piVar13 = (int *)(temp_v5 + 0xd560);
        temp_v21 = *piVar13;
        *piVar13 = temp_v21 + 1;
        if (temp_v21 + 1 >= 0x30) {
          piVar15 = (int *)(temp_v5 + 0xd570);
          __aeabi_idivmod(*piVar15 + 1,temp_v12);
          *piVar15 = temp_v9;
          *piVar13 = 0;
        }
      }
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  temp_v14 = 0;
  do {
    if (acStack_e8[temp_v14] != '\0') {
      param_3 = aiStack_d0[temp_v14];
      FUN_002bf380(2,0x28,2,aiStack_108[temp_v14] + aiStack_e0[temp_v14],aiStack_f8[temp_v14] + param_3,
                   0x6f);
    }
    temp_v13 = (unsigned int)temp_v16;
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  temp_v14 = FUN_002bf4f8(0x28,0x1e);
  temp_v17 = (unsigned long long)temp_v13;
  temp_v21 = 0;
  do {
    if (acStack_e8[temp_v21] != '\0') {
      if (temp_v21 != 0) {
        temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v21 + 0x9107));
        temp_v15 = FUN_002bd068(*(unsigned short *)(temp_v5 + 0x46));
        textFormatBuffer(temp_v23,&LAB_003b3c9c,temp_v15);
      }
      else {
        temp_v15 = FUN_002bd1fc();
        textFormatBuffer(temp_v23,&LAB_003b3c9c,temp_v15);
      }
      temp_v5 = aiStack_e0[temp_v21];
      param_3 = aiStack_d0[temp_v21];
      puVar9 = temp_v23;
      FUN_002b6dd8(puVar9,1);
      VectorSignedToFloat(aiStack_f8[temp_v21] + (int)*(short *)(temp_v14 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v5 + ((int)**(short **)(temp_v14 + 0xc) - (int)puVar9) / 2 +
                          aiStack_108[temp_v21] + (int)*(short *)(temp_v14 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(1,0xffffffff,temp_v23,(int)*(short *)(temp_v14 + 8));
    }
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 4);
  temp_v14 = 0;
  do {
    if (acStack_e8[temp_v14] != '\0') {
      if (temp_v14 != 0) {
        temp_v21 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v14 + 0x9107));
        temp_v0 = *(unsigned char *)(temp_v21 + 0x48);
        temp_v5 = *(char *)(temp_v4 + temp_v14 + 0x9107) + 1;
      }
      else {
        temp_v5 = 0;
        temp_v21 = gameGetPlayerData();
        temp_v0 = *(unsigned char *)(temp_v21 + 0x76);
      }
      temp_v13 = (unsigned int)temp_v0;
      param_3 = aiStack_d0[temp_v14];
      temp_v21 = aiStack_e0[temp_v14];
      FUN_002bf288(2,0x28,0x10,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x74);
      FUN_002bf288(2,0x28,0xf,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x74);
      if ((*(short *)(param_1 + temp_v5 * 2 + 0xd49a) >= 1) ||
         ((int)temp_v13 > (int)*(char *)(param_1 + temp_v5 + 0xd530))) {
        FUN_002bf288(2,0x28,0x18,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x74);
        FUN_002bf288(2,0x28,0x19,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x74);
      }
      else {
        FUN_002bf288(2,0x28,0x16,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x74);
        FUN_002bf288(2,0x28,0x17,aiStack_108[temp_v14] + temp_v21,aiStack_f8[temp_v14] + param_3,0x74);
      }
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  temp_v14 = FUN_002bf4f8(0x28,0x27);
  drawSetColorFromRGBA8(0xff);
  temp_v21 = 0;
  do {
    if (acStack_e8[temp_v21] != '\0') {
      if (temp_v21 != 0) {
        temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v21 + 0x9107));
        temp_v0 = *(unsigned char *)(temp_v5 + 0x48);
        temp_v8 = *(char *)(temp_v4 + temp_v21 + 0x9107) + 1;
      }
      else {
        temp_v8 = 0;
        temp_v5 = gameGetPlayerData();
        temp_v0 = *(unsigned char *)(temp_v5 + 0x76);
      }
      param_3 = aiStack_d0[temp_v21];
      FUN_002bdf94(6,aiStack_e0[temp_v21] + (int)*(short *)(temp_v14 + 8) + aiStack_108[temp_v21],
                   aiStack_f8[temp_v21] + (int)*(short *)(temp_v14 + 10) + param_3,1,2,0x79,
                   &LAB_003b4078,(unsigned int)temp_v0 + (int)*(short *)(param_1 + temp_v8 * 2 + 0xd49a));
    }
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 4);
  FUN_002bed3c();
  temp_v14 = FUN_002bf4f8(0x28,0x25);
  drawSetColorFromRGBA8(0x72e027ff);
  temp_v21 = 0;
  do {
    if (acStack_e8[temp_v21] != '\0') {
      if (temp_v21 != 0) {
        temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v21 + 0x9107));
        temp_v8 = *(char *)(temp_v4 + temp_v21 + 0x9107) + 1;
        if (*(char *)(param_1 + temp_v8 + 0xd4fe) != '\0') {
          temp_v5 = 0;
        }
        else {
          temp_v5 = FUN_00295c60(*(unsigned short *)(temp_v5 + 0x46),
                               (unsigned int)*(unsigned char *)(temp_v5 + 0x48) +
                               (int)*(short *)(param_1 + temp_v8 * 2 + 0xd49a));
          temp_v8 = param_1 + temp_v8 * 8;
          temp_v5 = temp_v5 - ((*(unsigned int *)(temp_v8 + 0xd3a0) >> 0xc) | (*(int *)(temp_v8 + 0xd3a4) << 0x14)
                          );
        }
      }
      else {
        temp_v5 = gameGetPlayerData();
        if (*(char *)(param_1 + 0xd4fe) != '\0') {
          temp_v5 = 0;
        }
        else {
          temp_v5 = dataTable9EntryOrZero((unsigned int)*(unsigned char *)(temp_v5 + 0x76) + (int)*(short *)(param_1 + 0xd49a));
          temp_v5 = temp_v5 - ((*(unsigned int *)(param_1 + 0xd3a0) >> 0xc) |
                          (*(int *)(param_1 + 0xd3a4) << 0x14));
        }
      }
      param_3 = aiStack_d0[temp_v21];
      FUN_002bdf94(0,aiStack_e0[temp_v21] + aiStack_108[temp_v21] + (int)*(short *)(temp_v14 + 8),
                   aiStack_f8[temp_v21] + (int)*(short *)(temp_v14 + 10) + param_3,1,7,0x79,
                   &LAB_003b4078,temp_v5);
    }
    temp_v13 = (unsigned int)temp_v17;
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 4);
  FUN_002bed3c();
  temp_v14 = FUN_002bf4f8(0x28,0x11);
  temp_v17 = (unsigned long long)temp_v13;
  temp_v21 = 0;
  do {
    if (acStack_e8[temp_v21] != '\0') {
      if (temp_v21 == 0) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = *(char *)(temp_v4 + temp_v21 + 0x9107) + 1;
      }
      param_3 = aiStack_d0[temp_v21];
      temp_v8 = aiStack_e0[temp_v21];
      if (*(char *)(param_1 + temp_v5 + 0xd4fe) != '\0') {
        FUN_002bf288(2,0x28,0x14,aiStack_108[temp_v21] + temp_v8,aiStack_f8[temp_v21] + param_3,0x79);
        temp_v6 = (int)*(short *)(param_1 + temp_v5 * 2 + 0xd4cc);
        if (temp_v6 < 8) {
          VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          efctSetSpeed();
        }
        FUN_002bf288(2,0x28,0x15,aiStack_108[temp_v21] + temp_v8,aiStack_f8[temp_v21] + param_3,0x7e);
        efctSetSpeed();
      }
      else {
        FUN_002b0750(2,0x28,0x11,aiStack_108[temp_v21] + temp_v8,aiStack_f8[temp_v21] + param_3,
                     (int)*(short *)(param_1 + temp_v5 * 2 + 0xd468),
                     (int)*(short *)(*(int *)(temp_v14 + 0xc) + 2),0x79);
      }
      if (*(char *)(param_1 + temp_v5 + 0xd4fe) == '\0') {
        FUN_002bf380(2,0x28,3,(int)*(short *)(param_1 + temp_v5 * 2 + 0xd468) + aiStack_108[temp_v21] +
                              temp_v8,aiStack_f8[temp_v21] + param_3,0x7e);
      }
    }
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 4);
  FUN_002bf4f8(0x28,0x11);
  temp_v14 = 0;
  do {
    if (acStack_e8[temp_v14] != '\0') {
      if (temp_v14 == 0) {
        temp_v21 = 0;
      }
      else {
        temp_v21 = *(char *)(temp_v4 + temp_v14 + 0x9107) + 1;
      }
      temp_v8 = aiStack_e0[temp_v14];
      temp_v5 = 0;
      temp_v13 = 1;
      do {
        if (temp_v13 <= *(unsigned int *)(param_1 + temp_v21 * 4 + 0x35b4)) {
          VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b93c8(param_1 + (temp_v14 * 7 + temp_v5 + 0x1e) * 0x8c + 0x20);
        }
        temp_v5 = temp_v5 + 1;
        temp_v13 = temp_v13 * 10;
      } while ((int)temp_v13 < 1000000);
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  temp_v21 = 0;
  temp_v14 = 0;
  do {
    temp_v5 = g_titleScene;
    if (acStack_e8[temp_v14] != '\0') {
      if (temp_v14 == 0) {
        temp_v8 = 0;
      }
      else {
        temp_v8 = *(char *)(temp_v4 + temp_v14 + 0x9107) + 1;
      }
      temp_v6 = aiStack_e0[temp_v14];
      if (*(char *)(param_1 + temp_v8 + 0xd4fe) != '\0') {
        if (temp_v21 == 0) {
          temp_v7 = packNibblesAndByte(6,1,0);
          piVar13 = (int *)(temp_v5 + 0x12ac);
          temp_v10 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = temp_v7;
          if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v10 != temp_v7) {
            (**(romwright_code **)(temp_v5 + 0x12c8))();
            *(unsigned char *)(temp_v5 + 0x12c4) = 0;
          }
        }
        VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b93c8(param_1 + temp_v8 * 0x8c + 0x1fd8);
        temp_v21 = temp_v21 + 1;
      }
    }
    temp_v5 = g_titleScene;
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  if (temp_v21 != 0) {
    temp_v14 = packNibblesAndByte(6,7,0);
    piVar13 = (int *)(temp_v5 + 0x12ac);
    temp_v21 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = temp_v14;
    if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v21 != temp_v14) {
      (**(romwright_code **)(temp_v5 + 0x12c8))();
      *(unsigned char *)(temp_v5 + 0x12c4) = 0;
    }
  }
  temp_v14 = 0;
  do {
    if (acStack_e8[temp_v14] != '\0') {
      temp_v21 = FUN_002bf4f8(0x28,temp_v14 + 0x30);
      if (temp_v14 != 0) {
        if (*(char *)(temp_v4 + temp_v14 + 0x9107) < '\0') goto LAB_003b4444;
        temp_v5 = gameGetUnitRecord();
        temp_v0 = *(unsigned char *)(temp_v5 + 0x48);
        temp_v8 = *(char *)(temp_v4 + temp_v14 + 0x9107) + 1;
      }
      else {
        temp_v8 = 0;
        temp_v5 = gameGetPlayerData();
        temp_v0 = *(unsigned char *)(temp_v5 + 0x76);
      }
      temp_v5 = param_1 + temp_v8 * 2;
      param_3 = aiStack_d0[temp_v14];
      if ((0 < *(short *)(temp_v5 + 0xd49a)) ||
         ((int)*(char *)(param_1 + temp_v8 + 0xd530) < (int)(unsigned int)temp_v0)) {
        temp_v5 = (int)*(short *)(temp_v5 + 0xd4cc);
        temp_v8 = 0;
        if ((0 < temp_v5) && (temp_v5 < 8)) {
          temp_v8 = temp_v5 * -2 + 0x14;
          if (temp_v8 < 0) {
            temp_v8 = 0;
          }
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        efctSetSpeed();
        temp_v19 = (float)temp_v20;
        FUN_002ba12c(g_titleScene);
        temp_v5 = (int)temp_v19 + temp_v30;
        FUN_002bf288(2,0x28,0x1b,*(short *)(temp_v21 + 8) + temp_v5,
                     (int)*(short *)(temp_v21 + 10) + temp_v8 + param_3,0xce);
        efctSetSpeed();
        FUN_002bf288(2,0x28,0x1c,*(short *)(temp_v21 + 8) + temp_v5,
                     (int)*(short *)(temp_v21 + 10) + temp_v8 + param_3,0xce);
        efctSetSpeed();
      }
    }
LAB_003b4444:
    temp_v13 = (unsigned int)temp_v17;
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 4);
  temp_v19 = (float)((unsigned long long)temp_v20 >> 0x20);
  temp_v21 = 0;
  FUN_002ba12c(g_titleScene);
  temp_v17 = (unsigned long long)temp_v13;
  temp_v14 = 0;
  temp_v4 = (int)temp_v19 + temp_v30;
  temp_v22 = (int *)(param_1 + 0x3544);
  do {
    temp_v5 = *(int *)(param_1 + 0x352c);
    if (temp_v5 < 3) break;
    if ((temp_v5 != 3) || (temp_v14 < *temp_v22)) {
      temp_v28 = param_1 + temp_v14 * 4;
      piVar13 = (int *)(temp_v28 + 0x3618);
      if (*piVar13 != 0) {
        temp_v29 = param_1 + temp_v14 * 0x8c;
        temp_v5 = vec2GetXInt(temp_v29 + 0x2d84);
        efctSetSpeed();
        temp_v8 = FUN_002bf4f8(0x28,temp_v14 + 0x47);
        temp_v5 = temp_v5 + temp_v4;
        FUN_002bf288(2,0x28,0x3e,*(short *)(temp_v8 + 8) + temp_v5,*(short *)(temp_v8 + 10) + param_3,
                     0x6a);
        temp_v6 = *piVar13;
        FUN_002be650(temp_v6,0);
        textFormatBuffer(temp_v23,&LAB_003b4818,temp_v6);
        temp_v6 = FUN_002bf4f8(0x28,0x43);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v6 + 10) + param_3,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v5,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0x323232ff,temp_v23,(int)*(short *)(temp_v8 + 8));
        temp_v6 = FUN_002bf4f8(0x28,0x42);
        FUN_002be370((int)(short)*piVar13,
                     (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v5,
                     (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v6 + 10) + param_3,0x6f,0);
        temp_v6 = FUN_002bf4f8(0x28,0x46);
        FUN_002bdf94(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v5,
                     (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v6 + 10) + param_3,1,3,0x6f,
                     &LAB_003b4820,*(unsigned int *)(temp_v28 + 0x3630));
        temp_v8 = unlockFlagTest(*piVar13);
        if ((temp_v8 == 0) && (*(short *)(temp_v29 + 0x31b6) >= 0xe)) {
          temp_v8 = FUN_002bf4f8(0x28,temp_v14 + 0x4d);
          temp_v6 = *(int *)(temp_v28 + 0x3548) % 0x20;
          if (temp_v6 < 0x11) {
            VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            temp_v6 = temp_v6 - 0x10;
            VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          efctSetSpeed(temp_v6);
          FUN_002bf288(2,0x28,0x3f,*(short *)(temp_v8 + 8) + temp_v5,*(short *)(temp_v8 + 10) + param_3,
                       0x74);
          FUN_002bf288(2,0x28,0x40,*(short *)(temp_v8 + 8) + temp_v5,*(short *)(temp_v8 + 10) + param_3,
                       0x79);
          efctSetSpeed();
        }
        temp_v21 = temp_v21 + 1;
      }
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 6);
  temp_v14 = g_titleScene;
  if (0 < temp_v21) {
    temp_v21 = packNibblesAndByte(6,1,0);
    piVar13 = (int *)(temp_v14 + 0x12ac);
    temp_v5 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = temp_v21;
    if (*(char *)(temp_v14 + 0x12c4) != '\0' || temp_v5 != temp_v21) {
      (**(romwright_code **)(temp_v14 + 0x12c8))();
      *(unsigned char *)(temp_v14 + 0x12c4) = 0;
    }
    temp_v14 = FUN_002bf4f8(0x28,0x119);
    temp_v21 = 0;
    do {
      temp_v5 = *(int *)(param_1 + 0x352c);
      if (temp_v5 < 3) break;
      if (((temp_v5 != 3) || (temp_v21 < *temp_v22)) && (*(int *)(param_1 + temp_v21 * 4 + 0x3618) != 0))
      {
        temp_v6 = param_1 + temp_v21 * 0x8c;
        temp_v3 = vec2GetXInt(temp_v6 + 0x2d84);
        temp_v5 = temp_v6 + 0x3158;
        temp_v8 = FUN_002bf4f8(0x28,temp_v21 + 0x47);
        temp_v19 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v14 + 0xc) + 2),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        pairSetHalves(temp_v5,(int)(short)(*(short *)(temp_v8 + 8) + (short)temp_v4 + temp_v3),
                     (int)(short)((short)(int)(temp_v19 * ((float)temp_v17 - *(float *)(temp_v6 + 0x317c))
                                              ) + (short)param_3 + *(short *)(temp_v8 + 10)));
        efctSetSpeed();
        FUN_002b93c8(temp_v5);
      }
      temp_v21 = temp_v21 + 1;
    } while (temp_v21 < 6);
    efctSetSpeed();
    temp_v4 = g_titleScene;
    temp_v14 = packNibblesAndByte(6,7,0);
    piVar13 = (int *)(temp_v4 + 0x12ac);
    temp_v21 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = temp_v14;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v21 != temp_v14) {
      (**(romwright_code **)(temp_v4 + 0x12c8))();
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
  }
  return;
}

} /* extern "C" */
