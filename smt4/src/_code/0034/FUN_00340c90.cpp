/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340c90` (_code @ 0x340c90, 0x6b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c08ec(void);
int FUN_0023d450(...);
int FUN_0023e024(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c1b64(...);
int FUN_002f5288(void *, int *);
int FUN_00310550(...);
int FUN_00343324(int, float *, int);
int VectorSignedToFloat(...);

typedef struct fn_00340c90_arg0 fn_00340c90_arg0;
struct fn_00340c90_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xc];
    short field_0x18; /* +0x18 */
    short field_0x1a; /* +0x1a */
    byte field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);
/* stack frame of param_1: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
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
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001c08ec. */
/* Supplied declaration required: FUN_0023d450. */
/* Supplied declaration required: FUN_0023e024. */
extern int FUN_002865c0(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f5288. */
/* Supplied declaration required: FUN_00310550. */
/* Supplied declaration required: FUN_00343324. */
extern unsigned int FUN_003deab0(void *, unsigned int);


void FUN_00340c90(fn_00340c90_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned int temp_v5;
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
  float temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float fStack_4c;
  float temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int uStack_2c;
  
  temp_v11 = 0.0f;
  temp_v12 = 1.0f;
  temp_v31 = 0;
  temp_v32 = 0;
  temp_v33 = 0;
  uStack_2c = 0x3f800000;
  FUN_002f5288(param_1->field_0x8,&temp_v31);
  temp_v0 = *(int *)((int)param_1->field_0x8 + 0xc);
  temp_v4 = *(unsigned int *)(temp_v0 + 0x18);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x14);
  temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = -(temp_v6 * (temp_v12 / temp_v6));
  temp_v13 = (temp_v12 / temp_v6) * 2.0f;
  temp_v18 = (temp_v12 / -temp_v7) * 2.0f;
  temp_v20 = -(temp_v7 * (temp_v12 / -temp_v7));
  temp_v23 = 0xbf800000;
  temp_v24 = 0x80000000;
  temp_v14 = temp_v11;
  temp_v15 = temp_v11;
  temp_v17 = temp_v11;
  temp_v19 = temp_v11;
  temp_v21 = temp_v11;
  temp_v22 = temp_v11;
  temp_v25 = temp_v11;
  temp_v26 = temp_v11;
  temp_v27 = temp_v11;
  fStack_4c = temp_v12;
  FUN_00343324(DAT_0044ea00,&temp_v13,0);
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5da8(6,7,0);
  piVar5 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002865c0(6);
  piVar5 = (int *)(temp_v0 + 0x126c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1288))();
    *(unsigned char *)(temp_v0 + 0x1284) = 0;
  }
  temp_v0 = *(int *)((int)param_1->field_0x4 + 0x10);
  temp_v30 = 0xbc23d70a;
  temp_v6 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = *(int *)((int)param_1->field_0x8 + 0xc);
  temp_v12 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x14) - (unsigned int)*(unsigned short *)(temp_v0 + 0x24),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x18) - (unsigned int)*(unsigned short *)(temp_v0 + 0x26),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = temp_v12 * 0.5f;
  temp_v8 = temp_v8 * 0.5f;
  if (param_1->field_0x1c != 0) {
    temp_v10 = (float)VectorSignedToFloat((int)param_1->field_0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat((int)param_1->field_0x1a,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = temp_v12 - temp_v10;
    temp_v8 = temp_v8 - temp_v9;
  }
  temp_v28 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v29 = (float)VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v28 = temp_v11 + temp_v6 + temp_v28;
  temp_v29 = temp_v11 + temp_v7 + temp_v29;
  temp_v4 = FUN_003deab0(param_1->field_0x4,0);
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5d80(5,1);
  piVar5 = (int *)(temp_v0 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_0023d450(1,1,1);
  piVar5 = (int *)(temp_v0 + 0x128c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12a4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12a8))();
    *(unsigned char *)(temp_v0 + 0x12a4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = 6;
  FUN_00310550(6,3,1,1,0,0);
  piVar5 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_0023e024(param_1->field_0x4,temp_v4,&temp_v28,0xffffffff,1);
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x128c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12a4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12a8))();
    *(unsigned char *)(temp_v0 + 0x12a4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_0023d450(0,0,0,1);
  piVar5 = (int *)(temp_v0 + 0x128c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12a4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12a8))();
    *(unsigned char *)(temp_v0 + 0x12a4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = 6;
  FUN_00310550(6,3,0,1,0,3);
  piVar5 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002c1b64(DAT_0044ea00,0);
  FUN_001c08ec();
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x128c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12a4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12a8))();
    *(unsigned char *)(temp_v0 + 0x12a4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x126c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1288))();
    *(unsigned char *)(temp_v0 + 0x1284) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return;
}

} /* extern "C" */
