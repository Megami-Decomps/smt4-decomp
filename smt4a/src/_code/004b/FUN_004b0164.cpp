/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b0164` (_code @ 0x4b0164, 0x189c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int FUN_0015f858(...);
int FUN_001634b4(...);
int vec2GetXInt(...);
int efctSetSpeed(...);
int pairSetHalves(...);
int FUN_00185dd4(...);
int FUN_004b457c(...);

int textFormatBuffer(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int effectDispatchSelector(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int fontMeasureLineAdvance(...);
int drawSetColorFromRGBA8(...);
int renderCtxCalculateStereoParallax(...);
int gameGetSlotRecord(...);
int efctCallRoutineWithSpeedOverride(...);
int FUN_003bb50c(...);
int SBORROW4(...);
int VectorSignedToFloat(...);
int __aeabi_idivmod(...);

typedef int romwright_code(...);
/* stack frame of param_3: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
} param_3_stack;

extern unsigned char LAB_004b0b24; /* 0x4b0b24 */
extern unsigned char LAB_004b10e4; /* 0x4b10e4 */
extern unsigned char LAB_004b1788; /* 0x4b1788 */
extern unsigned char LAB_004b178c; /* 0x4b178c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
extern int vec2GetYInt(int);
/* Supplied declaration required: effectDispatchSelector. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00180114(unsigned short);
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: pairSetHalves. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
extern int markerKindGetColor(int);
/* Supplied declaration required: gameGetSlotRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: efctCallRoutineWithSpeedOverride. */
/* Supplied declaration required: FUN_003bb50c. */
extern int gamePackedFlagTest(unsigned int);
/* Supplied declaration required: FUN_004b457c. */
extern int FUN_004cc8d8(unsigned short, int);
extern int FUN_004ccbf0(int);
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_004b0164(int param_1,int param_2,int param_3)

{
/* irregular: 12 goto(s); irregular input(s): in_fpscr; 26 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *puVar10;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int *piVar14;
  int temp_v13;
  int *piVar16;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17;
  unsigned int in_fpscr;
  unsigned long long temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned int temp_v23;
  int aiStack_120 [4];
  int aiStack_110 [4];
  int temp_v24;
  char acStack_fc [4];
  int temp_v25;
  unsigned int temp_v26;
  int aiStack_f0 [4];
  unsigned int temp_v27 [4];
  int temp_v28;
  int temp_v29;
  unsigned int temp_v30 [4];
  unsigned char temp_v31 [68];
  unsigned int *temp_v32;
  unsigned int temp_v33 [5];
  int temp_v34;
  int temp_v35;
  int iStack_30;
  int temp_v36;
  int temp_v37;
  unsigned long long temp_v38;
  
  temp_v19 = 0.27f;
  temp_v38 = 0x3e8a3d71;
  temp_v25 = 0x1d;
  iStack_30 = param_1;
  temp_v36 = param_2;
  temp_v37 = param_3;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v13 = temp_v37;
  temp_v29 = 0;
  temp_v18 = 0x3f800000;
  temp_v15 = (int)temp_v19 + temp_v36;
  temp_v3 = gameGetSlotTable();
  FUN_00164b5c(2,0x1d,0,temp_v15,temp_v13,0x65);
  temp_v34 = param_1 + 0x4000;
  if (*(char *)(param_1 + 0x4398) == '\0') {
    FUN_00164b5c(2,0x1d,1,temp_v15,temp_v13,0x65);
    FUN_001835b4(2,0x1d,0x3c,temp_v15,temp_v13,0x6a);
    FUN_001835b4(2,0x1d,4,temp_v15,temp_v13,0x6a);
  }
  if (*(char *)(temp_v34 + 0x398) == '\x01') {
    FUN_00164b5c(2,0x1d,1,temp_v15,temp_v13,0x65);
    FUN_001835b4(2,0x1d,0x3d,temp_v15,temp_v13,0x6a);
    FUN_001835b4(2,0x1d,5,temp_v15,temp_v13,0x6a);
  }
  if (*(char *)(temp_v34 + 0x398) == '\x02') {
    FUN_00164b5c(2,0x1d,1,temp_v15,temp_v13,0x65);
    FUN_001835b4(2,0x1d,6,temp_v15,temp_v13,0x6a);
  }
  if (*(char *)(temp_v34 + 0x398) == '\x03') {
    FUN_00164b5c(2,0x1d,1,temp_v15,temp_v13,0x65);
  }
  temp_v15 = 0;
  do {
    acStack_fc[temp_v15] = '\0';
    temp_v4 = FUN_001834a4(temp_v25,temp_v15 + 0x30);
    if (temp_v15 == 0) {
      temp_v14 = 0xffffffff;
      temp_v16 = temp_v14;
LAB_004b0384:
      temp_v19 = (float)temp_v38;
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v6 = (int)temp_v19 + temp_v36;
      if ((0 < *(short *)(param_1 + 0x788a)) || (*(short *)(param_1 + 0x7890) < temp_v29)) {
        temp_v19 = (float)temp_v38;
        renderCtxCalculateStereoParallax(g_renderCtx);
        temp_v6 = (int)temp_v19 + temp_v36;
      }
      acStack_fc[temp_v15] = '\x01';
      temp_v27[temp_v15] = temp_v6;
      aiStack_110[temp_v15] = temp_v13;
      temp_v2 = *(short *)(temp_v4 + 8);
      aiStack_f0[temp_v15] = (int)temp_v2;
      temp_v1 = *(short *)(temp_v4 + 10);
      aiStack_120[temp_v15] = (int)temp_v1;
      temp_v27[temp_v15 + 6] = temp_v14;
      temp_v33[temp_v15] = temp_v16;
      FUN_001835b4(2,temp_v25,7,(int)temp_v2 + temp_v6,temp_v1 + temp_v13,0x6a);
    }
    else if (-1 < *(char *)(temp_v3 + temp_v15 + 0x1c9f)) {
      temp_v5 = gameGetSlotRecord();
      temp_v16 = (unsigned int)*(unsigned short *)(temp_v5 + 0x62);
      temp_v14 = (unsigned int)*(char *)(temp_v3 + temp_v15 + 0x1c9f);
      goto LAB_004b0384;
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      temp_v13 = aiStack_110[temp_v15];
      temp_v16 = temp_v27[temp_v15];
      FUN_001835b4(2,temp_v25,8,aiStack_f0[temp_v15] + temp_v16,aiStack_120[temp_v15] + temp_v13,0x6a);
      FUN_001835b4(2,temp_v25,9,aiStack_f0[temp_v15] + temp_v16,aiStack_120[temp_v15] + temp_v13,0x6a);
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  temp_v28 = 0;
  temp_v35 = FUN_001834a4(temp_v25,7);
  temp_v24 = FUN_001834a4(temp_v25,0x1d);
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      temp_v16 = temp_v27[temp_v15];
      temp_v26 = temp_v33[temp_v15];
      temp_v13 = aiStack_110[temp_v15];
      temp_v4 = -1;
      temp_v5 = *(int *)(param_1 + temp_v15 * 4 + 0x7e5c);
      if ((int)temp_v27[temp_v15 + 6] < 0) {
        temp_v7 = gameGetPlayerData();
        temp_v0 = *(unsigned short *)(temp_v7 + 0x5e);
      }
      else {
        temp_v7 = gameGetSlotRecord();
        temp_v0 = *(unsigned short *)(temp_v7 + 0x60);
      }
      temp_v7 = 0;
      temp_v14 = 1;
LAB_004b0590:
      if (((unsigned int)temp_v0 & (1 << (temp_v14 & 0xff))) == 0) {
LAB_004b05b8:
        temp_v14 = temp_v14 + 1;
        if ((int)temp_v14 >= 0xe) goto LAB_004b05c4;
        while (temp_v14 == 2) {
          temp_v14 = 3;
        }
        goto LAB_004b0590;
      }
      if (temp_v7 != temp_v5) {
        temp_v7 = temp_v7 + 1;
        goto LAB_004b05b8;
      }
      temp_v4 = markerKindGetColor((int)(short)temp_v14);
LAB_004b05c4:
      if (temp_v28 != temp_v4) {
        temp_v28 = temp_v4;
        drawSetColorFromRGBA8(temp_v4);
      }
      FUN_003bb50c((int)(short)temp_v26,aiStack_f0[temp_v15] + (int)*(short *)(temp_v24 + 8) + temp_v16
                   ,aiStack_120[temp_v15] + (int)*(short *)(temp_v24 + 10) + temp_v13,0x6d,1,
                   aiStack_f0[temp_v15] + temp_v16,aiStack_120[temp_v15] + temp_v13,
                   (int)**(short **)(temp_v35 + 0xc),(int)(*(short **)(temp_v35 + 0xc))[1]);
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  FUN_00183bb0();
  temp_v15 = 0;
LAB_004b0658:
  if (acStack_fc[temp_v15] != '\0') {
    temp_v19 = (float)temp_v38;
    temp_v6 = temp_v27[temp_v15 + 6];
    temp_v13 = aiStack_110[temp_v15];
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v14 = 0;
    temp_v4 = aiStack_120[temp_v15];
    temp_v16 = 1;
    temp_v5 = (int)temp_v19 + temp_v36 + aiStack_f0[temp_v15];
    do {
      if ((int)temp_v6 < 0) {
        temp_v7 = gameGetPlayerData();
        temp_v0 = *(unsigned short *)(temp_v7 + 0x5e);
      }
      else {
        temp_v7 = gameGetSlotRecord(temp_v6);
        temp_v0 = *(unsigned short *)(temp_v7 + 0x60);
      }
      if (((unsigned int)temp_v0 & (1 << (temp_v16 & 0xff))) != 0) {
        temp_v7 = FUN_001834a4(0x1d,temp_v14 * 2 + 0x11e);
        efctCallRoutineWithSpeedOverride(*(short *)(temp_v7 + 8) + temp_v5,(int)*(short *)(temp_v7 + 10) + temp_v4 + temp_v13,0x24
                    );
        temp_v7 = FUN_001834a4(0x1d,temp_v14 * 2 + 0x11d);
        effectDispatchSelector((int)(short)temp_v16,*(short *)(temp_v7 + 8) + temp_v5,
                     (int)*(short *)(temp_v7 + 10) + temp_v4 + temp_v13,0x24);
        temp_v14 = (temp_v14 + 1) & 0xffff;
        if (temp_v14 >= 6) goto LAB_004b0770;
      }
      temp_v16 = temp_v16 + 1;
      if ((int)temp_v16 >= 0xe) goto LAB_004b0770;
      while (temp_v16 == 2) {
        temp_v16 = 3;
      }
    } while( 1 );
  }
  goto LAB_004b07bc;
LAB_004b0770:
  if (temp_v14 >= 2) {
    temp_v5 = param_1 + temp_v15 * 4;
    piVar14 = (int *)(temp_v5 + 0x7e4c);
    temp_v4 = *piVar14;
    *piVar14 = temp_v4 + 1;
    if (temp_v4 + 1 >= 0x30) {
      piVar16 = (int *)(temp_v5 + 0x7e5c);
      __aeabi_idivmod(*piVar16 + 1,temp_v14);
      *piVar16 = temp_v10;
      *piVar14 = 0;
    }
  }
LAB_004b07bc:
  temp_v15 = temp_v15 + 1;
  if (temp_v15 >= 4) goto LAB_004b07c8;
  goto LAB_004b0658;
LAB_004b07c8:
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      temp_v13 = aiStack_110[temp_v15];
      FUN_00164b5c(2,temp_v25,2,aiStack_f0[temp_v15] + temp_v27[temp_v15],aiStack_120[temp_v15] + temp_v13
                   ,0x6f);
    }
    temp_v16 = (unsigned int)temp_v38;
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  temp_v15 = FUN_001834a4(temp_v25,0x1e);
  temp_v20 = (unsigned long long)temp_v16;
  temp_v4 = 0;
  do {
    if (acStack_fc[temp_v4] != '\0') {
      if (temp_v4 != 0) {
        temp_v13 = gameGetSlotRecord((int)*(char *)(temp_v3 + temp_v4 + 0x1c9f));
        temp_v8 = FUN_00180114(*(unsigned short *)(temp_v13 + 0x62));
        textFormatBuffer(temp_v31,&LAB_004b0b24,temp_v8);
      }
      else {
        temp_v8 = gameGetPlayerName();
        textFormatBuffer(temp_v31,&LAB_004b0b24,temp_v8);
      }
      temp_v16 = temp_v27[temp_v4];
      temp_v13 = aiStack_110[temp_v4];
      puVar10 = temp_v31;
      fontMeasureLineAdvance(puVar10,1);
      VectorSignedToFloat(aiStack_120[temp_v4] + (int)*(short *)(temp_v15 + 10) + temp_v13,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v16 + ((int)**(short **)(temp_v15 + 0xc) - (int)puVar10) / 2 +
                          aiStack_f0[temp_v4] + (int)*(short *)(temp_v15 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(1,0xffffffff,temp_v31,aiStack_f0[temp_v4]);
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 4);
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      if (temp_v15 != 0) {
        temp_v13 = gameGetSlotRecord((int)*(char *)(temp_v3 + temp_v15 + 0x1c9f));
        temp_v0 = *(unsigned short *)(temp_v13 + 100);
        temp_v4 = *(char *)(temp_v3 + temp_v15 + 0x1c9f) + 1;
      }
      else {
        temp_v4 = 0;
        temp_v13 = gameGetPlayerData();
        temp_v0 = *(unsigned short *)(temp_v13 + 0x62);
      }
      temp_v6 = (unsigned int)temp_v0;
      temp_v13 = aiStack_110[temp_v15];
      temp_v14 = temp_v27[temp_v15];
      FUN_001835b4(2,temp_v25,0x10,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74);
      temp_v16 = 0xf;
      FUN_001835b4(2,temp_v25,0xf,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74);
      temp_v4 = param_1 + temp_v4 * 0x28;
      temp_v5 = (int)*(short *)(temp_v4 + 0x788a);
      temp_v17 = temp_v5 == 0;
      if (temp_v5 < 1) {
        temp_v16 = (unsigned int)*(short *)(temp_v4 + 0x7890);
      }
      temp_v9 = temp_v5 + temp_v6;
      temp_v7 = temp_v5;
      if (temp_v5 < 1) {
        temp_v7 = temp_v6 - temp_v16;
        temp_v17 = temp_v6 == temp_v16;
      }
      if (!(temp_v17 || temp_v7 < 0 != (temp_v5 < 1 && SBORROW4(temp_v6,temp_v16)))) {
        if (temp_v9 < 100) {
          if (temp_v5 < 1) goto LAB_004b0b48;
          goto LAB_004b0b54;
        }
        FUN_001835b4(2,temp_v25,0x16a,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74)
        ;
        FUN_001835b4(2,temp_v25,0x16b,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74)
        ;
        FUN_001835b4(2,temp_v25,0x16d,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74)
        ;
        FUN_001835b4(2,temp_v25,0x16e,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74)
        ;
        FUN_001835b4(2,temp_v25,0x16f,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74)
        ;
        temp_v5 = FUN_001834a4(temp_v25,0x172);
        temp_v23 = 3;
        temp_v8 = 0xff;
      }
      else {
LAB_004b0b48:
        if ((int)*(short *)(temp_v4 + 0x7890) < (int)temp_v6) {
LAB_004b0b54:
          if (temp_v9 < 100) {
            FUN_001835b4(2,temp_v25,0x16,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                         0x74);
            FUN_001835b4(2,temp_v25,0x18,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                         0x74);
            FUN_001835b4(2,temp_v25,0x19,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                         0x74);
            temp_v5 = FUN_001834a4(temp_v25,0x27);
            temp_v23 = 2;
            temp_v8 = 0xff;
          }
          else {
            FUN_001835b4(2,temp_v25,0x16a,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                         0x74);
            FUN_001835b4(2,temp_v25,0x16b,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                         0x74);
            FUN_001835b4(2,temp_v25,0x16c,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                         0x74);
            temp_v5 = FUN_001834a4(temp_v25,0x172);
            temp_v23 = 3;
            temp_v8 = 0xffffffff;
          }
        }
        else if (temp_v9 >= 100) {
          FUN_001835b4(2,temp_v25,0x16a,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                       0x74);
          FUN_001835b4(2,temp_v25,0x16b,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                       0x74);
          FUN_001835b4(2,temp_v25,0x16c,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,
                       0x74);
          temp_v5 = FUN_001834a4(temp_v25,0x172);
          temp_v23 = 3;
          temp_v8 = 0xffffffff;
        }
        else {
          FUN_001835b4(2,temp_v25,0x16,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74
                      );
          FUN_001835b4(2,temp_v25,0x17,aiStack_f0[temp_v15] + temp_v14,aiStack_120[temp_v15] + temp_v13,0x74
                      );
          temp_v5 = FUN_001834a4(temp_v25,0x27);
          temp_v23 = 2;
          temp_v8 = 0xffffffff;
        }
      }
      drawSetColorFromRGBA8(temp_v8);
      FUN_00180310(6,aiStack_f0[temp_v15] + (int)*(short *)(temp_v5 + 8) + temp_v14,
                   (int)*(short *)(temp_v5 + 10) + aiStack_120[temp_v15] + temp_v13,1,temp_v23,0x79,
                   &LAB_004b10e4,(int)*(short *)(temp_v4 + 0x788a) + temp_v6);
      FUN_00183bb0();
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  temp_v15 = FUN_001834a4(temp_v25,0x25);
  drawSetColorFromRGBA8(0x57d8ffff);
  temp_v32 = (unsigned int *)(param_1 + 0x7880);
  temp_v4 = 0;
  do {
    if (acStack_fc[temp_v4] != '\0') {
      if (temp_v4 != 0) {
        temp_v13 = gameGetSlotRecord((int)*(char *)(temp_v3 + temp_v4 + 0x1c9f));
        temp_v7 = param_1 + (*(char *)(temp_v3 + temp_v4 + 0x1c9f) + 1) * 0x28;
        if (*(char *)(temp_v7 + 0x788e) != '\0') {
          temp_v5 = 0;
        }
        else {
          temp_v5 = FUN_004cc8d8(*(unsigned short *)(temp_v13 + 0x62),
                               (unsigned int)*(unsigned short *)(temp_v13 + 100) + (int)*(short *)(temp_v7 + 0x788a));
          temp_v5 = temp_v5 - ((*(unsigned int *)(temp_v7 + 0x7880) >> 0xc) | (*(int *)(temp_v7 + 0x7884) << 0x14));
        }
      }
      else {
        temp_v13 = gameGetPlayerData();
        if (*(char *)(param_1 + 0x788e) != '\0') {
          temp_v5 = 0;
        }
        else {
          temp_v5 = FUN_004ccbf0((unsigned int)*(unsigned short *)(temp_v13 + 0x62) + (int)*(short *)(param_1 + 0x788a))
          ;
          temp_v5 = temp_v5 - ((*temp_v32 >> 0xc) | (temp_v32[1] << 0x14));
        }
      }
      temp_v13 = aiStack_110[temp_v4];
      FUN_00180310(0,temp_v27[temp_v4] + aiStack_f0[temp_v4] + (int)*(short *)(temp_v15 + 8),
                   aiStack_120[temp_v4] + (int)*(short *)(temp_v15 + 10) + temp_v13,1,7,0x79,&LAB_004b10e4
                   ,temp_v5);
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 4);
  FUN_00183bb0();
  temp_v24 = FUN_001834a4(temp_v25,0x11);
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      if (temp_v15 == 0) {
        temp_v13 = 0;
      }
      else {
        temp_v13 = *(char *)(temp_v3 + temp_v15 + 0x1c9f) + 1;
      }
      temp_v16 = temp_v27[temp_v15];
      temp_v4 = param_1 + temp_v13 * 0x28;
      temp_v13 = aiStack_110[temp_v15];
      if (*(char *)(temp_v4 + 0x788e) != '\0') {
        FUN_001835b4(2,temp_v25,0x14,aiStack_f0[temp_v15] + temp_v16,aiStack_120[temp_v15] + temp_v13,0x79);
        if (*(short *)(temp_v4 + 0x788c) < 8) {
          VectorSignedToFloat((int)*(short *)(temp_v4 + 0x788c),(unsigned char)(in_fpscr >> 0x16) & 3);
          efctSetSpeed();
        }
        FUN_001835b4(2,temp_v25,0x15,aiStack_f0[temp_v15] + temp_v16,aiStack_120[temp_v15] + temp_v13,0x7e);
        efctSetSpeed();
      }
      else {
        FUN_00185dd4(2,temp_v25,0x11,aiStack_f0[temp_v15] + temp_v16,aiStack_120[temp_v15] + temp_v13,
                     (int)*(short *)(temp_v4 + 0x7888),(int)*(short *)(*(int *)(temp_v24 + 0xc) + 2),
                     0x79);
      }
      if (*(char *)(temp_v4 + 0x788e) == '\0') {
        FUN_00164b5c(2,temp_v25,3,(int)*(short *)(temp_v4 + 0x7888) + aiStack_f0[temp_v15] + temp_v16,
                     aiStack_120[temp_v15] + temp_v13,0x7e);
      }
    }
    temp_v8 = (unsigned int)temp_v20;
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  FUN_001834a4(temp_v25,0x11);
  temp_v19 = 0.26f;
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      if (temp_v15 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = *(char *)(temp_v3 + temp_v15 + 0x1c9f) + 1;
      }
      temp_v21 = temp_v19;
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v5 = (int)temp_v19;
      temp_v7 = 0;
      temp_v16 = 1;
      temp_v9 = temp_v5 + temp_v36;
      do {
        if (temp_v16 <= *(unsigned int *)(param_1 + temp_v4 * 0x28 + 0x7870)) {
          VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001634b4(param_1 + (temp_v15 * 7 + temp_v7 + 0x20) * 0x8c + 0x20,temp_v5);
        }
        temp_v5 = temp_v16 * 5;
        temp_v7 = temp_v7 + 1;
        temp_v16 = temp_v16 * 10;
        temp_v19 = temp_v21;
      } while ((int)temp_v16 < 1000000);
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  temp_v4 = 0;
  temp_v15 = 0;
  do {
    temp_v5 = g_renderCtx;
    if (acStack_fc[temp_v15] != '\0') {
      if (temp_v15 == 0) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = *(char *)(temp_v3 + temp_v15 + 0x1c9f) + 1;
      }
      temp_v16 = temp_v27[temp_v15];
      if (*(char *)(param_1 + temp_v7 * 0x28 + 0x788e) != '\0') {
        if (temp_v4 == 0) {
          temp_v9 = packNibblesAndByte(6,1,0);
          piVar14 = (int *)(temp_v5 + 0x12b8);
          temp_v11 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = temp_v9;
          if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v11 != temp_v9) {
            (**(romwright_code **)(temp_v5 + 0x12d4))();
            *(unsigned char *)(temp_v5 + 0x12d0) = 0;
          }
        }
        VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(param_1 + temp_v7 * 0x8c + 0x24c4);
        temp_v4 = temp_v4 + 1;
      }
    }
    temp_v5 = g_renderCtx;
    temp_v23 = (unsigned int)temp_v18;
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  if (temp_v4 != 0) {
    temp_v15 = packNibblesAndByte(6,7,0);
    piVar14 = (int *)(temp_v5 + 0x12b8);
    temp_v4 = piVar14[*piVar14 + 2];
    piVar14[*piVar14 + 2] = temp_v15;
    if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v4 != temp_v15) {
      (**(romwright_code **)(temp_v5 + 0x12d4))();
      *(unsigned char *)(temp_v5 + 0x12d0) = 0;
    }
  }
  temp_v22 = (unsigned long long)(unsigned int)temp_v19;
  temp_v20 = romwright_piece_4_4(temp_v23,temp_v8);
  temp_v15 = 0;
  do {
    if (acStack_fc[temp_v15] != '\0') {
      temp_v4 = FUN_001834a4(temp_v25,temp_v15 + 0x30);
      if (temp_v15 != 0) {
        if (*(char *)(temp_v3 + temp_v15 + 0x1c9f) < '\0') goto LAB_004b13b4;
        temp_v13 = gameGetSlotRecord();
        temp_v0 = *(unsigned short *)(temp_v13 + 100);
        temp_v5 = *(char *)(temp_v3 + temp_v15 + 0x1c9f) + 1;
      }
      else {
        temp_v5 = 0;
        temp_v13 = gameGetPlayerData();
        temp_v0 = *(unsigned short *)(temp_v13 + 0x62);
      }
      temp_v6 = (unsigned int)temp_v0;
      temp_v13 = aiStack_110[temp_v15];
      temp_v5 = param_1 + temp_v5 * 0x28;
      temp_v12 = (unsigned int)*(short *)(temp_v5 + 0x788a);
      temp_v17 = temp_v12 == 0;
      temp_v16 = temp_v12;
      temp_v14 = temp_v12;
      if ((int)temp_v12 < 1) {
        temp_v14 = (unsigned int)*(short *)(temp_v5 + 0x7890);
        temp_v16 = temp_v6 - temp_v14;
        temp_v17 = temp_v6 == temp_v14;
      }
      if (!temp_v17 && (int)temp_v16 < 0 == ((int)temp_v12 < 1 && SBORROW4(temp_v6,temp_v14))) {
        temp_v5 = (int)*(short *)(temp_v5 + 0x788c);
        temp_v7 = 0;
        if ((0 < temp_v5) && (temp_v5 < 8)) {
          temp_v7 = temp_v5 * -2 + 0x14;
          if (temp_v7 < 0) {
            temp_v7 = 0;
          }
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        efctSetSpeed();
        temp_v19 = (float)temp_v22;
        renderCtxCalculateStereoParallax(g_renderCtx);
        temp_v5 = (int)temp_v19 + temp_v36;
        FUN_001835b4(2,temp_v25,0x1b,*(short *)(temp_v4 + 8) + temp_v5,
                     (int)*(short *)(temp_v4 + 10) + temp_v13 + temp_v7,0xce);
        efctSetSpeed();
        FUN_001835b4(2,temp_v25,0x1c,*(short *)(temp_v4 + 8) + temp_v5,
                     (int)*(short *)(temp_v4 + 10) + temp_v13 + temp_v7,0xce);
        efctSetSpeed();
      }
    }
LAB_004b13b4:
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  temp_v19 = (float)temp_v20;
  temp_v4 = 0;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v20 = temp_v20 >> 0x20;
  temp_v15 = 0;
  temp_v3 = (int)temp_v19 + temp_v36;
  do {
    temp_v16 = (unsigned int)temp_v20;
    if (*(int *)(temp_v34 + 0x364) < 3) break;
    if (((*(int *)(temp_v34 + 0x364) != 3) || (temp_v15 < *(int *)(temp_v34 + 0x37c))) &&
       (temp_v5 = param_1 + temp_v15 * 4, *(int *)(temp_v5 + 0x43f0) != 0)) {
      temp_v35 = param_1 + temp_v15 * 0x8c;
      temp_v7 = vec2GetXInt(temp_v35 + 0x3900);
      temp_v20 = (unsigned long long)temp_v16;
      efctSetSpeed();
      temp_v9 = FUN_001834a4(temp_v25,temp_v15 + 0x47);
      temp_v7 = temp_v7 + temp_v3;
      FUN_001835b4(2,temp_v25,0x3e,*(short *)(temp_v9 + 8) + temp_v7,*(short *)(temp_v9 + 10) + temp_v13,
                   0x6a);
      temp_v8 = *(unsigned int *)(temp_v5 + 0x43f0);
      FUN_0015f858(temp_v8,0);
      textFormatBuffer(temp_v31,&LAB_004b1788,temp_v8);
      temp_v11 = FUN_001834a4(temp_v25,0x43);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v13,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v7,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,temp_v31,(int)*(short *)(temp_v9 + 8));
      temp_v11 = FUN_001834a4(temp_v25,0x42);
      uiDrawItemCategoryIcon((int)(short)*(unsigned int *)(temp_v5 + 0x43f0),
                   (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v7,
                   (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v13,0x6f,0);
      temp_v11 = FUN_001834a4(temp_v25,0x46);
      FUN_00180310(0,(int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v7,
                   (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v13,1,3,0x6f,
                   &LAB_004b178c,*(unsigned int *)(temp_v5 + 0x4408));
      temp_v9 = gamePackedFlagTest(*(unsigned int *)(temp_v5 + 0x43f0));
      if ((temp_v9 == 0) && (*(short *)(temp_v35 + 0x3d32) >= 0xe)) {
        temp_v9 = FUN_001834a4(temp_v25,temp_v15 + 0x4d);
        temp_v5 = *(int *)(temp_v5 + 0x4380) % 0x20;
        if (temp_v5 < 0x11) {
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        else {
          temp_v5 = temp_v5 - 0x10;
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        efctSetSpeed(temp_v5);
        FUN_001835b4(2,temp_v25,0x3f,*(short *)(temp_v9 + 8) + temp_v7,*(short *)(temp_v9 + 10) + temp_v13
                     ,0x74);
        FUN_001835b4(2,temp_v25,0x40,*(short *)(temp_v9 + 8) + temp_v7,*(short *)(temp_v9 + 10) + temp_v13
                     ,0x79);
        efctSetSpeed();
      }
      temp_v4 = temp_v4 + 1;
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 6);
  temp_v15 = g_renderCtx;
  if (0 < temp_v4) {
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar14 = (int *)(temp_v15 + 0x12b8);
    temp_v5 = piVar14[*piVar14 + 2];
    piVar14[*piVar14 + 2] = temp_v4;
    if (*(char *)(temp_v15 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v15 + 0x12d4))();
      *(unsigned char *)(temp_v15 + 0x12d0) = 0;
    }
    temp_v15 = FUN_001834a4(temp_v25,0x119);
    temp_v4 = 0;
    do {
      if (*(int *)(temp_v34 + 0x364) < 3) break;
      if (((*(int *)(temp_v34 + 0x364) != 3) || (temp_v4 < *(int *)(temp_v34 + 0x37c))) &&
         (*(int *)(param_1 + temp_v4 * 4 + 0x43f0) != 0)) {
        temp_v7 = param_1 + temp_v4 * 0x8c;
        temp_v2 = vec2GetXInt(temp_v7 + 0x3900);
        temp_v5 = FUN_001834a4(temp_v25,temp_v4 + 0x47);
        temp_v19 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v15 + 0xc) + 2),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        pairSetHalves(temp_v7 + 0x3cd4,(int)(short)(*(short *)(temp_v5 + 8) + (short)temp_v3 + temp_v2),
                     (int)(short)((short)(int)(temp_v19 * ((float)temp_v20 - *(float *)(temp_v7 + 0x3cf8))
                                              ) + (short)temp_v13 + *(short *)(temp_v5 + 10)));
        efctSetSpeed();
        FUN_001634b4(temp_v7 + 0x3cd4);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
    efctSetSpeed();
    temp_v13 = g_renderCtx;
    temp_v3 = packNibblesAndByte(6,7,0);
    piVar14 = (int *)(temp_v13 + 0x12b8);
    temp_v15 = piVar14[*piVar14 + 2];
    piVar14[*piVar14 + 2] = temp_v3;
    if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v15 != temp_v3) {
      (**(romwright_code **)(temp_v13 + 0x12d4))();
      *(unsigned char *)(temp_v13 + 0x12d0) = 0;
    }
  }
  FUN_004b457c(param_1,temp_v36,temp_v37);
  temp_v25 = param_1 + 0x40a8;
  temp_v13 = 0;
  do {
    if (*(char *)(param_1 + temp_v13 + 0x753c) != '\0') {
      temp_v3 = FUN_001834a4(0x1d,temp_v13 + 0x164);
      temp_v15 = temp_v27[temp_v13 + 1] + (int)*(short *)(temp_v3 + 8);
      temp_v3 = aiStack_110[temp_v13 + 1] + (int)*(short *)(temp_v3 + 10);
      if (*(char *)(temp_v25 + 0x8a) == '\0') {
        temp_v4 = vec2GetXInt(temp_v25);
        temp_v15 = temp_v15 + temp_v4;
        temp_v4 = vec2GetYInt(temp_v25);
        temp_v3 = temp_v3 + temp_v4;
      }
      FUN_001835b4(2,0x1d,0x160,temp_v15,temp_v3,0xc9);
      temp_v4 = 0;
      do {
        efctSetSpeed();
        FUN_001835b4(2,0x1d,temp_v4 + 0x161,temp_v15,temp_v3,temp_v4 + 0xca);
        efctSetSpeed();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 3);
    }
    temp_v13 = temp_v13 + 1;
  } while (temp_v13 < 3);
  return;
}

} /* extern "C" */
