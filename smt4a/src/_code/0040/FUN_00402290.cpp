/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00402290` (_code @ 0x402290, 0x764 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/W6_W6Match8_GpuDepth.h"
#include "util/PackNibbles.h"

extern "C" {

int renderCtxResetColorScale(...);
int renderCtxSelectTexture(...);
int skinObjectUpdateMatrices(...);
int effectApplyFiveComponentsWithDefaults(void);
int FUN_0037aa68(void *, int *);
int packFields(...);
int flagsPackFourBooleans(...);
int block530OwnerReset(int, float *, int);
int FUN_004097b4(int, int *, int, int);
int VectorSignedToFloat(...);

typedef struct fn_00402290_arg0 fn_00402290_arg0;
struct fn_00402290_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x18];
    short field_0x24; /* +0x24 */
    short field_0x26; /* +0x26 */
    byte field_0x28; /* +0x28 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: renderCtxSelectTexture. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: effectApplyFiveComponentsWithDefaults. */
/* Supplied declaration required: FUN_0037aa68. */
extern int FUN_00387580(unsigned int);
/* Supplied declaration required: packFields. */
/* Supplied declaration required: flagsPackFourBooleans. */
/* Supplied declaration required: block530OwnerReset. */
/* Supplied declaration required: FUN_004097b4. */
/* Supplied declaration required: FUN_004ff058. */
extern unsigned int FUN_004ff4b0(void *, unsigned int);


void FUN_00402290(fn_00402290_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  float fStack_4c;
  int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int uStack_3c;
  int temp_v35;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  temp_v13 = 0x3f80000000000000;
  temp_v32 = 0;
  temp_v33 = 0;
  temp_v34 = 0;
  uStack_3c = 0x3f800000;
  FUN_0037aa68(param_1->field_0x8,&temp_v32);
  temp_v0 = g_renderCtx;
  temp_v35 = temp_v32;
  uStack_34 = temp_v33;
  uStack_30 = temp_v34;
  uStack_2c = uStack_3c;
  piVar5 = (int *)(g_renderCtx + 0x1318);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 + 1;
  piVar5[temp_v1 + 3] = 0;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v2 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  FUN_004097b4(g_renderCtx,&temp_v35,0,7);
  temp_v0 = *(int *)((int)param_1->field_0x8 + 0xc);
  temp_v4 = *(unsigned int *)(temp_v0 + 0x18);
  temp_v7 = *(unsigned int *)(temp_v0 + 0x14);
  temp_v18 = (unsigned int)temp_v13;
  temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  fStack_4c = (float)((unsigned long long)temp_v13 >> 0x20);
  temp_v20 = -(temp_v8 * (fStack_4c / temp_v8));
  temp_v17 = (fStack_4c / temp_v8) * 2.0f;
  temp_v22 = (fStack_4c / -temp_v9) * 2.0f;
  temp_v24 = -(temp_v9 * (fStack_4c / -temp_v9));
  temp_v27 = 0xbf800000;
  temp_v28 = 0x80000000;
  temp_v19 = temp_v18;
  temp_v21 = temp_v18;
  temp_v23 = temp_v18;
  temp_v25 = temp_v18;
  temp_v26 = temp_v18;
  temp_v29 = temp_v18;
  temp_v30 = temp_v18;
  temp_v31 = temp_v18;
  block530OwnerReset(g_renderCtx,&temp_v17,0);
  temp_v0 = g_renderCtx;
  temp_v8 = (float)temp_v13;
  temp_v1 = packNibblesAndByte(6, 7, 0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = FUN_00387580(6);
  piVar5 = (int *)(temp_v0 + 0x1278);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1294))();
    *(unsigned char *)(temp_v0 + 0x1290) = 0;
  }
  temp_v0 = *(int *)((int)param_1->field_0x4 + 0x10);
  temp_v16 = 0xbc23d70a;
  temp_v9 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = *(int *)((int)param_1->field_0x8 + 0xc);
  temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x14) - (unsigned int)*(unsigned short *)(temp_v0 + 0x24),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x18) - (unsigned int)*(unsigned short *)(temp_v0 + 0x26),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = temp_v6 * 0.5f;
  temp_v10 = temp_v10 * 0.5f;
  if (param_1->field_0x28 != 0) {
    temp_v12 = (float)VectorSignedToFloat((int)param_1->field_0x24,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat((int)param_1->field_0x26,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v6 - temp_v12;
    temp_v10 = temp_v10 - temp_v11;
  }
  temp_v14 = (float)VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorSignedToFloat((int)temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = temp_v8 + temp_v9 + temp_v14;
  temp_v15 = temp_v8 + temp_v5 + temp_v15;
  temp_v4 = FUN_004ff4b0(param_1->field_0x4,0);
  temp_v0 = g_renderCtx;
  temp_v1 = FUN_001692ac(5,1);
  piVar5 = (int *)(temp_v0 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = flagsPackFourBooleans(1,1,1);
  piVar5 = (int *)(temp_v0 + 0x1298);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12b0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12b4))();
    *(unsigned char *)(temp_v0 + 0x12b0) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = 6;
  packFields(6,3,1,1,0,0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  GpuFloatEncoding positionZ;
  positionZ.bits = temp_v16;
  SpriteDrawVector3 position = {temp_v14, temp_v15, positionZ.value};
  FUN_004ff058((SpriteDrawOwner *)param_1->field_0x4, temp_v4, &position,
               0xFFFFFFFFu, 1, 1.0f);
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x12b8);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1298);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12b0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12b4))();
    *(unsigned char *)(temp_v0 + 0x12b0) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = flagsPackFourBooleans(0,0,0,1);
  piVar5 = (int *)(temp_v0 + 0x1298);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12b0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12b4))();
    *(unsigned char *)(temp_v0 + 0x12b0) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = 6;
  packFields(6,3,0,1,0,3);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  renderCtxSelectTexture(g_renderCtx,0);
  effectApplyFiveComponentsWithDefaults();
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1298);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12b0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12b4))();
    *(unsigned char *)(temp_v0 + 0x12b0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x12b8);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1278);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1294))();
    *(unsigned char *)(temp_v0 + 0x1290) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x12b8);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1318);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
