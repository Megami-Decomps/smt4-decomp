/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00486444` (_code @ 0x486444, 0x8c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxPopState(...);
int FUN_0049368c(...);

int renderStackPushIndexed(...);
int distSpatial(void);
int FUN_00486d0c(...);
int FUN_00487d6c(...);
int FUN_004884d8(...);
int FUN_004888e4(...);
int FUN_0048a5e4(...);
int FUN_0048b420(...);
int FUN_0048d67c(...);
int FUN_0048d98c(...);
int FUN_004900e0(...);
int FUN_004915f0(int);
int FUN_00491c60(int);
float FUN_00492adc(int);
float FUN_00492b98(void);
int lmapSceneGetObj(...);
int NaviMain_GetCurrentMap(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern int DAT_00587f20; /* 0x587f20 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern int DAT_005f1604; /* 0x5f1604 */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */
extern signed char DAT_005f1c73; /* 0x5f1c73 */
extern signed char DAT_005f1c7f; /* 0x5f1c7f */
extern int DAT_005f1c80; /* 0x5f1c80 */
extern float DAT_005f1c84; /* 0x5f1c84 */
extern float DAT_005f1c88; /* 0x5f1c88 */
extern float DAT_005f1c8c; /* 0x5f1c8c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxPopState. */
/* Supplied declaration required: renderStackPushIndexed. */
/* Supplied declaration required: distSpatial. */
extern int gameFlagsClassify(unsigned int);
extern int FUN_00384cf4(void);
/* Supplied declaration required: FUN_00486d0c. */
/* Supplied declaration required: FUN_00487d6c. */
/* Supplied declaration required: FUN_004884d8. */
/* Supplied declaration required: FUN_004888e4. */
/* Supplied declaration required: FUN_0048a5e4. */
extern unsigned char FUN_0048b1bc(int context, float angle);
/* Supplied declaration required: FUN_0048b420. */
/* Supplied declaration required: FUN_0048d67c. */
/* Supplied declaration required: FUN_0048d98c. */
/* Supplied declaration required: FUN_004900e0. */
/* Supplied declaration required: FUN_004915f0. */
/* Supplied declaration required: FUN_00491c60. */
extern unsigned long long *sub68OwnerGetBlock60(int);
extern int naviGetActiveStateValue(int);
/* Supplied declaration required: lmapSceneGetObj. */
extern int naviMainSelectPair(int);
extern unsigned int FUN_00492c5c(int);
extern int FUN_00492c70(int);
/* Supplied declaration required: FUN_0049368c. */
/* Supplied declaration required: NaviMain_GetCurrentMap. */


void FUN_00486444(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned long long *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  float temp_v7;
  float temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  
  temp_v2 = gameFlagsGetBlock();
  temp_v3 = param_1 + 0x4cc;
  temp_v1 = 0;
  pfVar5 = (float *)lmapSceneGetObj();
  temp_v17 = pfVar5[1];
  temp_v7 = *pfVar5;
  temp_v8 = pfVar5[2];
  if (DAT_005f1a5e != '\0') {
    temp_v4 = FUN_00384cf4();
    if (temp_v4 == 0) {
      FUN_0048a5e4(param_1);
      FUN_00487d6c(param_1);
      return;
    }
    temp_v5 = FUN_00492c5c(temp_v3);
    temp_v4 = FUN_00492c70(temp_v3);
  }
  else {
    temp_v5 = NaviMain_GetCurrentMap(temp_v3);
    temp_v4 = naviMainSelectPair(temp_v3);
  }
  if (DAT_005f1c73 != '\0') {
    temp_v7 = -14.0f;
    temp_v8 = -1674.0f;
  }
  if ((DAT_005f1c7f != '\0') && (DAT_005f1c80 = DAT_005f1c80 + 1, DAT_005f1c80 < 0x65)) {
    temp_v7 = DAT_005f1c84 + 10.24f;
    temp_v17 = DAT_005f1c88 + -10.59f;
    temp_v8 = DAT_005f1c8c + 1.66f;
    DAT_005f1c84 = temp_v7;
    DAT_005f1c88 = temp_v17;
    DAT_005f1c8c = temp_v8;
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 2) != 0) {
    return;
  }
  if ((DAT_005f1604 != 0xb6) && (DAT_005f1604 != 0xb7 && DAT_005f1604 != 0xb8)) {
    temp_v6 = gameFlagsClassify(temp_v5);
    if (temp_v6 == 2 || temp_v6 == 3) {
      DAT_00587f20 = 0xf1;
      FUN_0048a5e4(param_1);
      FUN_00487d6c(param_1);
      DAT_00587f20 = DAT_00587f20 + 1;
      return;
    }
    if (temp_v6 != 0) {
      return;
    }
  }
  FUN_0048b420(param_1,1);
  temp_v14 = 0.024f;
  DAT_00587f20 = 0xb;
  piVar12 = (int *)(param_1 + 0x1484);
  piVar13 = (int *)(param_1 + 0x1488);
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0) {
    if (*(char *)(param_1 + 0x7b91) == '\0') {
      temp_v6 = *(int *)(param_1 + 0x2051c);
      distSpatial();
      if (temp_v6 >= 0x3f800001) {
        *(unsigned char *)(param_1 + 0x7b91) = 1;
        goto LAB_004866c8;
      }
      temp_v0 = *(char *)(param_1 + 0x7b91);
      temp_v9 = temp_v0 != '\0';
      if (!temp_v9) {
        temp_v0 = *(char *)(param_1 + 0x7b90);
      }
      if (temp_v9 || temp_v0 != '\0') goto LAB_004866c8;
      temp_v0 = *(char *)(param_1 + 0x7b92);
      temp_v9 = temp_v0 == '\0';
      if (temp_v9) {
        temp_v0 = *(char *)(param_1 + 0x7b93);
      }
      if (!temp_v9 || temp_v0 != '\0') goto LAB_004866c8;
    }
    else {
LAB_004866c8:
      temp_v6 = param_1 + temp_v4 * 8;
      temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x148c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar12 = (int)(temp_v15 + temp_v7 * temp_v14);
      temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x1490),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar13 = (int)(temp_v15 + temp_v8 * temp_v14);
    }
    if (DAT_005f1a5e != '\0') {
      temp_v6 = param_1 + temp_v4 * 8;
      temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x148c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat((*(int *)(param_1 + 0x20638) * 0xc) / 500,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar12 = (int)(temp_v16 + temp_v15);
      temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x1490),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat((*(int *)(param_1 + 0x2063c) * 0xc) / 500,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar13 = (int)(temp_v16 + temp_v15);
    }
    if (*(char *)(param_1 + 0x20634) != '\0') {
      temp_v4 = param_1 + temp_v4 * 8;
      temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x148c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat((*(int *)(param_1 + 0x20648) * 0xc) / 500,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar12 = (int)(temp_v16 + temp_v15);
      temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x1490),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat((*(int *)(param_1 + 0x2064c) * 0xc) / 500,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar13 = (int)(temp_v16 + temp_v15);
    }
    if (*(char *)(param_1 + 0x7b90) != '\0') {
      FUN_00491c60(param_1);
      *(unsigned char *)(param_1 + 0x7b91) = 1;
      *(unsigned char *)(param_1 + 0x7b92) = 1;
      FUN_004915f0(param_1);
      *(unsigned char *)(param_1 + 0x7b93) = 1;
    }
    else if (*(char *)(param_1 + 0x7b92) != '\0') {
      FUN_004915f0(param_1);
      *(unsigned char *)(param_1 + 0x7b93) = 1;
    }
    if (*(char *)(param_1 + 0x7b91) != '\0') {
      FUN_004900e0(param_1);
      temp_v1 = 1;
      *(unsigned char *)(param_1 + 0x7b93) = 1;
      FUN_0048d67c(param_1);
    }
    else if (*(char *)(param_1 + 0x7b93) != '\0') {
      FUN_0048d67c(param_1);
    }
  }
  FUN_0048d98c(param_1);
  FUN_004884d8(param_1);
  FUN_00486d0c(param_1);
  FUN_004888e4(param_1);
  temp_v4 = naviGetActiveStateValue(temp_v3);
  temp_v6 = NaviMain_GetCurrentMap(temp_v3);
  if ((temp_v4 == temp_v6) && ((int)*(char *)(param_1 + 100) == *(int *)(param_1 + 0x20510))) {
    puVar9 = (unsigned long long *)sub68OwnerGetBlock60(temp_v3);
    temp_v13 = *puVar9;
    temp_v5 = FUN_001692ac(1,0);
    renderStackPushIndexed(g_renderCtx,3,temp_v5);
    piVar10 = (int *)(param_1 + 0x20508);
    if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) == 0) {
      temp_v1 = 1;
    }
    if ((*(unsigned int *)(param_1 + 0x10) & 0x20) != 0) {
      temp_v1 = 0;
    }
    temp_v15 = 160.0f;
    temp_v16 = 120.0f;
    piVar11 = (int *)(param_1 + 0x2050c);
    if (DAT_005f1a5e != '\0') {
      temp_v4 = naviMainSelectPair(temp_v3);
      pfVar5 = (float *)lmapSceneGetObj(temp_v3);
      temp_v7 = pfVar5[2];
      if (*(char *)(temp_v2 + 0xd8e) != '\f') {
        temp_v14 = 0.012f;
        temp_v8 = (float)VectorSignedToFloat(*piVar12 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = param_1 + temp_v4 * 8;
        temp_v10 = (float)VectorSignedToFloat(*piVar13 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x148c),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x1490),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = temp_v11 * 0.5f;
        temp_v12 = temp_v12 * 0.5f;
      }
      else {
        temp_v4 = param_1 + temp_v4 * 8;
        temp_v8 = (float)VectorSignedToFloat(*piVar12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat(*piVar13,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x148c),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x1490),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v8 = (float)VectorSignedToFloat((int)(temp_v8 - (float)temp_v13),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v10 = (float)VectorSignedToFloat((int)(temp_v10 - (float)((unsigned long long)temp_v13 >> 0x20)),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (int)((temp_v11 + *pfVar5 * temp_v14) - (temp_v8 - temp_v15));
      *piVar10 = temp_v4;
      *piVar11 = (int)((temp_v12 + temp_v7 * temp_v14) - (temp_v10 - temp_v16));
      FUN_00492adc(temp_v3);
      *(int *)(param_1 + 0x20518) = temp_v4;
      temp_v15 = (float)VectorSignedToFloat(*piVar10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat(*piVar11,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else if (temp_v1) {
      temp_v15 = (float)VectorSignedToFloat((int)(float)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat((int)(float)((unsigned long long)temp_v13 >> 0x20),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = temp_v15 + 160.0f;
      temp_v14 = temp_v14 + 120.0f;
      *piVar10 = (int)temp_v15;
      *piVar11 = (int)temp_v14;
      *(float *)(param_1 + 0x2051c) = temp_v7;
      *(float *)(param_1 + 0x20520) = temp_v17;
      *(float *)(param_1 + 0x20524) = temp_v8;
      FUN_00492b98();
      *(float *)(param_1 + 0x20514) = temp_v17;
      FUN_00492adc(temp_v3);
      *(float *)(param_1 + 0x20518) = temp_v17;
      if (DAT_005f1c73 != '\0') {
        FUN_00492b98();
        *(float *)(param_1 + 0x20518) = temp_v17;
      }
    }
    else {
      temp_v15 = (float)VectorSignedToFloat(*piVar10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat(*piVar11,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v4 = FUN_0048b1bc(param_1,*(float*)(param_1 + 0x20518));
    if (*(char *)(temp_v2 + 0xd8e) != '\f') {
      FUN_0049368c(param_1 + 0x4d0,temp_v4 + 0xbd5,(int)temp_v15,(int)temp_v14,0xb,1);
    }
    else {
      FUN_0049368c(param_1 + 0x4d0,temp_v4 + 0xbc1,(int)temp_v15,(int)temp_v14,0xb,1);
    }
    temp_v4 = FUN_0048b1bc(param_1,*(float*)(param_1 + 0x20514));
    if (*(char *)(temp_v2 + 0xd8e) != '\f') {
      FUN_0049368c(param_1 + 0x4d0,temp_v4 + 0xbcd,(int)temp_v15,(int)temp_v14,0xb,1);
    }
    else {
      FUN_0049368c(param_1 + 0x4d0,temp_v4 + 0xbb9,(int)temp_v15,(int)temp_v14,0xb,1);
    }
    renderCtxPopState(g_renderCtx,3);
    FUN_00492adc(temp_v3);
  }
  FUN_0048b420(param_1,0);
  DAT_00587f20 = 0xf1;
  FUN_0048a5e4(param_1);
  FUN_00487d6c(param_1);
  DAT_00587f20 = DAT_00587f20 + 1;
  return;
}

} /* extern "C" */
