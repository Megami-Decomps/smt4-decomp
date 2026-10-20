/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335b80` (_code @ 0x335b80, 0x564 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxCallB(...);
int FUN_002a34e8(...);
int FUN_002a3504(...);
int FUN_002ba12c(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_002c198c(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
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

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: renderCtxCallB. */
/* Supplied declaration required: FUN_002a34e8. */
/* Supplied declaration required: FUN_002a3504. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c198c. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned int FUN_00335b80(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  int temp_v9 [6];
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int uStack_4c;
  int temp_v19;
  unsigned int uStack_44;
  unsigned int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  
  temp_v1 = g_titleScene;
  if ((*param_1 == 8) && (param_1[7] != 0)) {
    temp_v0 = FUN_002c5d80(1,0);
    piVar5 = (int *)(temp_v1 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v6 = 0x3f800000;
    FUN_002bf538();
    FUN_002bed3c();
    FUN_002bf4f8(0x2d,3000);
    temp_v4 = 0.35f;
    FUN_002ba12c(g_titleScene);
    temp_v4 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x2d,3000,(int)temp_v4,0,2);
    temp_v1 = g_titleScene;
    piVar5 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))(piVar5[temp_v0 + 1]);
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bf538();
    temp_v1 = g_titleScene;
    temp_v0 = packNibblesAndByte(6,1,0);
    piVar5 = (int *)(temp_v1 + 0x12ac);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
    FUN_002bf538();
    FUN_002bed3c();
    temp_v1 = FUN_002bf4f8(0x2d,0x7d2);
    temp_v9[0] = param_1[0xb];
    temp_v20 = 0;
    uStack_44 = VectorSignedToFloat(-(int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v19 = VectorSignedToFloat(-(int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v21 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v23 = 0;
    temp_v9[1] = 0;
    temp_v9[2] = 0;
    temp_v9[3] = 0;
    temp_v9[4] = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v18 = 0;
    uStack_4c = 0x3f800000;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v9[5] = temp_v9[0];
    temp_v14 = temp_v6;
    FUN_002a3504(temp_v9,temp_v9,&temp_v19);
    FUN_002a34e8(temp_v9,&temp_v21);
    renderCtxCallB(temp_v9);
    temp_v1 = FUN_002bf4f8(0x2d,2000);
    temp_v8 = 0.3f;
    temp_v4 = temp_v8;
    FUN_002ba12c(g_titleScene);
    temp_v7 = 0.5f;
    temp_v5 = (float)VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x2d,2000,(int)(temp_v5 + temp_v8 * 0.5f),-(int)*(short *)(temp_v1 + 10),6);
    FUN_002c198c(g_titleScene);
    FUN_002bf538();
    FUN_002bf538();
    temp_v9[0] = param_1[0xd];
    temp_v9[1] = 0;
    temp_v9[4] = 0;
    temp_v9[2] = 0;
    temp_v9[3] = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    uStack_4c = 0x3f800000;
    temp_v9[5] = temp_v9[0];
    temp_v14 = temp_v6;
    FUN_002a3504(temp_v9,temp_v9,&temp_v19);
    FUN_002a34e8(temp_v9,&temp_v21);
    renderCtxCallB(temp_v9);
    temp_v1 = FUN_002bf4f8(0x2d,0x7d1);
    FUN_002ba12c(g_titleScene);
    temp_v8 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x2d,0x7d1,(int)(temp_v8 + temp_v4 * temp_v7),-(int)*(short *)(temp_v1 + 10),6);
    FUN_002c198c(g_titleScene);
    FUN_002bf538();
    temp_v1 = g_titleScene;
    piVar5 = (int *)(g_titleScene + 0x12ac);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x12c8))(piVar5[temp_v0 + 1]);
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
    FUN_002bf538();
    temp_v1 = g_titleScene;
    temp_v0 = FUN_002c5d80(1,0);
    piVar5 = (int *)(temp_v1 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bf538();
    FUN_002bed3c();
    FUN_002bf4f8(0x2d,1000);
    temp_v4 = 0.28f;
    FUN_002ba12c(g_titleScene);
    temp_v4 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x2d,1000,(int)temp_v4,0,6);
    temp_v1 = g_titleScene;
    piVar5 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bf538();
    return 0;
  }
  return 0;
}

} /* extern "C" */
