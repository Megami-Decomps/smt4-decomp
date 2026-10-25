/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032d61c` (_code @ 0x32d644, 0xbb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int FUN_00169a1c(...);
int FUN_00184310(void);

int textFormatBuffer(...);
int FUN_001527d8(...);
int FUN_00157558(int);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int renderPopStateStacks(void);
int FUN_00168e00(int, int, int, int);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int renderCtxCalculateStereoParallax(...);
int FUN_0025cc78(...);
int effectSpawnDefaultArguments(...);
int devilDispatchTextureResource(int, int, int, int, int);
int devilIsTextureLoaded(int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_6: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_6_stack;

extern unsigned char LAB_0032de34; /* 0x32de34 */
extern unsigned char LAB_0032de38; /* 0x32de38 */
extern unsigned char LAB_0032e200; /* 0x32e200 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: renderPopStateStacks. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
extern unsigned int FUN_0019acdc(short, unsigned int);
extern unsigned int FUN_0019e52c(unsigned short);
/* Supplied declaration required: FUN_0025cc78. */
extern unsigned int requestIdToCode(unsigned char);
/* Supplied declaration required: effectSpawnDefaultArguments. */
/* Supplied declaration required: devilDispatchTextureResource. */
extern unsigned short FUN_0036fcd0(unsigned int, unsigned int);
/* Supplied declaration required: devilIsTextureLoaded. */


void FUN_0032d61c(unsigned int *param_1,int param_2,float *param_3,int param_4,int param_5,int param_6
                 )

{
/* irregular: irregular input(s): in_fpscr; 21 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int *piVar12;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned int temp_v18;
  unsigned char temp_v19 [16];
  unsigned int temp_v20 [4];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v21;
  float temp_v22;
  
  temp_v5 = (int)*(short *)(param_1 + 0x24);
  if ((temp_v5 == 0) || (devilIsTextureLoaded(temp_v5,1), temp_v5 != 0)) {
    temp_v6 = requestIdToCode(*(unsigned char *)(param_2 + 0x22));
    temp_v5 = asdTMTexTableNodeIsLoaded(0x2e,temp_v6);
    if (temp_v5 != 0) {
      temp_v20[0] = 4;
      temp_v20[1] = 4;
      temp_v20[2] = 4;
      temp_v20[3] = 4;
      uStack_40 = 4;
      uStack_3c = 4;
      uStack_38 = 4;
      uStack_34 = 4;
      temp_v21 = 4;
      FUN_00183bb0();
      FUN_00157558(g_renderCtx);
      temp_v5 = g_renderCtx;
      temp_v7 = FUN_001692ac(1,0);
      piVar12 = (int *)(temp_v5 + 0x1258);
      temp_v8 = *piVar12;
      temp_v9 = piVar12[temp_v8 + 2];
      *piVar12 = temp_v8 + 1;
      piVar12[temp_v8 + 3] = temp_v7;
      if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v9 != temp_v7) {
        (**(romwright_code **)(temp_v5 + 0x1274))(temp_v7);
        *(unsigned char *)(temp_v5 + 0x1270) = 0;
      }
      efctSetSpeed();
      temp_v22 = 0.35f;
      temp_v17 = 0x3eb3333300000000;
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v13 = (float)((unsigned long long)temp_v17 >> 0x20);
      if ((*(unsigned char *)(param_2 + 0x20) & 4) != 0) {
        temp_v5 = 0;
        do {
          FUN_001835b4(2,0x2e,temp_v5 + 0x163,param_4 + (int)temp_v22,param_5,0x71);
          temp_v13 = (float)((unsigned long long)temp_v17 >> 0x20);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 2);
      }
      FUN_00164b5c(2,0x2e,3,param_4 + (int)temp_v22,param_5,0x71);
      temp_v5 = g_renderCtx;
      if (*(short *)(param_1 + 0x24) != 0) {
        temp_v3 = 0;
        if (*(int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1318) * 4 + 0x1320) == 3) {
          temp_v8 = g_renderCtx + 0x1318 + *(int *)(g_renderCtx + 0x1318) * 4;
          temp_v7 = *(int *)(temp_v8 + 8);
          *(unsigned int *)(temp_v8 + 8) = 0;
          if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v7 != 0) {
            (**(romwright_code **)(temp_v5 + 0x1334))();
            *(unsigned char *)(temp_v5 + 0x1330) = 0;
          }
          temp_v3 = 1;
        }
        temp_v22 = temp_v13;
        renderCtxCalculateStereoParallax(g_renderCtx);
        temp_v5 = FUN_001834a4(0x2e,0x23);
        temp_v7 = FUN_001834a4(0x2e,0x22);
        FUN_00168e00((int)*(short *)(temp_v7 + 8) + (int)temp_v13 + param_4,
                     *(short *)(temp_v7 + 10) + param_5,(int)**(short **)(temp_v7 + 0xc),
                     (int)(*(short **)(temp_v7 + 0xc))[1]);
        devilDispatchTextureResource((int)*(short *)(param_1 + 0x24),
                     (int)*(short *)(temp_v5 + 8) + (int)temp_v13 + param_4,
                     *(short *)(temp_v5 + 10) + param_5,0x72,1);
        temp_v5 = g_renderCtx;
        if (temp_v3) {
          piVar12 = (int *)(g_renderCtx + 0x1318);
          temp_v7 = piVar12[*piVar12 + 2];
          piVar12[*piVar12 + 2] = 3;
          if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v7 != 3) {
            (**(romwright_code **)(temp_v5 + 0x1334))();
            *(unsigned char *)(temp_v5 + 0x1330) = 0;
          }
        }
        renderPopStateStacks();
      }
      else {
        temp_v22 = temp_v13;
        renderCtxCalculateStereoParallax(g_renderCtx);
        FUN_001835b4(2,0x2e,0x21,param_4 + (int)temp_v13,param_5,0x72);
      }
      temp_v12 = temp_v22;
      renderCtxCalculateStereoParallax(g_renderCtx);
      FUN_00164b5c(2,0x2e,temp_v20[*(unsigned char *)(param_2 + 0x22)],param_4 + (int)temp_v22,param_5,0x73);
      temp_v13 = temp_v12;
      renderCtxCalculateStereoParallax(g_renderCtx);
      FUN_00164b5c(2,0x2e,6,param_4 + (int)temp_v12,param_5,0x71);
      temp_v22 = temp_v13;
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v5 = (int)temp_v13;
      if (*(unsigned short *)(param_2 + 0x36) < 100) {
        temp_v6 = 0xd;
      }
      else {
        FUN_001835b4(2,0x2e,0x115,param_4 + temp_v5,param_5,0x72);
        temp_v6 = 0x116;
      }
      FUN_001835b4(2,0x2e,temp_v6,param_4 + temp_v5,param_5,0x72);
      FUN_001835b4(2,0x2e,0xe,param_4 + temp_v5,param_5,0x73);
      temp_v7 = FUN_001834a4(0x2e,0x10);
      if (*(unsigned short *)(param_2 + 0x36) >= 10) {
        textFormatBuffer(temp_v19,&LAB_0032de34);
      }
      else {
        textFormatBuffer(temp_v19,&LAB_0032de38);
      }
      drawSetColorFromRGBA8(0xffffff00);
      FUN_00180310(0,(int)*(short *)(temp_v7 + 8) + param_4 + temp_v5,*(short *)(temp_v7 + 10) + param_5,0
                   ,5,0x73,temp_v19);
      FUN_00183bb0();
      temp_v13 = temp_v22;
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v12 = (float)(int)temp_v22;
      temp_v16 = 0.5f;
      temp_v5 = 0;
      temp_v22 = temp_v12;
      do {
        temp_v7 = FUN_001834a4(0x2e,temp_v5 + 0x2f);
        FUN_001835b4(2,0x2e,0x2d,(int)*(short *)(temp_v7 + 8) + (int)temp_v12 + param_4,
                     *(short *)(temp_v7 + 10) + param_5,0x71);
        temp_v8 = FUN_001834a4(0x2e);
        effectSpawnDefaultArguments(param_1[temp_v5 + 0x14]);
        temp_v0 = *(short *)(temp_v8 + 10);
        temp_v15 = (float)VectorSignedToFloat((int)*(short *)(temp_v8 + 8),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v14 = (float)VectorSignedToFloat((int)**(short **)(temp_v8 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = (temp_v14 - temp_v22) * temp_v16;
        FUN_001527d8(param_1[temp_v5 + 0x14],0xffffff00);
        temp_v22 = *param_3;
        FUN_0025cc78(param_1[temp_v5 + 0x14],
                     *(short *)(temp_v7 + 8) + param_4 + (int)(temp_v15 + temp_v14) + (int)temp_v12,
                     (int)*(short *)(temp_v7 + 10) + param_5 + temp_v0,0x72);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 8);
      if (param_6 != 0) {
        temp_v22 = temp_v13;
        renderCtxCalculateStereoParallax(g_renderCtx);
        FUN_00164b5c(2,0x2e,0xf,(int)param_3[1] + param_4 + (int)temp_v13,param_5,0x71);
        FUN_00164b5c(2,0x2e,0x10,(int)param_3[1] + param_4 + (int)temp_v13,param_5,0x71);
        temp_v13 = temp_v22;
        renderCtxCalculateStereoParallax(g_renderCtx);
        temp_v5 = 0;
        do {
          if (*(short *)((int)param_1 + temp_v5 * 2 + 0x24) != 0) {
            temp_v7 = FUN_001834a4(0x2e,temp_v5 + 0xac);
            temp_v9 = *(short *)(temp_v7 + 10) + param_5;
            temp_v11 = (int)*(short *)(temp_v7 + 8) + (int)param_3[1] + param_4;
            temp_v8 = temp_v11 + (int)temp_v22;
            FUN_00164b5c(2,0x2e,0x11,temp_v8,temp_v9,0x71);
            temp_v7 = FUN_001834a4(0x2e,0xaa);
            uiDrawItemCategoryIcon((int)*(short *)((int)param_1 + temp_v5 * 2 + 0x24),
                         *(short *)(temp_v7 + 8) + temp_v8,*(short *)(temp_v7 + 10) + temp_v9,0x72,0);
            temp_v7 = FUN_001834a4(0x2e,0xab);
            temp_v0 = *(short *)(temp_v7 + 8);
            temp_v1 = *(short *)(temp_v7 + 10);
            FUN_001527d8(param_1[temp_v5 + 2],0xffffff00);
            FUN_0025cc78(param_1[temp_v5 + 2],(int)temp_v22 + temp_v11 + temp_v0,temp_v1 + temp_v9,0x72);
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 7);
      }
      temp_v6 = 0x57d8ff00;
      temp_v18 = 0xffffff00;
      if ((*(unsigned char *)(param_2 + 0x20) & 4) != 0) {
        temp_v18 = 0xe6c80000;
      }
      temp_v22 = temp_v13;
      renderCtxCalculateStereoParallax(g_renderCtx);
      if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
        temp_v6 = 0xf33700;
      }
      temp_v5 = FUN_001834a4(0x2e,8);
      FUN_001527d8(*param_1,temp_v6);
      temp_v7 = param_4 + (int)temp_v13;
      FUN_0025cc78(*param_1,*(short *)(temp_v5 + 8) + temp_v7,*(short *)(temp_v5 + 10) + param_5,0x72);
      temp_v5 = FUN_001834a4(0x2e,9);
      FUN_001527d8(param_1[1],temp_v18);
      FUN_0025cc78(param_1[1],*(short *)(temp_v5 + 8) + temp_v7,*(short *)(temp_v5 + 10) + param_5,0x72);
      temp_v5 = FUN_001834a4(0x2e,10);
      FUN_001527d8(param_1[0xd],0xffffff00);
      FUN_0025cc78(param_1[0xd],*(short *)(temp_v5 + 8) + temp_v7,*(short *)(temp_v5 + 10) + param_5,0x72)
      ;
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v13 = (float)(int)temp_v22;
      temp_v22 = temp_v13;
      temp_v5 = FUN_001834a4(0x2e,0x24);
      effectSpawnDefaultArguments(param_1[0xe]);
      temp_v0 = *(short *)(temp_v5 + 10);
      temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat((int)**(short **)(temp_v5 + 0xc),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001527d8(param_1[0xe],0x32323200);
      FUN_0025cc78(param_1[0xe],param_4 + (int)(temp_v14 + (temp_v12 - temp_v22) * temp_v16) + (int)temp_v13,
                   temp_v0 + param_5,0x74);
      temp_v5 = FUN_001834a4(0x2e,0x25);
      temp_v7 = param_1[0x11];
      temp_v0 = **(short **)(temp_v5 + 0xc);
      temp_v1 = *(short *)(temp_v5 + 8);
      temp_v2 = *(short *)(temp_v5 + 10);
      FUN_001527d8(param_1[0x10],0x32323200);
      FUN_0025cc78(param_1[0x10],param_4 + (temp_v0 - temp_v7) + (int)temp_v1 + (int)temp_v13,
                   param_5 + temp_v2,0x74);
      temp_v5 = FUN_001834a4(0x2e,0x27);
      if ((*(short *)(param_2 + 0x62) != 0) && (*(short *)(param_2 + 0x34) != 0)) {
        textFormatBuffer(temp_v19,&LAB_0032de34);
      }
      else {
        textFormatBuffer(temp_v19,&LAB_0032e200);
      }
      drawSetColorFromRGBA8(0x32323200);
      param_4 = (int)temp_v13 + param_4;
      FUN_00180310(0,*(short *)(temp_v5 + 8) + param_4,*(short *)(temp_v5 + 10) + param_5,0,5,0x74,
                   temp_v19);
      FUN_00183bb0();
      efctSetSpeed();
      FUN_001835b4(2,0x2e,0x101,param_4,param_5,0x74);
      temp_v0 = *(short *)(param_2 + 0x38);
      if (((temp_v0 != 0) || (*(short *)(param_2 + 0x44) != 0)) && (temp_v0 != 0)) {
        temp_v6 = FUN_0019acdc(temp_v0,0);
        temp_v4 = FUN_0036fcd0(temp_v6,0);
        temp_v10 = FUN_0019e52c(temp_v4);
        if (temp_v10 != 0) {
          FUN_001835b4(2,0x2e,0x103,param_4,param_5,0x74);
          FUN_001835b4(2,0x2e,0x102,param_4,param_5,0x74);
          if (*(unsigned short *)(param_2 + 0x3a) >= 100) {
            FUN_001835b4(2,0x2e,0x11d,param_4,param_5,0x74);
          }
          temp_v10 = temp_v10 & 0xffff;
          FUN_00184310();
          temp_v5 = FUN_001834a4(0x2e,0x106);
          FUN_00169a1c(*(unsigned short *)(temp_v10 + 0x9c),*(short *)(temp_v5 + 8) + param_4,
                       *(short *)(temp_v5 + 10) + param_5,0x74);
          temp_v5 = FUN_001834a4(0x2e,0x105);
          textFormatBuffer(temp_v19,&LAB_0032de34,*(unsigned short *)(param_2 + 0x3a));
          FUN_00180310(0,*(short *)(temp_v5 + 8) + param_4,*(short *)(temp_v5 + 10) + param_5,0,5,0x74,
                       temp_v19);
          temp_v5 = FUN_001834a4(0x2e,0x107);
          FUN_001527d8(param_1[0x12],0xffffff00);
          FUN_0025cc78(param_1[0x12],*(short *)(temp_v5 + 8) + param_4,
                       *(short *)(temp_v5 + 10) + param_5,0x74);
        }
      }
      FUN_00183bb0();
      efctSetSpeed();
      temp_v5 = g_renderCtx;
      piVar12 = (int *)(g_renderCtx + 0x1258);
      temp_v7 = *piVar12;
      temp_v8 = piVar12[temp_v7 + 2];
      *piVar12 = temp_v7 - 1;
      if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v8 != piVar12[temp_v7 + 1]) {
        (**(romwright_code **)(temp_v5 + 0x1274))();
        *(unsigned char *)(temp_v5 + 0x1270) = 0;
      }
    }
  }
  return;
}

} /* extern "C" */
