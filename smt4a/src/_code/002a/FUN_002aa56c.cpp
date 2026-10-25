#include "util/Vec2Fixed.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa56c` (_code @ 0x2aa56c, 0x1204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "util/PackNibbles.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_00183bb0(void);
int fontMeasureLineAdvance(...);
int FUN_00184310(void);
int drawSetColorFromRGBA8(...);
int FUN_0020caec(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_5_stack;

extern unsigned char LAB_002aaa30; /* 0x2aaa30 */
extern unsigned char LAB_002aaa54; /* 0x2aaa54 */
extern unsigned char LAB_002aaa64; /* 0x2aaa64 */
extern unsigned char LAB_002aaf78; /* 0x2aaf78 */
extern unsigned char LAB_002aaf84; /* 0x2aaf84 */
extern unsigned char LAB_002ab778; /* 0x2ab778 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00180114(unsigned short);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_0020caec. */
extern int uniteGetWork(void);
extern int recordGetModeForId(unsigned int);
extern int FUN_002a4b28(unsigned short);
extern unsigned int computeCountLimit(void);


void FUN_002aa56c(int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar9;
  int temp_v7;
  int temp_v8;
  int *piVar12;
  unsigned int in_fpscr;
  unsigned char temp_v9 [92];
  int iStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  int temp_v10;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  temp_v10 = param_4;
  temp_v1 = uniteGetWork();
  if (temp_v1 == 0) {
    return;
  }
  temp_v2 = param_1;
  if (param_1 < 0) {
    temp_v2 = -param_1;
  }
  if (temp_v2 >= 0x140) {
    return;
  }
  efctSetSpeed();
  FUN_00164b5c(2,0x1a,0,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x5c,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x5d,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x5e,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x5f,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x60,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x61,param_1,param_2,0xc9);
  FUN_001835b4(2,0x1a,0x62,param_1,param_2,0xc9);
  temp_v2 = FUN_001834a4(0x1a,0x49);
  textFormatBuffer(temp_v9,&LAB_002aaa30);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xffffffff,temp_v9);
  temp_v3 = computeCountLimit();
  if (temp_v3 >= 999) {
    temp_v2 = FUN_001834a4(0x1a,0x279);
    textFormatBuffer(temp_v9,&LAB_002aaa54);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffff57ff,temp_v9);
  }
  else {
    temp_v3 = computeCountLimit();
    if (temp_v3 >= 100) {
      FUN_001835b4(2,0x1a,0x4a,param_1,param_2,0xc9);
      temp_v2 = FUN_001834a4(0x1a,0x253);
      temp_v6 = computeCountLimit();
      FUN_00180310(0,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,1,3,0xc9,
                   &LAB_002aaa64,temp_v6);
    }
    else {
      FUN_001835b4(2,0x1a,0x4a,param_1,param_2,0xc9);
      temp_v2 = FUN_001834a4(0x1a,0x4c);
      temp_v6 = computeCountLimit();
      FUN_00180310(0,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,1,2,0xc9,
                   &LAB_002aaa64,temp_v6);
    }
  }
  if (*(char *)(temp_v1 + 0x9090) != '\0') {
    efctSetSpeed();
    return;
  }
  temp_v3 = 0;
  do {
    if (temp_v3 != param_3) {
      temp_v2 = FUN_001834a4(0x1a,temp_v3 + 0x73);
      FUN_001835b4(2,0x1a,99,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0xc9);
      FUN_001835b4(2,0x1a,0x24c,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                   0xc9);
      FUN_001835b4(2,0x1a,100,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0xc9)
      ;
      temp_v4 = temp_v1 + temp_v3 * 8;
      if ((*(unsigned int *)(temp_v4 + 0x907c) & 0x1fffc) != 0) {
        puVar6 = (unsigned short *)((*(unsigned int *)(temp_v4 + 0x907c) & 0x1ffff) >> 2);
        FUN_00184310();
        FUN_001835b4(2,0x1a,0x65,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                     0xc9);
        FUN_001835b4(2,0x1a,0x66,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                     0xc9);
        temp_v5 = FUN_001834a4(0x1a,0x6a);
        FUN_0018152c((unsigned short)*(unsigned int *)(temp_v4 + 0x9078) & 0x7fff,
                     (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,0xc9,1);
        FUN_0020caec(*(unsigned int *)(temp_v4 + 0x9078) & 0x7fff,
                     (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                     (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xce);
        temp_v5 = FUN_001834a4(0x1a,0x6b);
        FUN_0018152c((*(unsigned int *)(temp_v4 + 0x9078) & 0x3fffffff) >> 0xf,
                     (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,0xc9,1);
        FUN_0020caec((*(unsigned int *)(temp_v4 + 0x9078) & 0x3fffffff) >> 0xf,
                     (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                     (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xce);
        temp_v5 = FUN_001834a4(0x1a,0x6c);
        FUN_0018152c((*(unsigned int *)(temp_v4 + 0x907c) & 0x1ffff) >> 2,
                     (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,0xc9,0);
        FUN_0020caec((*(unsigned int *)(temp_v4 + 0x907c) & 0x1ffff) >> 2,
                     (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,0xce);
        FUN_001835b4(2,0x1a,0x67,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                     0xc9);
        FUN_001835b4(2,0x1a,0x68,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                     0xc9);
        FUN_001835b4(2,0x1a,0x69,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                     0xc9);
        temp_v4 = FUN_001834a4(0x1a,0x6e);
        temp_v6 = FUN_00180114(*puVar6);
        textFormatBuffer(temp_v9,&LAB_002aaf78,temp_v6);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xffffffff,temp_v9);
        temp_v4 = FUN_001834a4(0x1a,0x6f);
        temp_v6 = FUN_0014bf3c(*puVar6,0);
        textFormatBuffer(temp_v9,&LAB_002aaf78,temp_v6);
        puVar9 = temp_v9;
        fontMeasureLineAdvance(puVar9,2);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(param_1 + ((int)**(short **)(temp_v4 + 0xc) - (int)puVar9) / 2 +
                            (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0x9fe7ffff,temp_v9,(int)*(short *)(temp_v4 + 10));
        drawSetColorFromRGBA8(0xffffffff);
        if ((unsigned short)puVar6[3] >= 100) {
          temp_v4 = FUN_001834a4(0x1a,0x256);
          FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,3,0xce,
                       &LAB_002aaa64,puVar6[3]);
        }
        else {
          temp_v4 = FUN_001834a4(0x1a,0x71);
          FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,2,0xce,
                       &LAB_002aaa64,puVar6[3]);
        }
        FUN_00183bb0();
        temp_v4 = FUN_002a4b28(*puVar6);
        if (temp_v4 == 0) {
          temp_v4 = FUN_001834a4(0x1a,0x6d);
          FUN_00164b5c(2,0x1a,8,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xd3);
        }
      }
      else {
        textFormatBuffer(temp_v9,&LAB_002aaf84);
        temp_v4 = FUN_001834a4(0x1a,0x72);
        puVar9 = temp_v9;
        fontMeasureLineAdvance(puVar9,2);
        temp_v5 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v5 + param_1 + ((int)**(short **)(temp_v4 + 0xc) - (int)puVar9) / 2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xf4f4f4ff,temp_v9,temp_v5);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 3);
  if (param_3 >= 3) {
    efctSetSpeed();
    return;
  }
  temp_v2 = temp_v1 + param_3 * 8;
  puVar6 = (unsigned short *)((*(unsigned int *)(temp_v2 + 0x907c) & 0x1ffff) >> 2);
  FUN_00184310();
  temp_v4 = FUN_001834a4(0x1a,param_3 + 0x87);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x76,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  FUN_001835b4(2,0x1a,0x77,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  FUN_001835b4(2,0x1a,0x78,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x79,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  temp_v5 = recordGetModeForId(param_5);
  temp_v7 = *(short *)(temp_v4 + 10) + param_2;
  temp_v8 = *(short *)(temp_v4 + 8) + param_1;
  if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
    FUN_001835b4(2,0x1a,0x246,temp_v8,temp_v7,0xc9);
    FUN_001835b4(2,0x1a,0x7a,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
    FUN_001835b4(2,0x1a,0x7b,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  }
  else {
    FUN_001835b4(2,0x1a,0x283,temp_v8,temp_v7,0xc9);
    if ((temp_v5 != 1 && temp_v5 != 2) && temp_v5 != 6) {
      FUN_001835b4(2,0x1a,0x7a,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9
                  );
      FUN_001835b4(2,0x1a,0x7b,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9
                  );
    }
    else {
      FUN_001835b4(2,0x1a,0x280,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,
                   0xc9);
      FUN_001835b4(2,0x1a,0x281,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,
                   0xc9);
    }
  }
  FUN_001835b4(2,0x1a,0x7d,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  FUN_001835b4(2,0x1a,0x7e,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc9);
  efctSetSpeed();
  if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
    temp_v7 = vec2GetYInt(temp_v1 + 0xb0);
    temp_v0 = *(short *)(temp_v4 + 10);
    temp_v1 = vec2GetXInt(reinterpret_cast<const void *>(temp_v1 + 0xb0));
    FUN_001835b4(2,0x1a,0x7c,temp_v1 + param_1 + (int)*(short *)(temp_v4 + 8),
                 temp_v7 + param_2 + (int)temp_v0,0xce);
  }
  else {
    temp_v7 = vec2GetYInt(temp_v1 + 0xb0);
    temp_v0 = *(short *)(temp_v4 + 10);
    temp_v1 = vec2GetXInt(reinterpret_cast<const void *>(temp_v1 + 0xb0));
    FUN_001835b4(2,0x1a,0x282,temp_v1 + param_1 + (int)*(short *)(temp_v4 + 8),
                 temp_v7 + param_2 + (int)temp_v0,0xce);
  }
  efctSetSpeed();
  temp_v1 = FUN_001834a4(0x1a,0x7f);
  FUN_0018152c((unsigned short)*(unsigned int *)(temp_v2 + 0x9078) & 0x7fff,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xc9,1);
  FUN_0020caec(*(unsigned int *)(temp_v2 + 0x9078) & 0x7fff,
               (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
               (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xe2);
  temp_v1 = FUN_001834a4(0x1a,0x80);
  FUN_0018152c((*(unsigned int *)(temp_v2 + 0x9078) & 0x3fffffff) >> 0xf,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xc9,1);
  FUN_0020caec((*(unsigned int *)(temp_v2 + 0x9078) & 0x3fffffff) >> 0xf,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xe2);
  temp_v1 = FUN_001834a4(0x1a,0x81);
  FUN_0018152c((*(unsigned int *)(temp_v2 + 0x907c) & 0x1ffff) >> 2,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xc9,0);
  FUN_0020caec((*(unsigned int *)(temp_v2 + 0x907c) & 0x1ffff) >> 2,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xe2);
  temp_v1 = FUN_001834a4(0x1a,0x83);
  temp_v6 = FUN_00180114(*puVar6);
  textFormatBuffer(temp_v9,&LAB_002aaf78,temp_v6);
  temp_v2 = (int)*(short *)(temp_v1 + 8);
  VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v2 + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
    FUN_00162790(3,0x9fe7ffff,temp_v9,temp_v2);
  }
  else {
    FUN_00162790(3,0xf5ff9fff,temp_v9,temp_v2);
  }
  temp_v1 = FUN_001834a4(0x1a,0x84);
  temp_v6 = FUN_0014bf3c(*puVar6,0);
  textFormatBuffer(temp_v9,&LAB_002aaf78,temp_v6);
  puVar9 = temp_v9;
  fontMeasureLineAdvance(puVar9,3);
  VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((int)**(short **)(temp_v1 + 0xc) - (int)puVar9) / 2 + param_1 +
                      (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0x9fe7ffff,temp_v9,(int)*(short *)(temp_v4 + 8));
  drawSetColorFromRGBA8(0xffffffff);
  if ((unsigned short)puVar6[3] >= 100) {
    temp_v1 = FUN_001834a4(0x1a,0x259);
    FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,3,0xce,
                 &LAB_002ab778,puVar6[3]);
  }
  else {
    temp_v1 = FUN_001834a4(0x1a,0x86);
    FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,2,0xce,
                 &LAB_002ab778,puVar6[3]);
  }
  FUN_00183bb0();
  temp_v2 = FUN_002a4b28(*puVar6);
  if (temp_v2 == 0) {
    temp_v1 = FUN_001834a4(0x1a,0x82);
    FUN_00164b5c(2,0x1a,8,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xd3);
  }
  if (temp_v10 != 0) {
    if (temp_v10 != 1) {
      if (temp_v10 == 2) {
        temp_v1 = FUN_001834a4(0x1a,0x80);
      }
    }
    else {
      temp_v1 = FUN_001834a4(0x1a,0x7f);
    }
  }
  else {
    temp_v1 = FUN_001834a4(0x1a,0x81);
  }
  temp_v2 = g_renderCtx;
  temp_v5 = packNibblesAndByte(6, 1, 0);
  piVar12 = (int *)(temp_v2 + 0x12b8);
  temp_v7 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = temp_v5;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v7 != temp_v5) {
    (**(romwright_code **)(temp_v2 + 0x12d4))(temp_v5);
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  FUN_001835b4(2,0x1a,0x58,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xdd);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x59,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xdd);
  efctSetSpeed();
  temp_v1 = g_renderCtx;
  temp_v2 = packNibblesAndByte(6, 7, 0);
  piVar12 = (int *)(temp_v1 + 0x12b8);
  temp_v4 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = temp_v2;
  if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v1 + 0x12d4))();
    *(unsigned char *)(temp_v1 + 0x12d0) = 0;
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
