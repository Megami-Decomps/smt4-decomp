/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f197c` (_code @ 0x2f197c, 0xe38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0014bf3c(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(...);
int FUN_00180114(...);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(...);
int FUN_0018408c(...);
int FUN_00184310(...);
int drawSetColorFromRGBA8(...);
int slotRecordFindById(...);
int FUN_0020caec(...);
int gameDataCopySaveEntry(...);
int FUN_0026c4f0(...);
int contentEntryFindById(...);
int VectorSignedToFloat(...);

typedef struct fn_002f197c_arg0 fn_002f197c_arg0;
struct fn_002f197c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x40];
    float field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x88];
    float field_0xd0; /* +0xd0 */
    unsigned char pad_0xd4[0x88];
    float field_0x15c; /* +0x15c */
    unsigned char pad_0x160[0x29c];
    undefined4 field_0x3fc; /* +0x3fc */
    unsigned char pad_0x400[0x4e38];
    undefined4 field_0x5238; /* +0x5238 */
    unsigned char pad_0x523c[0x15f4];
    byte field_0x6830; /* +0x6830 */
    unsigned char pad_0x6831[0x2747];
    ushort field_0x8f78; /* +0x8f78 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 13 slot(s), 35 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned char sp5C; /* 0x5c: local_5c */
    unsigned char sp5D; /* 0x5d: local_5d */
    unsigned char sp5E; /* 0x5e: local_5e */
    unsigned char sp5F; /* 0x5f: local_5f */
    unsigned char sp60; /* 0x60: local_60 */
    unsigned short spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_2_stack;

extern unsigned char LAB_002f1f30; /* 0x2f1f30 */
extern unsigned char LAB_002f1f34; /* 0x2f1f34 */
extern unsigned char LAB_002f1f40; /* 0x2f1f40 */
extern unsigned char LAB_002f24ec; /* 0x2f24ec */
extern unsigned char LAB_002f24f8; /* 0x2f24f8 */
extern unsigned char LAB_002f27b4; /* 0x2f27b4 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0014bf3c. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(unsigned int *);
extern int vec2GetYInt(unsigned int *);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00180114. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: slotRecordFindById. */
extern int *gameGetSlotTable(void);
/* Supplied declaration required: FUN_0020caec. */
extern unsigned int *FUN_0022e9b8(void);
/* Supplied declaration required: gameDataCopySaveEntry. */
/* Supplied declaration required: FUN_0026c4f0. */
extern char recordGetModeForId(int);
extern int resourceRunOperationIfUnblocked(unsigned int *);
extern int FUN_002a4894(unsigned int *);
extern unsigned int computeCountLimit(void);
/* Supplied declaration required: contentEntryFindById. */
extern int FUN_004db07c(unsigned int, unsigned short, unsigned char *);


void FUN_002f197c(fn_002f197c_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar6;
  unsigned int temp_v4;
  unsigned int *puVar8;
  unsigned int *puVar9;
  short *psVar10;
  unsigned char *puVar11;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar15;
  unsigned int temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  unsigned short temp_v13 [40];
  unsigned char temp_v14 [64];
  char temp_v15 [8];
  int temp_v16;
  unsigned int *temp_v17;
  unsigned char temp_v18 [24];
  unsigned int *temp_v19;
  
  puVar2 = (unsigned int *)FUN_0022e9b8();
  if (puVar2 == (unsigned int *)0x0) {
    return;
  }
  temp_v17 = puVar2 + 0x23c0;
  temp_v10 = 0;
  puVar8 = (unsigned int *)0x0;
  if (*(short *)(puVar2 + 0x23de) != 0) {
    puVar8 = puVar2 + 0x23ac;
  }
  temp_v7 = 0;
  if (*(short *)(puVar2 + 0x23de) != 0) {
    do {
      temp_v1 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v7 * 2 + 0x8f7c);
      contentEntryFindById();
      temp_v2 = resourceRunOperationIfUnblocked(puVar8);
      temp_v3 = FUN_002a4894(puVar8);
      if (*(short *)((int)puVar2 + (temp_v2 + temp_v3) * 2 + 0x62a0) == *(short *)(temp_v1 + 0x1a)) {
        temp_v10 = *(unsigned short *)((int)puVar2 + temp_v7 * 2 + 0x8f7c);
        break;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < (int)(unsigned int)*(unsigned short *)(temp_v17 + 0x1e));
  }
  temp_v7 = FUN_004db07c(*puVar2,temp_v10,temp_v18);
  efctSetSpeed();
  FUN_00164b5c(2,0x1a,6,param_1,param_2,0x65);
  FUN_001835b4(2,0x1a,0x14b,param_1,param_2,0x6a);
  FUN_001835b4(2,0x1a,0x14c,param_1,param_2,0x6a);
  FUN_001835b4(2,0x1a,0x14d,param_1,param_2,0x6a);
  FUN_001835b4(2,0x1a,0x4f,param_1,param_2,0x6a);
  puVar6 = (unsigned short *)(unsigned int)*(unsigned short *)(puVar2 + 0x148e);
  FUN_00184310();
  temp_v2 = FUN_001834a4(0x1a,0x4d);
  temp_v8 = 0xffffffff;
  temp_v11 = 0xffffffff;
  temp_v1 = computeCountLimit();
  if (temp_v1 < (unsigned short)puVar6[3]) {
    temp_v8 = 0x9b9b9bff;
    temp_v11 = 0xa50000ff;
  }
  else {
    temp_v3 = slotRecordFindById(*puVar6);
    if (temp_v3 != 0) {
      temp_v8 = 0x9b9b9bff;
    }
    else if (*(char *)(puVar2 + 0x1a0c) == '\0') {
      temp_v8 = 0x57d8ffff;
    }
  }
  if (temp_v7 == 0) {
    textFormatBuffer(temp_v14,&LAB_002f1f30);
  }
  else {
    temp_v4 = FUN_00180114(*puVar6);
    textFormatBuffer(temp_v14,&LAB_002f1f34,temp_v4);
  }
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v8,temp_v14);
  temp_v7 = FUN_001834a4(0x1a,0x4e);
  temp_v8 = FUN_0014bf3c(*puVar6,0);
  textFormatBuffer(temp_v14,&LAB_002f1f34,temp_v8);
  VectorSignedToFloat(*(short *)(temp_v7 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0x57d8ffff,temp_v14);
  drawSetColorFromRGBA8(temp_v11);
  if ((unsigned short)puVar6[3] >= 100) {
    temp_v7 = FUN_001834a4(0x1a,0x265);
    FUN_00180310(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                 *(short *)(temp_v7 + 10) + param_2,1,3,0x6f,&LAB_002f1f40,puVar6[3]);
  }
  else {
    temp_v7 = FUN_001834a4(0x1a,0x51);
    FUN_00180310(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                 *(short *)(temp_v7 + 10) + param_2,1,2,0x6f,&LAB_002f1f40,puVar6[3]);
  }
  FUN_00183bb0();
  temp_v19 = puVar2 + 0x1a00;
  if (*(char *)(puVar2 + 0x1a0c) == '\0') {
    FUN_001835b4(2,0x1a,0x1e9,
                 (int)&param_1->field_0x0 +
                 ((int)(puVar2[0xff] + ((unsigned int)((int)puVar2[0xff] >> 0x1f) >> 0x1e)) >> 2) % 3,
                 param_2,0x79);
    efctSetSpeed();
    temp_v7 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,1,0);
    piVar15 = (int *)(temp_v7 + 0x12b8);
    temp_v3 = piVar15[*piVar15 + 2];
    piVar15[*piVar15 + 2] = temp_v2;
    if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v7 + 0x12d4))();
      *(unsigned char *)(temp_v7 + 0x12d0) = 0;
    }
    FUN_001835b4(2,0x1a,0x1ea,param_1,param_2,0x79);
    temp_v7 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar15 = (int *)(temp_v7 + 0x12b8);
    temp_v3 = piVar15[*piVar15 + 2];
    piVar15[*piVar15 + 2] = temp_v2;
    if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v7 + 0x12d4))();
      *(unsigned char *)(temp_v7 + 0x12d0) = 0;
    }
    efctSetSpeed();
  }
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x14e,param_1,param_2,0x79);
  FUN_001835b4(2,0x1a,0x14f,param_1,param_2,0x79);
  FUN_001835b4(2,0x1a,0x150,param_1,param_2,0x79);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x151,param_1,param_2,0x7b);
  FUN_001835b4(2,0x1a,0x152,param_1,param_2,0x7c);
  FUN_001835b4(2,0x1a,0x153,param_1,param_2,0x7d);
  temp_v15[0] = recordGetModeForId((int)*(short *)(puVar2 + 0x10e));
  temp_v7 = 1;
  do {
    temp_v2 = FUN_002a4894(puVar2 + 0x19f3);
    temp_v0 = recordGetModeForId((int)*(short *)((int)puVar2 + (temp_v7 + temp_v2 * 4) * 2 + 0x45c));
    temp_v15[temp_v7] = temp_v0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 5);
  temp_v16 = 0;
  if (temp_v15[0] != '\x01' && temp_v15[0] != '\x02') {
    temp_v0 = temp_v15[0];
    if (temp_v15[0] != '\x06') {
      temp_v0 = temp_v15[1];
    }
    if (((temp_v15[0] != '\x06' && temp_v0 != '\x01') && (temp_v0 != '\x02' && temp_v0 != '\x06')) &&
       (temp_v15[2] != '\x01' && temp_v15[2] != '\x02')) {
      temp_v12 = temp_v15[2] != '\x06';
      if (temp_v12) {
        temp_v15[2] = temp_v15[3];
      }
      if (((temp_v12 && temp_v15[2] != '\x01') && (temp_v15[2] != '\x02' && temp_v15[2] != '\x06')) &&
         ((temp_v15[4] != '\x01' && temp_v15[4] != '\x02') && temp_v15[4] != '\x06')) {
        FUN_001835b4(2,0x1a,0x249,param_1,param_2,0x7d);
        FUN_001835b4(2,0x1a,0x24a,param_1,param_2,0x7d);
        FUN_001835b4(2,0x1a,0x154,param_1,param_2,0x7e);
        FUN_001835b4(2,0x1a,0x155,param_1,param_2,0x7e);
        goto LAB_002f2034;
      }
    }
  }
  temp_v16 = 1;
  FUN_001835b4(2,0x1a,0x28f,param_1,param_2,0x7d);
  FUN_001835b4(2,0x1a,0x290,param_1,param_2,0x7d);
  FUN_001835b4(2,0x1a,0x28c,param_1,param_2,0x7e);
  FUN_001835b4(2,0x1a,0x28d,param_1,param_2,0x7e);
LAB_002f2034:
  efctSetSpeed();
  if (temp_v16 != 0) {
    temp_v7 = vec2GetYInt(puVar2 + 0x2c);
    temp_v2 = vec2GetXInt(puVar2 + 0x2c);
    FUN_001835b4(2,0x1a,0x28e,(int)&param_1->field_0x0 + temp_v2,temp_v7 + param_2,0x83);
  }
  else {
    temp_v7 = vec2GetYInt(puVar2 + 0x2c);
    temp_v2 = vec2GetXInt(puVar2 + 0x2c);
    FUN_001835b4(2,0x1a,0x156,(int)&param_1->field_0x0 + temp_v2,temp_v7 + param_2,0x83);
  }
  efctSetSpeed();
  temp_v7 = FUN_001834a4(0x1a,0x162);
  puVar9 = puVar2 + 0x148e;
  puVar8 = puVar9;
  FUN_0026c4f0();
  piVar15 = (int *)gameGetSlotTable();
  if (*piVar15 < (int)puVar8) {
    temp_v11 = 0xdc0f14ff;
  }
  else {
    temp_v11 = 0xffffffff;
  }
  drawSetColorFromRGBA8(temp_v11);
  FUN_0026c4f0();
  FUN_00180310(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
               *(short *)(temp_v7 + 10) + param_2,1,8,0x8d,&LAB_002f1f40,puVar9);
  FUN_00183bb0();
  temp_v1 = 0;
  if (*(short *)((int)temp_v17 + 0x7a) != 0) {
    do {
      temp_v7 = FUN_001834a4(0x1a,temp_v1 + 0x157);
      psVar10 = (short *)(unsigned int)*(unsigned short *)((int)puVar2 + temp_v1 * 2 + 0x523a);
      FUN_00184310();
      if ((temp_v1 & 1) != 0) {
        FUN_001835b4(2,0x1a,0x134,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                     *(short *)(temp_v7 + 10) + param_2,0x83);
      }
      else {
        FUN_001835b4(2,0x1a,0x133,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                     *(short *)(temp_v7 + 10) + param_2,0x83);
      }
      temp_v2 = FUN_001834a4(0x1a,0x139);
      temp_v11 = 0xffffffff;
      if ((!((temp_v15[0] == '\x01' || temp_v15[0] == '\x02') || temp_v15[0] == '\x06')) &&
         (temp_v0 = temp_v15[temp_v1 + 1], !((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x06')))
      {
        if ((int)*(char *)(temp_v19 + 0xc) == temp_v1 + 1) {
          if (temp_v16 != 0) {
            temp_v11 = 0xf5ff9fff;
          }
          else {
            temp_v11 = 0x57d8ffff;
          }
        }
      }
      else {
        temp_v11 = 0xf5ff9fff;
      }
      if (*(char *)((int)puVar2 + temp_v1 + 0x5252) != '\0') {
        temp_v8 = FUN_00180114(*psVar10);
        textFormatBuffer(temp_v14,&LAB_002f1f34,temp_v8);
      }
      else {
        textFormatBuffer(temp_v14,&LAB_002f27b4);
      }
      VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)&param_1->field_0x0 +
                          (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,temp_v11,temp_v14,(int)*(short *)(temp_v2 + 8));
      temp_v2 = FUN_001834a4(0x1a,0x13a);
      temp_v11 = FUN_0014bf3c(*psVar10,0);
      textFormatBuffer(temp_v14,&LAB_002f24ec,temp_v11);
      puVar11 = temp_v14;
      FUN_0018408c(puVar11,2);
      VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)&param_1->field_0x0 +
                          (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8) +
                          ((int)**(short **)(temp_v2 + 0xc) - (int)puVar11) / 2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0x57d8ffff,temp_v14,(int)*(short *)(temp_v7 + 8));
      temp_v0 = *(char *)((int)puVar2 + temp_v1 + 0x5252);
      if (temp_v0 == '\0') {
        temp_v9 = psVar10[3];
      }
      else if (temp_v0 != '\x03') {
        temp_v2 = slotRecordFindById();
        temp_v9 = *(unsigned short *)(temp_v2 + 100);
      }
      else {
        gameDataCopySaveEntry(*psVar10,temp_v13);
        temp_v9 = temp_v13[0];
      }
      temp_v2 = *(short *)(temp_v7 + 10) + param_2;
      temp_v3 = (int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8);
      if (temp_v9 >= 100) {
        FUN_001835b4(2,0x1a,0x26a,temp_v3,temp_v2,0x88);
        temp_v2 = FUN_001834a4(0x1a,0x26d);
        FUN_00180310(0,(int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8),
                     (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,3,0x8d,
                     &LAB_002f24f8,temp_v9);
      }
      else {
        FUN_001835b4(2,0x1a,0x135,temp_v3,temp_v2,0x88);
        temp_v2 = FUN_001834a4(0x1a,0x138);
        FUN_00180310(0,(int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8),
                     (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,2,0x8d,
                     &LAB_002f24f8,temp_v9);
      }
      temp_v2 = FUN_001834a4(0x1a,0x136);
      temp_v12 = *(char *)((int)puVar2 + temp_v1 + 0x5252) == '\0';
      if (!temp_v12) {
        temp_v6 = (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10);
        temp_v3 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8);
        temp_v5 = (int)*psVar10;
      }
      else {
        temp_v6 = (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10);
        temp_v3 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8);
        temp_v5 = 0;
      }
      FUN_0018152c(temp_v5,(int)&param_1->field_0x0 + temp_v3,temp_v6 + param_2,0x8d,!temp_v12);
      temp_v3 = g_renderCtx;
      if ((int)*(char *)(temp_v19 + 0xc) == temp_v1 + 1) {
        temp_v6 = packNibblesAndByte(6,1,0);
        piVar15 = (int *)(temp_v3 + 0x12b8);
        temp_v5 = piVar15[*piVar15 + 2];
        piVar15[*piVar15 + 2] = temp_v6;
        if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
          (**(romwright_code **)(temp_v3 + 0x12d4))();
          *(unsigned char *)(temp_v3 + 0x12d0) = 0;
        }
        FUN_001835b4(2,0x1a,0x58,
                     (int)&param_1->field_0x0 +
                     (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8),
                     (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x97);
        efctSetSpeed();
        FUN_001835b4(2,0x1a,0x59,
                     (int)&param_1->field_0x0 +
                     (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8),
                     (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x97);
        efctSetSpeed();
        temp_v3 = g_renderCtx;
        temp_v6 = packNibblesAndByte(6,7,0);
        piVar15 = (int *)(temp_v3 + 0x12b8);
        temp_v5 = piVar15[*piVar15 + 2];
        piVar15[*piVar15 + 2] = temp_v6;
        if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
          (**(romwright_code **)(temp_v3 + 0x12d4))();
          *(unsigned char *)(temp_v3 + 0x12d0) = 0;
        }
      }
      efctSetSpeed();
      FUN_0020caec(*psVar10,(int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8),
                   (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x9c);
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < (int)(unsigned int)*(unsigned short *)((int)temp_v17 + 0x7a));
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
