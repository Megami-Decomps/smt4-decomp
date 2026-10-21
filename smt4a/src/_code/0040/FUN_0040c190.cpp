/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040c190` (_code @ 0x40c190, 0x4bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxResetColorScale(int);
int skinObjectUpdateMatrices(int);
int FUN_0037aa68(unsigned int, int);
int block530OwnerReset(int, float *, int);
int FUN_004097b4(int, int *, int, int);
int FUN_004ff058(unsigned int, unsigned int, float *, unsigned int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_0037aa68. */
extern int FUN_00387580(unsigned int);
extern int flagsPackFourBooleans(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: block530OwnerReset. */
/* Supplied declaration required: FUN_004097b4. */
/* Supplied declaration required: FUN_004ff058. */
extern unsigned int FUN_004ff4b0(unsigned int, unsigned int);


void FUN_0040c190(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float fStack_34;
  int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  
  FUN_0037aa68(*(unsigned int *)(param_1 + 8),0);
  temp_v0 = g_renderCtx;
  temp_v7 = 0.0f;
  temp_v27 = 0;
  temp_v28 = 0;
  temp_v29 = 0;
  temp_v30 = 0;
  temp_v8 = 1.0f;
  piVar6 = (int *)(g_renderCtx + 0x1318);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = 0;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v3 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  FUN_004097b4(g_renderCtx,&temp_v27,0,7);
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = -(temp_v5 * (temp_v8 / temp_v5));
  temp_v12 = (temp_v8 / temp_v5) * 2.0f;
  temp_v17 = (temp_v8 / -temp_v6) * 2.0f;
  temp_v19 = -(temp_v6 * (temp_v8 / -temp_v6));
  temp_v22 = 0xbf800000;
  temp_v23 = 0x80000000;
  temp_v13 = temp_v7;
  temp_v14 = temp_v7;
  temp_v16 = temp_v7;
  temp_v18 = temp_v7;
  temp_v20 = temp_v7;
  temp_v21 = temp_v7;
  temp_v24 = temp_v7;
  temp_v25 = temp_v7;
  temp_v26 = temp_v7;
  fStack_34 = temp_v8;
  block530OwnerReset(g_renderCtx,&temp_v12,0);
  temp_v0 = g_renderCtx;
  temp_v2 = packNibblesAndByte(6,7,0);
  piVar6 = (int *)(temp_v0 + 0x12b8);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v2 = FUN_00387580(6);
  piVar6 = (int *)(temp_v0 + 0x1278);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x1294))();
    *(unsigned char *)(temp_v0 + 0x1290) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v2 = FUN_001692ac(5,1);
  piVar6 = (int *)(temp_v0 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v2 = flagsPackFourBooleans(1,1,1);
  piVar6 = (int *)(temp_v0 + 0x1298);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x12b0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12b4))();
    *(unsigned char *)(temp_v0 + 0x12b0) = 0;
  }
  temp_v0 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  temp_v8 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)
                                         (*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = temp_v10 - 143.0f;
  temp_v5 = (float)VectorSignedToFloat(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14) -
                                     (unsigned int)*(unsigned short *)(temp_v0 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat((int)(temp_v5 * 0.5f),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = temp_v7 + temp_v8 + temp_v9;
  temp_v11 = temp_v7;
  temp_v1 = FUN_004ff4b0(*(unsigned int *)(param_1 + 4),0);
  FUN_004ff058(*(unsigned int *)(param_1 + 4),temp_v1,&temp_v9,0xffffffff,1);
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1298);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x12b0) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12b4))();
    *(unsigned char *)(temp_v0 + 0x12b0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1278);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1294))();
    *(unsigned char *)(temp_v0 + 0x1290) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x12b8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1318);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
