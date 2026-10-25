/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036dff4` (_code @ 0x36dff4, 0xdfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);

int FUN_00157558(int);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_0018098c(...);
int FUN_001834a4(...);
int FUN_00185dd4(...);
int FUN_001f3eec(...);
int FUN_001f3f34(void);
int effectSpawnDefaultArguments(...);
int campMenuEntryDraw(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
extern int jobGetWork(unsigned int process);
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_0018098c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00185dd4. */
extern unsigned int FUN_001f3e80(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001f3eec. */
/* Supplied declaration required: FUN_001f3f34. */
/* Supplied declaration required: effectSpawnDefaultArguments. */
/* Supplied declaration required: campMenuEntryDraw. */


int FUN_0036dff4(unsigned int process)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  
  temp_v0 = jobGetWork(process);
  FUN_00157558(g_renderCtx);
  temp_v3 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v3 + 0x1258);
  temp_v4 = *piVar7;
  temp_v5 = piVar7[temp_v4 + 2];
  *piVar7 = temp_v4 + 1;
  piVar7[temp_v4 + 3] = temp_v1;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v5 != temp_v1) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  if (*(int *)(temp_v0 + 4) != 0) {
    in_s0 = 1.0f;
    temp_v2 = FUN_001f3e80(0x28,0x50,0x3c,*(unsigned int *)(temp_v0 + 0x20),0);
    temp_v3 = g_renderCtx;
    VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v3 + 0x12b8);
    temp_v4 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v1;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    efctSetSpeed();
    FUN_00164b5c(2,0x22,1,0,0,0xb);
    efctSetSpeed();
  }
  temp_v3 = g_renderCtx;
  temp_v1 = packNibblesAndByte(6,7,0);
  piVar7 = (int *)(temp_v3 + 0x12b8);
  temp_v4 = piVar7[*piVar7 + 2];
  piVar7[*piVar7 + 2] = temp_v1;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  temp_v3 = *(int *)(temp_v0 + 4);
  temp_v9 = 320.0f;
  temp_v8 = 0.5f;
  temp_v6 = temp_v3 == 0;
  if (temp_v6) {
    temp_v3 = *(int *)(temp_v0 + 8);
  }
  if (!temp_v6 || temp_v3 != 0) {
    FUN_00164b5c(2,0x22,0,0,0,0xc);
    effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0xc));
    temp_v3 = FUN_001834a4(0x22,2);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = (float)VectorSignedToFloat((int)((temp_v9 - in_s0) * temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
    FUN_0018098c(*(unsigned int *)(temp_v0 + 0xc),(int)*(short *)(temp_v3 + 10));
  }
  temp_v12 = 0.0f;
  switch(*(unsigned int *)(temp_v0 + 4)) {
  case 0:
    switch(*(unsigned int *)(temp_v0 + 8)) {
    case 0:
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = -16.0f;
      FUN_001f3f34();
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3eec();
      efctSetSpeed();
      temp_v12 = (float)(int)temp_v12;
      FUN_00164b5c(2,0x22,0,0,temp_v12,0xc);
      effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0xc));
      temp_v3 = FUN_001834a4(0x22,2);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)((temp_v9 - temp_v12) * temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0018098c(*(unsigned int *)(temp_v0 + 0xc),(int)*(short *)(temp_v3 + 10));
      efctSetSpeed();
      break;
    case 1:
      temp_v3 = FUN_001834a4(0x22,0xb);
      temp_v3 = (int)*(short *)(*(int *)(temp_v3 + 0xc) + 2);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3eec(temp_v3);
      temp_v3 = FUN_001834a4(0x22,0xb);
      temp_v7 = VectorFloatToUnsigned(temp_v12,3);
      temp_v9 = (float)VectorSignedToFloat((int)(*(short **)(temp_v3 + 0xc))[1],
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorFloatToUnsigned(temp_v2,3);
      FUN_00185dd4(2,0x22,0xb,0,(int)((temp_v9 - temp_v12) * temp_v8),temp_v2,temp_v7,0xc);
      temp_v3 = FUN_001834a4(0x22,0xc);
      temp_v9 = (float)VectorSignedToFloat((int)(*(short **)(temp_v3 + 0xc))[1],
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorFloatToUnsigned(temp_v2,3);
      FUN_00185dd4(2,0x22,0xc,0,(int)((temp_v9 - temp_v12) * temp_v8),temp_v2,temp_v7,0xc);
      break;
    case 2:
      FUN_00164b5c(2,0x22,2,0,0,0xc);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3eec();
      efctSetSpeed();
      FUN_001835b4(2,0x22,0xd,0,0,0xd);
      FUN_001835b4(2,0x22,0x10,0,0,0xd);
      efctSetSpeed();
      break;
    case 3:
      FUN_00164b5c(2,0x22,2,0,0,0xc);
      FUN_001835b4(2,0x22,0xd,0,0,0xd);
      FUN_001835b4(2,0x22,0x10,0,0,0xd);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3eec();
      efctSetSpeed();
      FUN_001835b4(2,0x22,0xe,0,0,0xd);
      FUN_001835b4(2,0x22,0xf,0,0,0xd);
      efctSetSpeed();
      break;
    case 4:
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3eec();
      efctSetSpeed();
      temp_v3 = g_renderCtx;
      temp_v1 = packNibblesAndByte(6,1,0);
      piVar7 = (int *)(temp_v3 + 0x12b8);
      temp_v4 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v1;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v4 != temp_v1) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      FUN_00164b5c(2,0x22,1,0,0,0xb);
      temp_v3 = g_renderCtx;
      temp_v1 = packNibblesAndByte(6,7,0);
      piVar7 = (int *)(temp_v3 + 0x12b8);
      temp_v4 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v1;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v4 != temp_v1) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      efctSetSpeed();
      FUN_00164b5c(2,0x22,2,0,0,0xc);
      FUN_001835b4(2,0x22,0xd,0,0,0xd);
      FUN_001835b4(2,0x22,0xe,0,0,0xd);
      FUN_001835b4(2,0x22,0xf,0,0,0xd);
      FUN_001835b4(2,0x22,0x10,0,0,0xd);
      efctSetSpeed();
      FUN_001835b4(2,0x22,0x11,0,0,0xd);
      FUN_001835b4(2,0x22,0x13,0,0,0xf);
      FUN_001835b4(2,0x22,0x14,0,0,0x10);
      temp_v3 = FUN_001834a4(0x22,0x17);
      temp_v3 = (int)*(short *)(*(int *)(temp_v3 + 0xc) + 2);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3eec(temp_v3);
      temp_v3 = FUN_001834a4(0x22,0x17);
      temp_v7 = VectorFloatToUnsigned(temp_v12,3);
      temp_v10 = (float)VectorSignedToFloat((int)(*(short **)(temp_v3 + 0xc))[1],
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorFloatToUnsigned(temp_v2,3);
      FUN_00185dd4(2,0x22,0x17,0,(int)((temp_v10 - temp_v12) * temp_v8),temp_v2,temp_v7,0xc);
      temp_v3 = FUN_001834a4(0x22,0x18);
      temp_v10 = (float)VectorSignedToFloat((int)(*(short **)(temp_v3 + 0xc))[1],
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorFloatToUnsigned(temp_v2,3);
      temp_v12 = (float)(int)((temp_v10 - temp_v12) * temp_v8);
      FUN_00185dd4(2,0x22,0x18,0,temp_v12,temp_v2,temp_v7,0xc);
      effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0x10));
      temp_v3 = FUN_001834a4(0x22,0x19);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)((temp_v9 - temp_v12) * temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0018098c(*(unsigned int *)(temp_v0 + 0x10),(int)*(short *)(temp_v3 + 10));
      efctSetSpeed();
      break;
    default:
    }
    break;
  case 1:
    campMenuEntryDraw(temp_v0,0xb);
    FUN_00164b5c(2,0x22,3,0,0,0xc);
    effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0x10));
    temp_v3 = FUN_001834a4(0x22,0x19);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)((temp_v9 - in_s0) * temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0018098c(*(unsigned int *)(temp_v0 + 0x10),(int)*(short *)(temp_v3 + 10));
    break;
  case 2:
    campMenuEntryDraw(temp_v0,0xb);
    FUN_00164b5c(2,0x22,3,0,0,0xc);
    effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0x10));
    temp_v3 = FUN_001834a4(0x22,0x19);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)((temp_v9 - in_s0) * temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0018098c(*(unsigned int *)(temp_v0 + 0x10),(int)*(short *)(temp_v3 + 10));
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001f3f34();
    FUN_00164b5c(2,0x22,4,(int)temp_v9,0,0xe);
    break;
  case 3:
    campMenuEntryDraw(temp_v0,0xb);
    FUN_00164b5c(2,0x22,4,0,0,0xc);
    temp_v3 = 0;
    do {
      temp_v1 = *(int *)(temp_v0 + 0x18);
      temp_v4 = FUN_001834a4(0x22,0x29 - temp_v3);
      FUN_001835b4(2,0x22,*(unsigned char *)((temp_v1 + temp_v3) % 8 + 0x57f218) + 0x1f,
                   (int)*(short *)(temp_v4 + 8),(int)*(short *)(temp_v4 + 10),0xd);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
    temp_v0 = FUN_001834a4(0x22,0x2a);
    temp_v3 = (int)*(short *)(temp_v0 + 10);
    temp_v2 = 0x1f;
    temp_v0 = (int)*(short *)(temp_v0 + 8);
    FUN_001835b4(2,0x22,temp_v2,temp_v0,temp_v3,0xd);
    break;
  case 4:
    temp_v11 = 0;
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001f3eec();
    efctSetSpeed();
    campMenuEntryDraw(temp_v0,0xb);
    FUN_00164b5c(2,0x22,4,0,0,0xc);
    temp_v3 = 0;
    do {
      temp_v1 = FUN_001834a4(0x22,0x29 - temp_v3);
      FUN_001835b4(2,0x22,0x1f,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),0xd);
      temp_v9 = (float)((unsigned long long)temp_v11 >> 0x20);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
    temp_v3 = FUN_001834a4(0x22,0x2a);
    FUN_001835b4(2,0x22,0x1f,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xd);
    efctSetSpeed();
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001f3eec();
    efctSetSpeed();
    temp_v3 = FUN_001834a4(0x22,0x2f);
    temp_v1 = (int)*(short *)(*(int *)(temp_v3 + 0xc) + 2);
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001f3eec(temp_v1);
    temp_v3 = (int)*(short *)(*(int *)(temp_v3 + 0xc) + 2);
    temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (temp_v12 - temp_v9) * temp_v8;
    temp_v3 = FUN_001834a4(0x22,0x2e);
    temp_v0 = (int)temp_v8;
    temp_v8 = (float)VectorSignedToFloat((int)(*(short **)(temp_v3 + 0xc))[1],
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v2,3);
    temp_v2 = VectorFloatToUnsigned((temp_v8 - temp_v10) + temp_v9,3);
    FUN_00185dd4(2,0x22,0x2e,0,temp_v0,temp_v7,temp_v2,0x10);
    temp_v3 = FUN_001834a4(0x22,0x2f);
    temp_v2 = VectorFloatToUnsigned(temp_v9,3);
    temp_v7 = VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v7,3);
    FUN_00185dd4(2,0x22,0x2f,0,temp_v0,temp_v7,temp_v2,0x11);
    efctSetSpeed();
    break;
  case 5:
    FUN_00164b5c(2,0x22,5,0,0,0xc);
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001f3f34();
    FUN_001835b4(2,0x22,0x30,(int)temp_v9,0,0xd);
    temp_v2 = FUN_001f3e80(0,100,0xc,*(unsigned int *)(temp_v0 + 0x1c),0);
    temp_v3 = g_renderCtx;
    VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v3 + 0x12b8);
    temp_v1 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    efctSetSpeed();
    FUN_001835b4(2,0x22,0x31,0,0,0xe);
    efctSetSpeed();
    temp_v3 = g_renderCtx;
    temp_v0 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v3 + 0x12b8);
    temp_v1 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    break;
  case 6:
    FUN_00164b5c(2,0x22,5,0,0,0xc);
    temp_v0 = 0;
    temp_v2 = 0x30;
    temp_v3 = 0;
    FUN_001835b4(2,0x22,temp_v2,temp_v0,temp_v3,0xd);
  }
  temp_v3 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1258);
  temp_v0 = *piVar7;
  temp_v1 = piVar7[temp_v0 + 2];
  *piVar7 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar7[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return 0;
}

} /* extern "C" */
