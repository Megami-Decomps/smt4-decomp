/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002199fc` (_code @ 0x2199fc, 0xa14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int textFormatBuffer(...);
int textDrawString(...);
int FUN_00164b5c(...);
int vec2GetXInt(...);
int efctSetSpeed(...);
int FUN_00180310(...);
int asdTMTexTableEntryAt(...);
int fontMeasureLineAdvance(...);
int FUN_00184310(void);
int FUN_0035ae58(...);
int devilDispatchTextureResource(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_3_stack;

extern unsigned char LAB_00219e04; /* 0x219e04 */
extern unsigned char LAB_0021a1f4; /* 0x21a1f4 */
extern int DAT_0057f2c4; /* 0x57f2c4 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bf3c(short, unsigned int);
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00180114(short);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: devilDispatchTextureResource. */


void FUN_002199fc(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  unsigned int temp_v4;
  unsigned char *puVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar13;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [64];
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int iStack_30;
  int temp_v16;
  int temp_v17;
  
  temp_v5 = DAT_0057f2c4;
  temp_v8 = DAT_0057f2c4 + param_1 * 0x8c;
  temp_v14 = temp_v8;
  iStack_30 = param_1;
  temp_v16 = param_2;
  temp_v17 = param_3;
  temp_v1 = vec2GetXInt(temp_v8 + 0x3ec);
  temp_v8 = vec2GetYInt(temp_v8 + 0x3ec);
  temp_v11 = 0xffffffff;
  temp_v10 = 0.0f;
  temp_v0 = *(short *)(DAT_0057f2c4 + 0x1e);
  if (temp_v0 == 2) {
    temp_v13 = 0x28f;
  }
  else {
    temp_v13 = 0;
    if (temp_v0 == 3 || temp_v0 == 4) {
      temp_v13 = 0x311;
    }
  }
  temp_v2 = asdTMTexTableEntryAt(0x1a,param_1 + 0xe3);
  FUN_001835b4(2,0x1a,0xd2,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v8,0x65);
  temp_v3 = *(short *)(temp_v2 + 10) + temp_v8;
  temp_v7 = *(short *)(temp_v2 + 8) + temp_v1;
  if (temp_v16 != 0) {
    FUN_001835b4(2,0x1a,0x214,temp_v7,temp_v3,0x65);
  }
  else {
    FUN_001835b4(2,0x1a,0x20f,temp_v7,temp_v3,0x65);
  }
  if (param_1 < (int)(unsigned int)*(unsigned short *)(temp_v5 + 0x1e)) {
    temp_v15 = temp_v5 + param_1 * 2;
    psVar5 = (short *)(unsigned int)*(unsigned short *)(temp_v15 + 0xe);
    FUN_00184310();
    if (temp_v17 == 0) {
      temp_v7 = asdTMTexTableEntryAt(0x1a,0xd2);
      temp_v3 = g_renderCtx;
      piVar13 = (int *)(g_renderCtx + 0x1318);
      temp_v6 = piVar13[*piVar13 + 2];
      piVar13[*piVar13 + 2] = 3;
      if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v6 != 3) {
        (**(romwright_code **)(temp_v3 + 0x1334))();
        *(unsigned char *)(temp_v3 + 0x1330) = 0;
      }
      FUN_0035ae58((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v7 + 8) + temp_v1,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v7 + 10) + temp_v8,
                   (int)**(short **)(temp_v7 + 0xc),
                   (int)(*(short **)(temp_v7 + 0xc))[1] + *(int *)(temp_v5 + param_1 * 4 + 0x74),1);
      temp_v3 = asdTMTexTableEntryAt(0x1a,0xda);
      devilDispatchTextureResource((int)*psVar5,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v8,0x68,1);
      temp_v3 = g_renderCtx;
      piVar13 = (int *)(g_renderCtx + 0x1318);
      temp_v7 = piVar13[*piVar13 + 2];
      piVar13[*piVar13 + 2] = 0;
      if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v7 != 0) {
        (**(romwright_code **)(temp_v3 + 0x1334))();
        *(unsigned char *)(temp_v3 + 0x1330) = 0;
      }
    }
    FUN_00164b5c(2,0x1a,0xc,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v8,0x6a);
    FUN_001835b4(2,0x1a,0xd8,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v8,0x6a);
    temp_v3 = asdTMTexTableEntryAt(0x1a,0xdc);
    temp_v4 = FUN_00180114(*psVar5);
    textFormatBuffer(temp_v12,&LAB_00219e04,temp_v4);
    puVar7 = temp_v12;
    fontMeasureLineAdvance(puVar7,1);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) +
                        temp_v1 + ((int)**(short **)(temp_v3 + 0xc) - (int)puVar7) / 2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(1,temp_v11,temp_v12);
    temp_v3 = asdTMTexTableEntryAt(0x1a,0xdd);
    temp_v11 = FUN_0014bf3c(*psVar5,0);
    textFormatBuffer(temp_v12,&LAB_00219e04,temp_v11);
    puVar7 = temp_v12;
    fontMeasureLineAdvance(puVar7,2);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(((int)**(short **)(temp_v3 + 0xc) - (int)puVar7) + temp_v1 +
                        (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(2,0xffffffff,temp_v12,(int)*(short *)(temp_v2 + 8));
    temp_v3 = asdTMTexTableEntryAt(0x1a,0xdf);
    FUN_00180310(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v1,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v8,1,2,0x6f,
                 &LAB_0021a1f4,*(unsigned short *)(temp_v15 + 0x16));
    if (temp_v16 != 0) {
      FUN_001835b4(2,0x1a,param_1 + 0x215,*(short *)(temp_v2 + 8) + temp_v1,
                   *(short *)(temp_v2 + 10) + temp_v8,0x6f);
      temp_v3 = g_renderCtx;
      temp_v7 = packNibblesAndByte(6,1,0);
      piVar13 = (int *)(temp_v3 + 0x12b8);
      temp_v6 = piVar13[*piVar13 + 2];
      piVar13[*piVar13 + 2] = temp_v7;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v7) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      FUN_00164b5c(2,0x1a,0xd,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v8,0x74);
      temp_v3 = g_renderCtx;
      temp_v7 = packNibblesAndByte(6,7,0);
      piVar13 = (int *)(temp_v3 + 0x12b8);
      temp_v6 = piVar13[*piVar13 + 2];
      piVar13[*piVar13 + 2] = temp_v7;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v7) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      if (*(int *)(temp_v5 + 8) % 10 < 5) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = 2;
      }
      FUN_001835b4(2,0x1a,0x219,*(short *)(temp_v2 + 8) + temp_v1,
                   (int)*(short *)(temp_v2 + 10) + temp_v8 + temp_v3,0x74);
      temp_v1 = temp_v5 + param_1 * 4;
      if (0 < *(int *)(temp_v1 + 100)) {
        temp_v7 = asdTMTexTableEntryAt(0x1a,0x20b);
        temp_v3 = g_renderCtx;
        temp_v9 = *(int *)(temp_v1 + 0x74);
        temp_v8 = ((int)**(short **)(temp_v7 + 0xc) - *(int *)(temp_v1 + 100)) / 2;
        piVar13 = (int *)(g_renderCtx + 0x1318);
        temp_v6 = piVar13[*piVar13 + 2];
        piVar13[*piVar13 + 2] = 3;
        if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v6 != 3) {
          (**(romwright_code **)(temp_v3 + 0x1334))();
          *(unsigned char *)(temp_v3 + 0x1330) = 0;
        }
        FUN_0035ae58((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v7 + 8) + temp_v8,
                     (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v9,
                     *(unsigned int *)(temp_v1 + 100),(int)*(short *)(*(int *)(temp_v7 + 0xc) + 2),1);
        FUN_001835b4(2,0x1a,0x20b,(int)*(short *)(temp_v2 + 8),*(short *)(temp_v2 + 10) + temp_v9,0x79);
        temp_v5 = *(int *)(temp_v5 + 8) % 0xb;
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        efctSetSpeed(temp_v5);
        temp_v5 = g_renderCtx;
        temp_v1 = packNibblesAndByte(6,1,0);
        piVar13 = (int *)(temp_v5 + 0x12b8);
        temp_v3 = piVar13[*piVar13 + 2];
        piVar13[*piVar13 + 2] = temp_v1;
        if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
          (**(romwright_code **)(temp_v5 + 0x12d4))();
          *(unsigned char *)(temp_v5 + 0x12d0) = 0;
        }
        FUN_001835b4(2,0x1a,0x20b,(int)*(short *)(temp_v2 + 8),*(short *)(temp_v2 + 10) + temp_v9,0x79);
        temp_v5 = g_renderCtx;
        temp_v1 = packNibblesAndByte(6,7,0);
        piVar13 = (int *)(temp_v5 + 0x12b8);
        temp_v3 = piVar13[*piVar13 + 2];
        piVar13[*piVar13 + 2] = temp_v1;
        if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
          (**(romwright_code **)(temp_v5 + 0x12d4))();
          *(unsigned char *)(temp_v5 + 0x12d0) = 0;
        }
        efctSetSpeed();
        temp_v5 = g_renderCtx;
        piVar13 = (int *)(g_renderCtx + 0x1318);
        temp_v1 = piVar13[*piVar13 + 2];
        piVar13[*piVar13 + 2] = 0;
        if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v1 != 0) {
          (**(romwright_code **)(temp_v5 + 0x1334))();
          *(unsigned char *)(temp_v5 + 0x1330) = 0;
        }
        FUN_001835b4(2,0x1a,0x20c,*(short *)(temp_v2 + 8) + temp_v8,*(short *)(temp_v2 + 10) + temp_v9,
                     0x79);
        FUN_001835b4(2,0x1a,0x20d,*(short *)(temp_v2 + 8) - temp_v8,*(short *)(temp_v2 + 10) + temp_v9,
                     0x79);
        efctSetSpeed();
        temp_v5 = g_renderCtx;
        temp_v1 = packNibblesAndByte(6,1,0);
        piVar13 = (int *)(temp_v5 + 0x12b8);
        temp_v3 = piVar13[*piVar13 + 2];
        piVar13[*piVar13 + 2] = temp_v1;
        if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
          (**(romwright_code **)(temp_v5 + 0x12d4))();
          *(unsigned char *)(temp_v5 + 0x12d0) = 0;
        }
        FUN_001835b4(2,0x1a,0x20c,*(short *)(temp_v2 + 8) + temp_v8,*(short *)(temp_v2 + 10) + temp_v9,
                     0x79);
        FUN_001835b4(2,0x1a,0x20d,*(short *)(temp_v2 + 8) - temp_v8,*(short *)(temp_v2 + 10) + temp_v9,
                     0x79);
        temp_v5 = g_renderCtx;
        temp_v1 = packNibblesAndByte(6,7,0);
        piVar13 = (int *)(temp_v5 + 0x12b8);
        temp_v8 = piVar13[*piVar13 + 2];
        piVar13[*piVar13 + 2] = temp_v1;
        if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v8 != temp_v1) {
          (**(romwright_code **)(temp_v5 + 0x12d4))();
          *(unsigned char *)(temp_v5 + 0x12d0) = 0;
        }
        efctSetSpeed();
      }
    }
    else {
      if (temp_v17 != 0) {
        temp_v3 = temp_v14 + 0x6a8;
        temp_v7 = vec2GetXInt();
        temp_v7 = temp_v7 + *(short *)(temp_v2 + 8);
        temp_v6 = vec2GetYInt(temp_v3);
        temp_v6 = temp_v6 + *(short *)(temp_v2 + 10);
        if (temp_v10 < *(float *)(temp_v3 + 0x20)) {
          efctSetSpeed();
          if ((*(char *)(temp_v5 + 0x20) != '\0') &&
             ((*(int *)(temp_v5 + 4) >= 4 || (*(int *)(temp_v5 + 8) >= temp_v13 + param_1 * 4)))) {
            FUN_00164b5c(2,0x1a,0x15,temp_v1 + temp_v7,temp_v8 + temp_v6,0x79);
          }
          else {
            FUN_00164b5c(2,0x1a,0x14,temp_v1 + temp_v7,temp_v8 + temp_v6,0x79);
          }
          efctSetSpeed();
        }
      }
      FUN_001835b4(2,0x1a,param_1 + 0x210,*(short *)(temp_v2 + 8) + temp_v1,
                   *(short *)(temp_v2 + 10) + temp_v8,0x6f);
    }
  }
  return;
}

} /* extern "C" */
