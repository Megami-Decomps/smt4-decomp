/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb988` (_code @ 0x2fb988, 0x660 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

int FUN_001e2be4(void);
int FUN_002562e4(int, int);
int partyApplyNonlethalAilmentDamage(int, int);
int FUN_0026413c(void);
int FUN_0027f48c(int, int);
int FUN_0027f958(float *, unsigned int [12], int);
int FUN_00281e34(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int mathDistanceBetweenPoints(void);
int gameCounterAddSaturating(int, int);
int FUN_002d4fa0(void);
int FUN_003a66c4(void);
int FUN_003a6988(void);
int SBORROW4(int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_lmapMainState; /* 0x447060 */
extern int g_lmapScene; /* 0x447e88 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern float DAT_0049fb70; /* 0x49fb70 */
extern float DAT_0049fb74; /* 0x49fb74 */
extern int DAT_0049fb78; /* 0x49fb78 */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern int DAT_0049fc84; /* 0x49fc84 */
extern signed char DAT_0049fce8; /* 0x49fce8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001e2be4. */
/* Supplied declaration required: FUN_002562e4. */
/* Supplied declaration required: partyApplyNonlethalAilmentDamage. */
extern unsigned int FUN_00256540(void);
extern int unitGroupHasFlag(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0026413c. */
/* Supplied declaration required: FUN_0027f48c. */
/* Supplied declaration required: FUN_0027f958. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: mathDistanceBetweenPoints. */
/* Supplied declaration required: gameCounterAddSaturating. */
extern int padIsButtonRepeat(unsigned int);
extern int padIsButtonPressed(unsigned int);
extern int gameGetMapBlock(void);
/* Supplied declaration required: FUN_002d4fa0. */
/* Supplied declaration required: FUN_003a66c4. */
/* Supplied declaration required: FUN_003a6988. */


void FUN_002fb988(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16 [12];
  
  temp_v0 = gameGetMapBlock();
  temp_v11 = 35.0f;
  temp_v5 = 0;
  if ((DAT_0049fc64 != '\0') || (DAT_0049f934 != '\0')) {
    *(unsigned int *)(temp_v0 + 0xd94) = 0;
  }
  else {
    temp_v10 = 0.0f;
    temp_v8 = temp_v11;
    temp_v1 = FUN_00256540();
    temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v7 * 0.01f;
    temp_v6 = SBORROW4((int)temp_v7,0x40000000);
    temp_v2 = (int)temp_v7 - 0x40000000;
    temp_v4 = temp_v7 == 2.0f;
    if ((int)temp_v7 >= 0x40000001) {
      temp_v7 = 2.0f;
    }
    else {
      temp_v6 = SBORROW4((int)temp_v7,0x3f800000);
      temp_v2 = (int)temp_v7 - 0x3f800000;
      temp_v4 = temp_v7 == 1.0f;
    }
    if ((!temp_v4 && temp_v2 < 0 == temp_v6) && (temp_v8 = temp_v8 * temp_v7, (int)temp_v8 >= 0x42200001)) {
      temp_v8 = 40.0f;
    }
    if (0 < *(int *)(temp_v0 + 0xd98)) {
      *(int *)(temp_v0 + 0xd98) = *(int *)(temp_v0 + 0xd98) - 1;
    }
    temp_v7 = *(float *)(g_lmapScene + 0x1c);
    temp_v9 = romwright_piece_4_4(*(unsigned int *)(g_lmapScene + 0x20),*(unsigned int *)(g_lmapScene + 0x24));
    FUN_0027f958(&temp_v15,temp_v16,0);
    if (((((unsigned int)temp_v15 < 0xbf000000) && ((int)temp_v15 < 0x3f000000)) &&
        (temp_v16[0] < 0xbf000000)) && ((int)temp_v16[0] < 0x3f000000)) {
      temp_v5 = 1;
    }
    FUN_0026413c();
    if (DAT_0049fc84 == 1) {
      if (DAT_0049fce8 != '\0') {
        temp_v2 = padIsButtonPressed(1);
        if (temp_v2 != 0) {
          DAT_0049fce8 = '\0';
        }
        temp_v2 = padIsButtonRepeat(5);
        temp_v12 = 50.0f;
        if (temp_v2 != 0) {
          *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) + 50.0f;
        }
        temp_v2 = padIsButtonRepeat(6);
        if (temp_v2 != 0) {
          *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) - temp_v12;
        }
      }
      else {
        temp_v2 = padIsButtonPressed(1);
        if (temp_v2 != 0) {
          DAT_0049fce8 = '\x01';
        }
      }
    }
    *(unsigned int *)(param_1 + 0xc0) = 0;
    *(unsigned int *)(param_1 + 200) = 0x3f800000;
    temp_v13 = 0x3f80000044bb8000;
    *(unsigned int *)(param_1 + 0xc4) = 0x3f800000;
    if (!temp_v5) {
      *(unsigned int *)(temp_v0 + 0xd94) = 0;
      FUN_00281e34();
      temp_v12 = temp_v15 * 57.32484f - *(float *)(param_1 + 0x50);
      if (temp_v12 < temp_v10) {
        temp_v12 = temp_v12 + 360.0f;
      }
      if ((int)temp_v12 >= 0x43b40001) {
        temp_v12 = temp_v12 - 360.0f;
      }
      temp_v14 = 0.017453292f;
      *(float *)(g_lmapScene + 0x50) = -temp_v12;
      temp_v12 = -temp_v12 * 0.017453292f;
      FUN_0028250c();
      temp_v2 = g_lmapScene;
      *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v12 * temp_v8;
      temp_v14 = *(float *)(temp_v2 + 0x50) * temp_v14;
      FUN_00282390();
      temp_v2 = g_lmapScene;
      *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v14 * temp_v8;
      *(unsigned int *)(param_1 + 0xc0) = 1;
      if (DAT_0049fce8 == '\0') {
        FUN_0027f48c(temp_v2 + 0x28,temp_v2 + 0x34);
      }
      DAT_0049fb70 = DAT_0049fb70 + (float)((unsigned long long)temp_v13 >> 0x20);
      if ((int)DAT_0049fb70 >= 0x44bb8001) {
        DAT_0049fb70 = (float)temp_v13;
      }
      temp_v8 = DAT_0049fb74 + 0.05f;
      DAT_0049fb74 = temp_v11;
      if ((int)temp_v8 < 0x420c0001) {
        DAT_0049fb74 = temp_v8;
      }
    }
    else {
      if ((*(int *)(temp_v0 + 0xd98) == 0) &&
         (temp_v2 = *(int *)(temp_v0 + 0xd94) + 1, *(int *)(temp_v0 + 0xd94) = temp_v2, temp_v2 >= 901)) {
        FUN_001e2be4();
        *(unsigned int *)(temp_v0 + 0xd98) = 0xe10;
        *(unsigned int *)(temp_v0 + 0xd94) = 0;
      }
      temp_v2 = *(int *)(temp_v0 + 0xdb8);
      temp_v3 = temp_v2 + 1;
      *(int *)(temp_v0 + 0xdb8) = temp_v3;
      if (temp_v3 >= 0x1f) {
        *(int *)(temp_v0 + 0xdb8) = temp_v2 - 0x1d;
        gameCounterAddSaturating(0x1d,1);
      }
      DAT_0049fb70 = DAT_0049fb70 + 0.2f;
      if ((int)DAT_0049fb70 >= 0x44bb8001) {
        DAT_0049fb70 = (float)temp_v13;
      }
    }
    temp_v2 = g_lmapScene;
    temp_v11 = (float)temp_v13;
    if (0 < DAT_0049fb78) {
      DAT_0049fb78 = DAT_0049fb78 - 1;
    }
    puVar5 = (unsigned int *)(g_lmapScene + 0x40);
    *(float *)(g_lmapScene + 0x1c) =
         (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) +
         *(float *)(g_lmapScene + 0x1c);
    *(float *)(temp_v2 + 0x20) =
         (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) + *(float *)(temp_v2 + 0x20);
    temp_v8 = (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) + *(float *)(temp_v2 + 0x24);
    *(float *)(temp_v2 + 0x24) = temp_v8;
    *(unsigned int *)(temp_v2 + 0x4c) = *(unsigned int *)(temp_v2 + 0x50);
    temp_v1 = *(unsigned int *)(temp_v2 + 0x20);
    *puVar5 = *(unsigned int *)(temp_v2 + 0x1c);
    *(unsigned int *)(temp_v2 + 0x44) = temp_v1;
    *(float *)(temp_v2 + 0x48) = temp_v8;
    *(float *)(temp_v2 + 0x34) = temp_v7;
    *(int *)(temp_v2 + 0x38) = (int)((unsigned long long)temp_v9 >> 0x20);
    *(int *)(temp_v2 + 0x3c) = (int)temp_v9;
    temp_v2 = unitGroupHasFlag(2,5);
    if ((temp_v2 != 0) && (!temp_v5)) {
      temp_v8 = temp_v7;
      mathDistanceBetweenPoints();
      temp_v12 = *(float *)(g_lmapScene + 0x160) - temp_v7;
      *(float *)(g_lmapScene + 0x160) = temp_v12;
      temp_v7 = temp_v8;
      if (temp_v12 < temp_v10) {
        partyApplyNonlethalAilmentDamage(2,5);
        *(unsigned int *)(g_lmapScene + 0x160) = 0x453b8000;
        FUN_002562e4(0xf,0x1e0);
        FUN_00291e40(0x1000186, soundActorScalePosition(
            soundActorPositionFromArray(reinterpret_cast<const f32 *>(g_lmapScene + 0x28)), 1.0f / 3.0f));
      }
    }
    temp_v2 = (int)(short)*(unsigned int *)(param_1 + 0x48);
    FUN_002d4fa0();
    temp_v8 = temp_v7;
    if (temp_v2 != 0) {
      if (!temp_v5) {
        mathDistanceBetweenPoints();
        temp_v2 = g_lmapScene;
        temp_v7 = *(float *)(g_lmapScene + 0x15c) - temp_v7;
        *(float *)(g_lmapScene + 0x15c) = temp_v7;
        if ((temp_v7 < temp_v10) &&
           (*(float *)(temp_v2 + 0x15c) = temp_v11, temp_v2 = g_lmapMainState,
           *(int *)(g_lmapMainState + 0xcc) != 7)) {
          *(unsigned int *)(g_lmapMainState + 0xcc) = 7;
          *(unsigned int *)(temp_v2 + 0xd0) = 0;
          *(unsigned int *)(temp_v2 + 0xd4) = 0;
        }
      }
    }
    else {
      if (temp_v10 < *(float *)(g_lmapScene + 0x15c)) {
        mathDistanceBetweenPoints();
        *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v7;
      }
      temp_v7 = *(float *)(g_lmapScene + 0x15c);
      if (*(float *)(g_lmapScene + 0x15c) <= temp_v10) {
        temp_v7 = temp_v10;
      }
      *(float *)(g_lmapScene + 0x15c) = temp_v7;
    }
    mathDistanceBetweenPoints();
    temp_v8 = temp_v8 * 0.5f;
    temp_v7 = *(float *)(temp_v0 + 0xdb4) + temp_v8;
    *(float *)(temp_v0 + 0xdb4) = temp_v7;
    if ((int)temp_v7 >= 0x47c35001) {
      *(float *)(temp_v0 + 0xdb4) = temp_v7 - 100000.0f;
      gameCounterAddSaturating(0x12,1);
    }
    temp_v7 = *(float *)(temp_v0 + 0xdbc) + temp_v8;
    *(float *)(temp_v0 + 0xdbc) = temp_v7;
    if ((int)temp_v7 >= 0x44bb8001) {
      *(float *)(temp_v0 + 0xdbc) = temp_v7 - temp_v11;
      FUN_003a66c4();
      FUN_003a6988();
    }
    temp_v8 = *(float *)(temp_v0 + 0xdc4) + temp_v8;
    *(float *)(temp_v0 + 0xdc4) = temp_v8;
    temp_v5 = *(int *)(temp_v0 + 0xdc0) != 0;
    if (temp_v5) {
      temp_v11 = 30000.0f;
      temp_v2 = (int)temp_v8 - 0x46ea6000;
    }
    else {
      *(float *)(temp_v0 + 0xdc4) = temp_v10;
      temp_v2 = 0;
      temp_v11 = 0.0f;
    }
    if ((temp_v5 && temp_v8 != temp_v11) && temp_v2 < 0 == (temp_v5 && SBORROW4((int)temp_v8,(int)temp_v11))) {
      *(float *)(temp_v0 + 0xdc4) = temp_v10;
      *(unsigned int *)(temp_v0 + 0xdc0) = 0;
      *(unsigned char *)(temp_v0 + 0xdc8) = 1;
      return;
    }
  }
  return;
}

} /* extern "C" */
