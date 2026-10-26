/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00479b6c` (_code @ 0x479b6c, 0x658 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"

extern "C" {

int textFormatBuffer(...);
int textDrawString(...);
int mathInterpolateTimed(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int renderCtxSelectTexture(int, unsigned int);
int FUN_0017ffa8(...);
int asdTMTexTableEntryAt(...);
int effectSubmitDefaultVectors(int, int);
int sysMemClear(...);
int FUN_00473754(...);
int FUN_00473910(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp250; /* 0x250: local_250 */
} param_4_stack;

extern int g_aocMain; /* 0x570260 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: mathInterpolateTimed. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: renderCtxSelectTexture. */
/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: effectSubmitDefaultVectors. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00473754. */
/* Supplied declaration required: FUN_00473910. */
extern int countOwnerIsValidIndex(int, int);
extern int curveEvaluateStandard(unsigned char *, unsigned int);


void FUN_00479b6c(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar11;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned char temp_v11 [256];
  short temp_v12 [128];
  unsigned int temp_v13;
  int temp_v14;
  int iStack_30;
  int iStack_2c;
  int temp_v15;
  
  temp_v14 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v15 = param_4;
  temp_v3 = asdTMTexTableEntryAt(0x2f,param_2 + 0x88);
  temp_v5 = g_aocMain;
  temp_v9 = (int)*(short *)(temp_v3 + 8);
  temp_v8 = (int)*(short *)(temp_v3 + 10);
  temp_v3 = countOwnerIsValidIndex(g_aocMain,param_3);
  if (temp_v3 != 0) {
    temp_v3 = *(int *)(temp_v5 + 0x678) + param_3 * 0x9c8;
    sysMemClear(temp_v11,0x100);
    FUN_00164b5c(2,0x2f,8,temp_v9,temp_v8,0x81);
    if (*(char *)(temp_v3 + 0x9b3) != '\0') {
      temp_v4 = asdTMTexTableEntryAt(0x2f,0x5f);
      FUN_0017ffa8(2,0x2f,2000,temp_v9 + *(short *)(temp_v4 + 8),*(short *)(temp_v4 + 10) + temp_v8,0x81);
    }
    else {
      temp_v4 = asdTMTexTableEntryAt(0x2f,0x5f);
      temp_v1 = *(short *)(temp_v4 + 8);
      temp_v2 = *(short *)(temp_v4 + 10);
      renderCtxSelectTexture(g_renderCtx,*(unsigned int *)(temp_v3 + 0x9c4));
      temp_v4 = temp_v8 + temp_v2;
      temp_v6 = temp_v9 + temp_v1;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      effectSubmitDefaultVectors(temp_v4,temp_v6);
    }
    if (*(char *)(temp_v3 + 0x9b3) != '\0') {
      temp_v4 = temp_v5;
      FUN_00473910(temp_v5,0xb);
      FUN_00473754(temp_v5,temp_v4,temp_v12);
      textFormatBuffer(temp_v11,"%s",temp_v12);
    }
    else {
      textFormatBuffer(temp_v11,"%ls",temp_v3);
    }
    temp_v13 = 0xffffffff;
    if (*(char *)(temp_v3 + 0x9b3) != '\0') {
      temp_v4 = asdTMTexTableEntryAt(0x2f,0x61);
      FUN_0017ffa8(2,0xb,0x41f,temp_v9 + *(short *)(temp_v4 + 8),*(short *)(temp_v4 + 10) + temp_v8,0x81);
    }
    else {
      temp_v4 = asdTMTexTableEntryAt(0x2f,0x61);
      FUN_0017ffa8(2,0xb,0x41a,temp_v9 + *(short *)(temp_v4 + 8),*(short *)(temp_v4 + 10) + temp_v8,0x81);
    }
    temp_v4 = asdTMTexTableEntryAt(0x2f,0x62);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(3,temp_v13,temp_v11);
    if (*(char *)(temp_v3 + 0x9b3) == '\0') {
      if (*(char *)(temp_v3 + 0x9ac) != '\0') {
        if (*(char *)(temp_v3 + 0x9ad) != '\0') {
          FUN_00164b5c(2,0x2f,10,temp_v9,temp_v8,0x81);
          FUN_00164b5c(2,0x2f,0xb,temp_v9,temp_v8,0x81);
        }
        else {
          FUN_00164b5c(2,0x2f,10,temp_v9,temp_v8,0x81);
          FUN_00164b5c(2,0x2f,0xc,temp_v9,temp_v8,0x81);
        }
      }
      else {
        FUN_00164b5c(2,0x2f,9,temp_v9,temp_v8,0x81);
        sysMemClear(temp_v11,0x100);
        if (*(char *)(temp_v3 + 0x9b1) != '\0') {
          temp_v4 = temp_v5;
          FUN_00473910(temp_v5,0x69);
          FUN_00473754(temp_v5,temp_v4,temp_v12);
          textFormatBuffer(temp_v11,"%s",temp_v12);
        }
        else {
          temp_v12[0] = 0;
          temp_v12[1] = 0;
          temp_v12[2] = 0;
          temp_v12[3] = 0;
          temp_v12[4] = 0;
          temp_v12[5] = 0;
          psVar6 = temp_v12;
          temp_v4 = 0;
          temp_v12[6] = 0;
          temp_v12[7] = 0;
          temp_v12[8] = 0;
          temp_v12[9] = 0;
          temp_v12[10] = 0;
          temp_v12[0xb] = 0;
          temp_v12[0xc] = 0;
          temp_v12[0xd] = 0;
          temp_v12[0xe] = 0;
          temp_v12[0xf] = 0;
          do {
            temp_v6 = (int)*(char *)(temp_v3 + 0x980 + temp_v4);
            if (temp_v6 == 0) break;
            if (temp_v6 == 0x2e) {
              *psVar6 = 0x4481;
              psVar6 = psVar6 + 1;
            }
            else if (temp_v6 == 0x2c) {
              *psVar6 = 0x4381;
              psVar6 = psVar6 + 1;
            }
            else if (temp_v6 - 0x30U < 10) {
              *psVar6 = (short)(temp_v6 - 0x30U) * 0x100 + 0x4f82;
              psVar6 = psVar6 + 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x10);
          textFormatBuffer(temp_v11,"%ls%s%ls",temp_v5 + 0x5b8,temp_v12,temp_v5 + 0x5f8);
        }
        temp_v5 = curveEvaluateStandard(temp_v11,2);
        temp_v4 = asdTMTexTableEntryAt(0x2f,0x68);
        temp_v5 = ((int)**(short **)(temp_v4 + 0xc) + (int)*(short *)(temp_v4 + 8) + temp_v9) - temp_v5;
        VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,temp_v13,temp_v11,temp_v5);
      }
    }
    if (temp_v15 != 0) {
      FUN_00164b5c(2,0x2f,0xd,temp_v9,temp_v8,0x81);
      temp_v5 = g_renderCtx;
      temp_v4 = packNibblesAndByte(6, 1, 0);
      piVar11 = (int *)(temp_v5 + 0x12b8);
      temp_v6 = *piVar11;
      temp_v7 = piVar11[temp_v6 + 2];
      *piVar11 = temp_v6 + 1;
      piVar11[temp_v6 + 3] = temp_v4;
      if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
        (**(romwright_code **)(temp_v5 + 0x12d4))();
        *(unsigned char *)(temp_v5 + 0x12d0) = 0;
      }
      temp_v5 = temp_v14;
      temp_v4 = *(int *)(temp_v14 + 0x112c);
      if (temp_v4 >= 0xf) {
        temp_v4 = temp_v4 - 0xf;
      }
      mathInterpolateTimed(0xf,temp_v4);
      efctSetSpeed();
      FUN_00164b5c(2,0x2f,0xe,temp_v9,temp_v8,0x81);
      efctSetSpeed();
      temp_v4 = g_renderCtx;
      piVar11 = (int *)(g_renderCtx + 0x12b8);
      temp_v6 = *piVar11;
      temp_v7 = piVar11[temp_v6 + 2];
      *piVar11 = temp_v6 - 1;
      if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v7 != piVar11[temp_v6 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x12d4))();
        *(unsigned char *)(temp_v4 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0x2f,0x84,temp_v9 + (*(int *)(temp_v5 + 0x1128) / 10) * 2,temp_v8,0x81);
    }
    if (*(char *)(temp_v3 + 0x9b3) == '\0') {
      if (*(char *)(temp_v3 + 0x9b0) != '\0') {
        FUN_00164b5c(2,0x2f,0xf,temp_v9,temp_v8,0x81);
      }
      temp_v0 = *(char *)(temp_v3 + 0x9af);
      temp_v10 = temp_v0 == '\0';
      if (temp_v10) {
        temp_v0 = *(char *)(temp_v3 + 0x9ac);
      }
      if (temp_v10 && temp_v0 == '\0') {
        FUN_00164b5c(2,0x2f,0x13,temp_v9,temp_v8,0x81);
        FUN_001835b4(2,0x2f,0x79,temp_v9,temp_v8,0x81);
      }
    }
  }
  else {
    FUN_001835b4(2,0x2f,0x58,temp_v9,temp_v8,0x81);
  }
  return;
}

} /* extern "C" */
