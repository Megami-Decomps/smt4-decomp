/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240d88` (_code @ 0x240d88, 0xaa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void textureLoadOptionalDemonModel(s32 id, s32 x, s32 y, u32 layer, s32 mapped);
int FUN_0029a17c(...);
int FUN_002b6dd8(...);
int devilGetRecord(void);
int FUN_002bdf94(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char LAB_00241174; /* 0x241174 */
extern unsigned char LAB_0024160c; /* 0x24160c */
extern int g_screenStateWork; /* 0x43dd90 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0029a17c. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: devilGetRecord. */
extern unsigned int FUN_002bce30(short, unsigned int);
extern unsigned int FUN_002bd068(short);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_00240d88(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar7;
  unsigned int temp_v6;
  unsigned char *puVar9;
  int temp_v7;
  int temp_v8;
  int *piVar12;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [24];
  int temp_v13;
  int temp_v14;
  int iStack_30;
  int temp_v15;
  int temp_v16;
  
  temp_v7 = g_screenStateWork;
  temp_v9 = g_screenStateWork + param_1 * 0x8c;
  iStack_30 = param_1;
  temp_v15 = param_2;
  temp_v16 = param_3;
  temp_v1 = vec2GetXInt(temp_v9 + 0x354);
  temp_v2 = vec2GetYInt(temp_v9 + 0x354);
  temp_v11 = 0xffffffff;
  temp_v10 = 0.0f;
  temp_v0 = *(short *)(g_screenStateWork + 0x1e);
  if (temp_v0 == 2) {
    temp_v13 = 0x28f;
  }
  else {
    temp_v13 = 0;
    if (temp_v0 == 3 || temp_v0 == 4) {
      temp_v13 = 0x311;
    }
  }
  temp_v3 = FUN_002bf4f8(0x24,param_1 + 0xe3);
  temp_v5 = g_titleScene;
  temp_v4 = packNibblesAndByte(6,1,0);
  piVar12 = (int *)(temp_v5 + 0x12ac);
  temp_v8 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = temp_v4;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v8 != temp_v4) {
    (**(romwright_code **)(temp_v5 + 0x12c8))();
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  FUN_002bf288(2,0x24,0xd2,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x65);
  temp_v5 = g_titleScene;
  temp_v4 = packNibblesAndByte(6,7,0);
  piVar12 = (int *)(temp_v5 + 0x12ac);
  temp_v8 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = temp_v4;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v8 != temp_v4) {
    (**(romwright_code **)(temp_v5 + 0x12c8))();
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  temp_v5 = *(short *)(temp_v3 + 10) + temp_v2;
  temp_v4 = *(short *)(temp_v3 + 8) + temp_v1;
  if (temp_v15 != 0) {
    FUN_002bf288(2,0x24,0x214,temp_v4,temp_v5,0x65);
  }
  else {
    FUN_002bf288(2,0x24,0x20f,temp_v4,temp_v5,0x65);
  }
  if (param_1 < (int)(unsigned int)*(unsigned short *)(temp_v7 + 0x1e)) {
    temp_v14 = temp_v7 + param_1 * 2;
    psVar7 = (short *)(unsigned int)*(unsigned short *)(temp_v14 + 0xe);
    devilGetRecord();
    if (temp_v16 == 0) {
      temp_v4 = FUN_002bf4f8(0x24,0xd2);
      temp_v5 = g_titleScene;
      piVar12 = (int *)(g_titleScene + 0x130c);
      temp_v8 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = 3;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v8 != 3) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                   (int)**(short **)(temp_v4 + 0xc),
                   (int)(*(short **)(temp_v4 + 0xc))[1] + *(int *)(temp_v7 + param_1 * 4 + 0x68),1);
      temp_v5 = FUN_002bf4f8(0x24,0xda);
      textureLoadOptionalDemonModel((int)*psVar7,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x68,1);
      temp_v5 = g_titleScene;
      piVar12 = (int *)(g_titleScene + 0x130c);
      temp_v4 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = 0;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v4 != 0) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
    }
    FUN_002bf380(2,0x24,0xc,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x6a);
    FUN_002bf288(2,0x24,0xd8,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x6a);
    temp_v5 = FUN_002bf4f8(0x24,0xdc);
    temp_v6 = FUN_002bd068(*psVar7);
    textFormatBuffer(temp_v12,&LAB_00241174,temp_v6);
    puVar9 = temp_v12;
    FUN_002b6dd8(puVar9,1);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v3 + 8) +
                        temp_v1 + ((int)**(short **)(temp_v5 + 0xc) - (int)puVar9) / 2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(1,temp_v11,temp_v12);
    temp_v5 = FUN_002bf4f8(0x24,0xdd);
    temp_v11 = FUN_002bce30(*psVar7,0);
    textFormatBuffer(temp_v12,&LAB_00241174,temp_v11);
    puVar9 = temp_v12;
    FUN_002b6dd8(puVar9,2);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(((int)**(short **)(temp_v5 + 0xc) - (int)puVar9) + temp_v1 +
                        (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v12,(int)*(short *)(temp_v3 + 8));
    temp_v5 = FUN_002bf4f8(0x24,0xdf);
    FUN_002bdf94(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,1,2,0x6f,
                 &LAB_0024160c,*(unsigned short *)(temp_v14 + 0x16));
    if (temp_v15 != 0) {
      FUN_002bf288(2,0x24,param_1 + 0x215,*(short *)(temp_v3 + 8) + temp_v1,
                   *(short *)(temp_v3 + 10) + temp_v2,0x6f);
      temp_v9 = g_titleScene;
      temp_v5 = packNibblesAndByte(6,1,0);
      piVar12 = (int *)(temp_v9 + 0x12ac);
      temp_v4 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = temp_v5;
      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v4 != temp_v5) {
        (**(romwright_code **)(temp_v9 + 0x12c8))();
        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
      }
      FUN_002bf380(2,0x24,0xd,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x74);
      temp_v9 = g_titleScene;
      temp_v5 = packNibblesAndByte(6,7,0);
      piVar12 = (int *)(temp_v9 + 0x12ac);
      temp_v4 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = temp_v5;
      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v4 != temp_v5) {
        (**(romwright_code **)(temp_v9 + 0x12c8))();
        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
      }
      if (*(int *)(temp_v7 + 8) % 10 < 5) {
        temp_v9 = 0;
      }
      else {
        temp_v9 = 2;
      }
      FUN_002bf288(2,0x24,0x219,*(short *)(temp_v3 + 8) + temp_v1,
                   (int)*(short *)(temp_v3 + 10) + temp_v2 + temp_v9,0x74);
      temp_v1 = temp_v7 + param_1 * 4;
      if (0 < *(int *)(temp_v1 + 0x58)) {
        temp_v5 = FUN_002bf4f8(0x24,0x20b);
        temp_v9 = g_titleScene;
        temp_v8 = *(int *)(temp_v1 + 0x68);
        temp_v2 = ((int)**(short **)(temp_v5 + 0xc) - *(int *)(temp_v1 + 0x58)) / 2;
        piVar12 = (int *)(g_titleScene + 0x130c);
        temp_v4 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = 3;
        if (*(char *)(temp_v9 + 0x1324) != '\0' || temp_v4 != 3) {
          (**(romwright_code **)(temp_v9 + 0x1328))();
          *(unsigned char *)(temp_v9 + 0x1324) = 0;
        }
        FUN_0029a17c((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v2,
                     (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v8,
                     *(unsigned int *)(temp_v1 + 0x58),(int)*(short *)(*(int *)(temp_v5 + 0xc) + 2),1);
        FUN_002bf288(2,0x24,0x20b,(int)*(short *)(temp_v3 + 8),*(short *)(temp_v3 + 10) + temp_v8,0x79);
        temp_v7 = *(int *)(temp_v7 + 8) % 0xb;
        VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        efctSetSpeed(temp_v7);
        temp_v7 = g_titleScene;
        temp_v1 = packNibblesAndByte(6,1,0);
        piVar12 = (int *)(temp_v7 + 0x12ac);
        temp_v9 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = temp_v1;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v1) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x24,0x20b,(int)*(short *)(temp_v3 + 8),*(short *)(temp_v3 + 10) + temp_v8,0x79);
        temp_v7 = g_titleScene;
        temp_v1 = packNibblesAndByte(6,7,0);
        piVar12 = (int *)(temp_v7 + 0x12ac);
        temp_v9 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = temp_v1;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v1) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
        efctSetSpeed();
        temp_v7 = g_titleScene;
        piVar12 = (int *)(g_titleScene + 0x130c);
        temp_v1 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = 0;
        if (*(char *)(temp_v7 + 0x1324) != '\0' || temp_v1 != 0) {
          (**(romwright_code **)(temp_v7 + 0x1328))();
          *(unsigned char *)(temp_v7 + 0x1324) = 0;
        }
        FUN_002bf288(2,0x24,0x20c,*(short *)(temp_v3 + 8) + temp_v2,*(short *)(temp_v3 + 10) + temp_v8,0x79
                    );
        FUN_002bf288(2,0x24,0x20d,*(short *)(temp_v3 + 8) - temp_v2,*(short *)(temp_v3 + 10) + temp_v8,0x79
                    );
        efctSetSpeed();
        temp_v7 = g_titleScene;
        temp_v1 = packNibblesAndByte(6,1,0);
        piVar12 = (int *)(temp_v7 + 0x12ac);
        temp_v9 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = temp_v1;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v1) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x24,0x20c,*(short *)(temp_v3 + 8) + temp_v2,*(short *)(temp_v3 + 10) + temp_v8,0x79
                    );
        FUN_002bf288(2,0x24,0x20d,*(short *)(temp_v3 + 8) - temp_v2,*(short *)(temp_v3 + 10) + temp_v8,0x79
                    );
        temp_v7 = g_titleScene;
        temp_v1 = packNibblesAndByte(6,7,0);
        piVar12 = (int *)(temp_v7 + 0x12ac);
        temp_v2 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = temp_v1;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
        efctSetSpeed();
      }
    }
    else {
      if (temp_v16 != 0) {
        temp_v5 = vec2GetXInt(temp_v9 + 0x610);
        temp_v5 = temp_v5 + *(short *)(temp_v3 + 8);
        temp_v4 = vec2GetYInt(temp_v9 + 0x610);
        temp_v4 = temp_v4 + *(short *)(temp_v3 + 10);
        if (temp_v10 < *(float *)(temp_v9 + 0x630)) {
          efctSetSpeed();
          if ((*(char *)(temp_v7 + 0x20) != '\0') &&
             ((*(int *)(temp_v7 + 4) >= 4 || (*(int *)(temp_v7 + 8) >= temp_v13 + param_1 * 4)))) {
            FUN_002bf380(2,0x24,0x15,temp_v1 + temp_v5,temp_v2 + temp_v4,0x79);
          }
          else {
            FUN_002bf380(2,0x24,0x14,temp_v1 + temp_v5,temp_v2 + temp_v4,0x79);
          }
          efctSetSpeed();
        }
      }
      FUN_002bf288(2,0x24,param_1 + 0x210,*(short *)(temp_v3 + 8) + temp_v1,
                   *(short *)(temp_v3 + 10) + temp_v2,0x6f);
    }
  }
  return;
}

} /* extern "C" */
