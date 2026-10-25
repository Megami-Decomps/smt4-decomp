/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b72e0` (_code @ 0x1b72e0, 0x6e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int FUN_00218c50(int);
int btlDrawFloatingNumbers(int, int);
int pairSetHalves(int, int, int);
int FUN_002b7638(...);
int effectRenderTransformedInstance(int);
int renderCtxCalculateStereoParallax(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int efctSetSpeed(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c1b64(...);
int FUN_002c39a4(int);
int titleDrawLogo(int);
int FUN_0033cc84(unsigned int);
int SUB84(double, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char LAB_001b77ac; /* 0x1b77ac */
extern unsigned char LAB_001b77d8; /* 0x1b77d8 */
extern unsigned char LAB_001b7808; /* 0x1b7808 */
extern unsigned char LAB_001b79c8; /* 0x1b79c8 */
extern unsigned char LAB_001b79dc; /* 0x1b79dc */
extern unsigned char LAB_001b79f4; /* 0x1b79f4 */
extern unsigned char LAB_001b7a08; /* 0x1b7a08 */
extern signed char g_btlUi; /* 0x439c88 */
extern int DAT_00439c8c; /* 0x439c8c */
extern int DAT_00439c90; /* 0x439c90 */
extern float DAT_00439c94; /* 0x439c94 */
extern float DAT_00439c98; /* 0x439c98 */
extern int g_btlUiBlock; /* 0x439ca8 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB84 (SUBPIECE). */
/* Supplied declaration required: FUN_00218c50. */
/* Supplied declaration required: btlDrawFloatingNumbers. */
/* Supplied declaration required: pairSetHalves. */
/* Supplied declaration required: FUN_002b7638. */
/* Supplied declaration required: effectRenderTransformedInstance. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: titleDrawLogo. */
/* Supplied declaration required: FUN_0033cc84. */


int FUN_001b72e0(unsigned int job)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  unsigned char temp_v9 [64];
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v1 = g_btlUiBlock;
  if (g_btlUiBlock != 0) {
    temp_v4 = 0;
    temp_v5 = temp_v4;
    do {
      temp_v0 = asdTMTexTableNodeIsLoaded(0x14,temp_v4);
      if (temp_v0 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
    temp_v4 = 0;
    do {
      temp_v0 = asdTMTexTableNodeIsLoaded(0x15,temp_v4);
      if (temp_v0 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if (temp_v5 >= 9) {
      FUN_002c39a4(g_titleScene);
      temp_v5 = g_titleScene;
      temp_v4 = FUN_002c5d80(1,0);
      piVar5 = (int *)(temp_v5 + 0x124c);
      temp_v0 = *piVar5;
      temp_v2 = piVar5[temp_v0 + 2];
      *piVar5 = temp_v0 + 1;
      piVar5[temp_v0 + 3] = temp_v4;
      if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v2 != temp_v4) {
        (**(romwright_code **)(temp_v5 + 0x1268))();
        *(unsigned char *)(temp_v5 + 0x1264) = 0;
      }
      btlDrawFloatingNumbers(temp_v1,1);
      temp_v6 = 0.8f;
      renderCtxCalculateStereoParallax(g_titleScene);
      temp_v8 = (unsigned long long)(unsigned int)(int)temp_v6;
      temp_v5 = 0;
      do {
        temp_v4 = temp_v1 + temp_v5 * 0x14c;
        if (*(short *)(temp_v4 + 0xe1c4) != 0) {
          pairSetHalves(temp_v4 + 0xe0ac,(int)(short)(int)*(float *)(temp_v4 + 0xe1d0),
                       (int)(short)(int)*(float *)(temp_v4 + 0xe1d4));
          VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          effectRenderTransformedInstance(temp_v4 + 0xe0ac);
          temp_v0 = g_titleScene;
          if (*(char *)(temp_v4 + 0xe1bd) != '\0') {
            temp_v2 = packNibblesAndByte(6,1,0);
            piVar5 = (int *)(temp_v0 + 0x12ac);
            temp_v3 = piVar5[*piVar5 + 2];
            piVar5[*piVar5 + 2] = temp_v2;
            if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
              (**(romwright_code **)(temp_v0 + 0x12c8))();
              *(unsigned char *)(temp_v0 + 0x12c4) = 0;
            }
            temp_v0 = temp_v4 + 0xe138;
            pairSetHalves(temp_v0,(int)(short)(int)(float)*(unsigned long long *)(temp_v4 + 0xe1d0),
                         (int)(short)(int)(float)((unsigned long long)*(unsigned long long *)(temp_v4 + 0xe1d0) >> 0x20
                                                 ));
            *(unsigned int *)(temp_v4 + 0xe168) = *(unsigned int *)(temp_v4 + 0xe1c8);
            VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            effectRenderTransformedInstance(temp_v0);
            VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            effectRenderTransformedInstance(temp_v0);
            temp_v4 = g_titleScene;
            temp_v0 = packNibblesAndByte(6,7,0);
            piVar5 = (int *)(temp_v4 + 0x12ac);
            temp_v2 = piVar5[*piVar5 + 2];
            piVar5[*piVar5 + 2] = temp_v0;
            if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
              (**(romwright_code **)(temp_v4 + 0x12c8))();
              *(unsigned char *)(temp_v4 + 0x12c4) = 0;
            }
          }
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0xc);
      titleDrawLogo(temp_v1 + 0x2200);
      FUN_00218c50(temp_v1 + 8);
      FUN_0033cc84(*(unsigned int *)(temp_v1 + 0x7e20));
      if (*(char *)(temp_v1 + 0x7e4b) != '\0') {
        efctSetSpeed();
        FUN_002bf288(2,0xe,0x106,0,0,0x65);
        efctSetSpeed();
      }
      temp_v7 = 0;
      if (g_btlUi != '\0') {
        FUN_002be5a4(3,0xffffffff,&LAB_001b77ac);
        FUN_002be5a4(3,0xffffffff,&LAB_001b77d8);
      }
      if (*(int *)(temp_v1 + 0x7e38) == 0xe) {
        temp_v13 = 0x3eaaaaab;
        temp_v10 = temp_v7;
        temp_v11 = temp_v7;
        temp_v12 = temp_v7;
        FUN_002c1b64(g_titleScene,0);
        FUN_002b7638(&temp_v10);
        temp_v6 = DAT_00439c94;
        renderCtxCalculateStereoParallax(g_titleScene);
        FUN_002bf288(2,0xf,(unsigned int)*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0) * 1000,(int)temp_v6,0,0x97);
        temp_v6 = DAT_00439c98;
        renderCtxCalculateStereoParallax(g_titleScene);
        temp_v5 = (int)temp_v6;
        temp_v1 = FUN_002bf4f8(0xe,0x43);
        FUN_002bf288(2,0xe,0,(int)*(short *)(temp_v1 + 8) + temp_v5 + (int)**(short **)(temp_v1 + 0xc) / 2
                     ,(int)*(short *)(temp_v1 + 10) + (int)(*(short **)(temp_v1 + 0xc))[1] / 2,0xc9);
        temp_v1 = FUN_002bf4f8(0xe,0x45);
        FUN_002bf288(2,0xe,2,(int)*(short *)(temp_v1 + 8) + temp_v5 + (int)**(short **)(temp_v1 + 0xc) / 2
                     ,(int)*(short *)(temp_v1 + 10) + (int)(*(short **)(temp_v1 + 0xc))[1],0xd3);
        temp_v1 = FUN_002bf4f8(0xe,0x3d);
        VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(3,0xff,&LAB_001b7808);
        textFormatBuffer(temp_v9,&LAB_001b79c8,DAT_00439c90);
        FUN_002be5a4(2,0xffffffff,temp_v9);
        textFormatBuffer(temp_v9,&LAB_001b79dc,SUB84((double)DAT_00439c94,0),
                     (int)((unsigned long long)(double)DAT_00439c94 >> 0x20));
        FUN_002be5a4(2,0xffffffff,temp_v9);
        textFormatBuffer(temp_v9,&LAB_001b79f4,SUB84((double)DAT_00439c98,0),
                     (int)((unsigned long long)(double)DAT_00439c98 >> 0x20));
        FUN_002be5a4(2,0xffffffff,temp_v9);
        VectorSignedToFloat(DAT_00439c8c * 0xc + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0xffffffff,&LAB_001b7a08);
      }
      temp_v1 = g_titleScene;
      piVar5 = (int *)(g_titleScene + 0x124c);
      temp_v5 = *piVar5;
      temp_v4 = piVar5[temp_v5 + 2];
      *piVar5 = temp_v5 - 1;
      if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v4 != piVar5[temp_v5 + 1]) {
        (**(romwright_code **)(temp_v1 + 0x1268))();
        *(unsigned char *)(temp_v1 + 0x1264) = 0;
      }
      temp_v1 = g_titleScene;
      temp_v5 = packNibblesAndByte(6,7,0);
      piVar5 = (int *)(temp_v1 + 0x12ac);
      temp_v4 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v5;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v5) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
      FUN_002c198c(g_titleScene);
      FUN_002c18e4(g_titleScene);
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
