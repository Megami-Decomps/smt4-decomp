/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00258618` (_code @ 0x258618, 0x40c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023e024(unsigned int, unsigned int, float *, unsigned int, int);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002f5288(unsigned int, int);
int FUN_00343324(int, float [4], int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
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
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0023d450(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0023e024. */
extern int FUN_002865c0(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f5288. */
/* Supplied declaration required: FUN_00343324. */
extern unsigned int FUN_003deab0(unsigned int, unsigned int);


void FUN_00258618(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8 [4];
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int uStack_2c;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  
  FUN_002f5288(*(unsigned int *)(param_1 + 8),0);
  temp_v7 = 0.0f;
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  temp_v8[1] = 0.0f;
  temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8[2] = 0.0f;
  temp_v9 = 0;
  temp_v11 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v8[0] = (1.0f / temp_v5) * 2.0f;
  temp_v8[3] = -(temp_v5 * (1.0f / temp_v5));
  temp_v10 = (1.0f / -temp_v6) * 2.0f;
  temp_v12 = -(temp_v6 * (1.0f / -temp_v6));
  temp_v15 = 0xbf800000;
  temp_v16 = 0x80000000;
  temp_v19 = 0;
  uStack_2c = 0x3f800000;
  FUN_00343324(g_titleScene,temp_v8,0);
  temp_v0 = g_titleScene;
  temp_v1 = FUN_002c5da8(6,7,0);
  piVar6 = (int *)(temp_v0 + 0x12ac);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = g_titleScene;
  temp_v1 = FUN_002865c0(6);
  piVar6 = (int *)(temp_v0 + 0x126c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1288))();
    *(unsigned char *)(temp_v0 + 0x1284) = 0;
  }
  temp_v0 = g_titleScene;
  temp_v1 = FUN_002c5d80(5,1);
  piVar6 = (int *)(temp_v0 + 0x124c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = g_titleScene;
  temp_v1 = FUN_0023d450(1,1,1);
  piVar6 = (int *)(temp_v0 + 0x128c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12a4) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12a8))();
    *(unsigned char *)(temp_v0 + 0x12a4) = 0;
  }
  temp_v0 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  temp_v5 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v21 = (float)VectorSignedToFloat(*(unsigned int *)
                                         (*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v21 = temp_v21 - 143.0f;
  temp_v6 = (float)VectorSignedToFloat(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14) -
                                     (unsigned int)*(unsigned short *)(temp_v0 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v20 = (float)VectorSignedToFloat((int)(temp_v6 * 0.5f),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v20 = temp_v7 + temp_v5 + temp_v20;
  temp_v22 = temp_v7;
  temp_v2 = FUN_003deab0(*(unsigned int *)(param_1 + 4),0);
  FUN_0023e024(*(unsigned int *)(param_1 + 4),temp_v2,&temp_v20,0xffffffff,1);
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x128c);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12a4) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12a8))();
    *(unsigned char *)(temp_v0 + 0x12a4) = 0;
  }
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x126c);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1288))();
    *(unsigned char *)(temp_v0 + 0x1284) = 0;
  }
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x124c);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x12ac);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return;
}

} /* extern "C" */
