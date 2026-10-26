/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034abe0` (_code @ 0x34abe0, 0x1758 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/PackNibbles.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "event/2dEvent/2dEventTex.h"
#include "addon/LookupRecord.h"

extern "C" {

int FUN_0018152c(...);
int FUN_0020caec(...);

int textFormatBuffer(...);
int FUN_0014bf3c(...);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int asdTMTexTableEntryAt(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int fontMeasureLineAdvance(...);
int FUN_00184310(void);
int drawSetColorFromRGBA8(...);
int slotRecordFindById(...);
int FUN_002a4b28(...);
int FUN_00344cd0(...);
int FUN_0035ae58(...);
int contentEntryFindById(void);
int VectorSignedToFloat(...);

typedef struct fn_0034abe0_arg0 fn_0034abe0_arg0;
struct fn_0034abe0_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x34];
    byte field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x439];
    short field_0x472; /* +0x472 */
    short field_0x474; /* +0x474 */
    short field_0x476; /* +0x476 */
    unsigned char pad_0x478[0x8b00];
    ushort field_0x8f78; /* +0x8f78 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_4_stack;

extern unsigned char LAB_0034b028; /* 0x34b028 */
extern unsigned char LAB_0034b054; /* 0x34b054 */
extern unsigned char LAB_0034b064; /* 0x34b064 */
extern unsigned char LAB_0034b680; /* 0x34b680 */
extern unsigned char LAB_0034b684; /* 0x34b684 */
extern unsigned char LAB_0034b68c; /* 0x34b68c */
extern unsigned char LAB_0034c1c0; /* 0x34c1c0 */
extern unsigned char LAB_0034c1c4; /* 0x34c1c4 */
extern unsigned char LAB_0034c1dc; /* 0x34c1dc */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0014bf3c. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(unsigned int *);
extern int vec2GetYInt(unsigned int *);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: slotRecordFindById. */
/* Supplied declaration required: FUN_0020caec. */
extern unsigned int *uniteGetWork(void);
extern int recordGetModeForId(int);
extern int resourceRunEmbeddedOperationIfUnblocked(unsigned int *);
extern int resourceRunOperationIfUnblocked(unsigned int *);
extern int FUN_002a4878(unsigned int *);
extern int FUN_002a4894(unsigned int *);
/* Supplied declaration required: FUN_002a4b28. */
extern unsigned int computeCountLimit(void);
/* Supplied declaration required: FUN_00344cd0. */
extern int uiSearchSecondary(unsigned int *);
extern int uiSearchPrimary(unsigned int *);
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: devilDispatchTextureResource. */
/* Supplied declaration required: contentEntryFindById. */
extern int fusionClassifyRecipeAvailability(unsigned int, unsigned int, unsigned char *);


void FUN_0034abe0(fn_0034abe0_arg0 *param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short *psVar6;
  unsigned short *puVar7;
  int temp_v4;
  unsigned char *puVar9;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar15;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int *puVar19;
  unsigned char temp_v13 [64];
  unsigned int *temp_v14;
  unsigned int *temp_v15;
  unsigned char temp_v16 [24];
  int temp_v17;
  fn_0034abe0_arg0 *pfStack_34;
  int iStack_30;
  int temp_v18;
  int temp_v19;
  
  pfStack_34 = param_1;
  iStack_30 = param_2;
  temp_v18 = param_3;
  temp_v19 = param_4;
  puVar2 = (unsigned int *)uniteGetWork();
  if (puVar2 == (unsigned int *)0x0) {
    return;
  }
  temp_v1 = reinterpret_cast<int>(FUN_0026140c());
  temp_v15 = puVar2 + 0x188f;
  temp_v12 = 0;
  temp_v14 = puVar2 + 0x1876;
  if (temp_v18 != 0) {
    temp_v15 = puVar2 + 0x23c5;
    temp_v14 = puVar2 + 0x23ac;
  }
  efctSetSpeed();
  if (*(char *)(temp_v1 + 0x38) != '\0') {
    FUN_00164b5c(2,0x1a,2,param_1,param_2,0x65);
    FUN_001835b4(2,0x1a,0xf0,param_1,param_2,0x65);
    FUN_001835b4(2,0x1a,0xf1,param_1,param_2,0x65);
    FUN_001835b4(2,0x1a,0xf2,param_1,param_2,0x65);
  }
  else {
    FUN_00164b5c(2,0x1a,0,param_1,param_2,0x65);
  }
  FUN_001835b4(2,0x1a,0xd0,param_1,param_2,0x65);
  temp_v2 = asdTMTexTableEntryAt(0x1a,0x49);
  textFormatBuffer(temp_v13,&LAB_0034b028);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(2,0xffffffff,temp_v13);
  temp_v3 = computeCountLimit();
  if (temp_v3 >= 999) {
    temp_v2 = asdTMTexTableEntryAt(0x1a,0x279);
    textFormatBuffer(temp_v13,&LAB_0034b054);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(2,0xffff57ff,temp_v13);
  }
  else {
    temp_v3 = computeCountLimit();
    if (temp_v3 >= 100) {
      FUN_001835b4(2,0x1a,0x4a,param_1,param_2,0x65);
      temp_v2 = asdTMTexTableEntryAt(0x1a,0x253);
      temp_v10 = computeCountLimit();
      FUN_00180310(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                   *(short *)(temp_v2 + 10) + param_2,1,3,0x65,&LAB_0034b064,temp_v10);
    }
    else {
      FUN_001835b4(2,0x1a,0x4a,param_1,param_2,0x65);
      temp_v2 = asdTMTexTableEntryAt(0x1a,0x4c);
      temp_v10 = computeCountLimit();
      FUN_00180310(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                   *(short *)(temp_v2 + 10) + param_2,1,2,0x65,&LAB_0034b064,temp_v10);
    }
  }
  if (*(char *)(temp_v1 + 0x38) == '\0') {
    temp_v1 = resourceRunEmbeddedOperationIfUnblocked(temp_v15);
    temp_v9 = 0;
    temp_v2 = uiSearchSecondary(temp_v15);
    if (0 < temp_v2) {
      puVar19 = puVar2 + 0x23c0;
      do {
        temp_v2 = temp_v1 + temp_v9;
        puVar7 = (unsigned short *)(unsigned int)*(unsigned short *)((int)puVar2 + temp_v2 * 2 + 0x62a0);
        FUN_00184310();
        temp_v17 = 0;
        if (temp_v18 != 0) {
          temp_v8 = 0;
          if (*(short *)(puVar19 + 0x1e) != 0) {
            do {
              temp_v3 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x8f7c);
              contentEntryFindById();
              if (*(short *)(temp_v3 + 0x1a) == *(short *)((int)puVar2 + temp_v2 * 2 + 0x62a0)) {
                temp_v12 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x8f7c);
                break;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < (int)(unsigned int)*(unsigned short *)(puVar19 + 0x1e));
          }
          temp_v8 = fusionClassifyRecipeAvailability(*puVar2,temp_v12,temp_v16);
          if (temp_v8 == 0) {
            temp_v17 = 1;
          }
        }
        temp_v8 = asdTMTexTableEntryAt(0x1a,temp_v9 + 0xe3);
        FUN_001835b4(2,0x1a,0xd2,(int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                     *(short *)(temp_v8 + 10) + param_2,0x65);
        drawSetColorFromRGBA8(0xffffffff);
        if (temp_v17 != 0) {
          drawSetColorFromRGBA8(0xff);
          efctSetSpeed();
        }
        else {
          temp_v3 = computeCountLimit();
          if (temp_v3 < (unsigned short)puVar7[3]) {
            drawSetColorFromRGBA8(0x9b9b9bff);
            efctSetSpeed();
          }
        }
        temp_v4 = asdTMTexTableEntryAt(0x1a,0xd2);
        temp_v6 = g_renderCtx;
        piVar15 = (int *)(g_renderCtx + 0x1318);
        temp_v7 = piVar15[*piVar15 + 2];
        piVar15[*piVar15 + 2] = 3;
        if (*(char *)(temp_v6 + 0x1330) != '\0' || temp_v7 != 3) {
          (**(romwright_code **)(temp_v6 + 0x1334))();
          *(unsigned char *)(temp_v6 + 0x1330) = 0;
        }
        FUN_0035ae58((int)&param_1->field_0x0 +
                     (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v4 + 8),
                     (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                     (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1],1);
        temp_v6 = asdTMTexTableEntryAt(0x1a,0xda);
        devilDispatchTextureResource((int)*(short *)((int)puVar2 + temp_v2 * 2 + 0x62a0),
                     (int)&param_1->field_0x0 +
                     (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v6 + 8),
                     (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0x68,1);
        temp_v2 = g_renderCtx;
        piVar15 = (int *)(g_renderCtx + 0x1318);
        temp_v6 = piVar15[*piVar15 + 2];
        piVar15[*piVar15 + 2] = 0;
        if (*(char *)(temp_v2 + 0x1330) != '\0' || temp_v6 != 0) {
          (**(romwright_code **)(temp_v2 + 0x1334))();
          *(unsigned char *)(temp_v2 + 0x1330) = 0;
        }
        FUN_00183bb0();
        efctSetSpeed();
        FUN_00164b5c(2,0x1a,0xc,(int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                     *(short *)(temp_v8 + 10) + param_2,0x6a);
        if (temp_v17 != 0) {
          FUN_001835b4(2,0x1a,0xd9,(int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                       *(short *)(temp_v8 + 10) + param_2,0x6f);
          temp_v11 = 0xffffffff;
          textFormatBuffer(temp_v13,&LAB_0034b680);
        }
        else {
          temp_v11 = 0xffffffff;
          temp_v10 = (int)FUN_00180114(*puVar7);
          textFormatBuffer(temp_v13,&LAB_0034b684,temp_v10);
        }
        temp_v10 = 0xffffffff;
        temp_v3 = computeCountLimit();
        if (temp_v3 < (unsigned short)puVar7[3]) {
          temp_v10 = 0x9b9b9bff;
          temp_v11 = 0xdc0f14ff;
        }
        else {
          temp_v2 = slotRecordFindById(*puVar7);
          if (temp_v2 != 0) {
            temp_v10 = 0x9b9b9bff;
          }
        }
        temp_v2 = asdTMTexTableEntryAt(0x1a,0xdc);
        puVar9 = temp_v13;
        fontMeasureLineAdvance(puVar9,1);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8) +
                            ((int)**(short **)(temp_v2 + 0xc) - (int)puVar9) / 2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(1,temp_v10,temp_v13,(int)*(short *)(temp_v8 + 8));
        temp_v2 = asdTMTexTableEntryAt(0x1a,0xdd);
        temp_v10 = FUN_0014bf3c(*puVar7,0);
        textFormatBuffer(temp_v13,&LAB_0034b684,temp_v10);
        puVar9 = temp_v13;
        fontMeasureLineAdvance(puVar9,2);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)param_1 +
                            (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8) +
                            ((int)**(short **)(temp_v2 + 0xc) - (int)puVar9),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0xffffffff,temp_v13,(int)*(short *)(temp_v8 + 8));
        drawSetColorFromRGBA8(temp_v11);
        temp_v2 = *(short *)(temp_v8 + 10) + param_2;
        temp_v6 = (int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8);
        if ((unsigned short)puVar7[3] >= 100) {
          FUN_001835b4(2,0x1a,0x26e,temp_v6,temp_v2,0x6a);
          temp_v2 = asdTMTexTableEntryAt(0x1a,0x25c);
          FUN_00180310(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,3,0x6f
                       ,&LAB_0034b68c,puVar7[3]);
        }
        else {
          FUN_001835b4(2,0x1a,0xd8,temp_v6,temp_v2,0x6a);
          temp_v2 = asdTMTexTableEntryAt(0x1a,0xdf);
          FUN_00180310(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,2,0x6f
                       ,&LAB_0034b68c,puVar7[3]);
        }
        FUN_00183bb0();
        temp_v9 = temp_v9 + 1;
        temp_v2 = uiSearchSecondary(temp_v15);
      } while (temp_v9 < temp_v2);
    }
    if (temp_v19 != 0) {
      temp_v2 = FUN_002a4878(temp_v15);
      temp_v9 = asdTMTexTableEntryAt(0x1a,temp_v2 + 0xe3);
      temp_v2 = g_renderCtx;
      temp_v8 = packNibblesAndByte(6, 1, 0);
      piVar15 = (int *)(temp_v2 + 0x12b8);
      temp_v6 = piVar15[*piVar15 + 2];
      piVar15[*piVar15 + 2] = temp_v8;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v6 != temp_v8) {
        (**(romwright_code **)(temp_v2 + 0x12d4))(temp_v8);
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
      FUN_00164b5c(2,0x1a,0xd,(int)&param_1->field_0x0 + (int)*(short *)(temp_v9 + 8),
                   *(short *)(temp_v9 + 10) + param_2,0x79);
      temp_v2 = g_renderCtx;
      temp_v9 = packNibblesAndByte(6, 7, 0);
      piVar15 = (int *)(temp_v2 + 0x12b8);
      temp_v8 = piVar15[*piVar15 + 2];
      piVar15[*piVar15 + 2] = temp_v9;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v8 != temp_v9) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
    }
    temp_v9 = 0;
    temp_v2 = uiSearchSecondary(temp_v15);
    if (0 < temp_v2) {
      do {
        puVar7 = (unsigned short *)(unsigned int)*(unsigned short *)((int)puVar2 + (temp_v1 + temp_v9) * 2 + 0x62a0);
        FUN_00184310();
        temp_v2 = asdTMTexTableEntryAt(0x1a,temp_v9 + 0xe3);
        temp_v8 = asdTMTexTableEntryAt(0x1a,0xdb);
        temp_v6 = FUN_002a4b28(*puVar7);
        if (temp_v6 == 0) {
          FUN_00164b5c(2,0x1a,8,(int)&param_1->field_0x0 +
                                (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x83);
        }
        temp_v9 = temp_v9 + 1;
        temp_v2 = uiSearchSecondary(temp_v15);
      } while (temp_v9 < temp_v2);
    }
    FUN_001835b4(2,0x1a,0xe7,param_1,param_2,0x8d);
    FUN_001835b4(2,0x1a,0xe8,param_1,param_2,0x8d);
    FUN_001835b4(2,0x1a,0x24e,param_1,param_2,0x8d);
    FUN_00344cd0(temp_v15,param_1,param_2,0x1a,0xed,0xee,0xef,0xea,0xec,0xe9,0xeb,
                 (int)*(short *)((int)puVar2 + 0x476),(int)*(short *)((int)puVar2 + 0x472),
                 (int)*(short *)(puVar2 + 0x11d),0x97,1);
    return;
  }
  temp_v1 = resourceRunOperationIfUnblocked(temp_v14);
  temp_v9 = 0;
  temp_v2 = uiSearchPrimary(temp_v14);
  if (0 < temp_v2) {
    do {
      if ((temp_v19 == 0) || (temp_v2 = FUN_002a4894(temp_v14), temp_v2 != temp_v9)) {
        temp_v2 = temp_v1 + temp_v9;
        psVar6 = (short *)(unsigned int)*(unsigned short *)((int)puVar2 + temp_v2 * 2 + 0x62a0);
        FUN_00184310();
        temp_v17 = 0;
        if (temp_v18 != 0) {
          temp_v8 = 0;
          if (*(short *)(puVar2 + 0x23de) != 0) {
            do {
              temp_v3 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x8f7c);
              contentEntryFindById();
              if (*(short *)(temp_v3 + 0x1a) == *(short *)((int)puVar2 + temp_v2 * 2 + 0x62a0)) {
                temp_v12 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x8f7c);
                break;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < (int)(unsigned int)*(unsigned short *)(puVar2 + 0x23de));
          }
          temp_v2 = fusionClassifyRecipeAvailability(*puVar2,temp_v12,temp_v16);
          if (temp_v2 == 0) {
            temp_v17 = 1;
          }
        }
        temp_v2 = asdTMTexTableEntryAt(0x1a,temp_v9 + 0x2e);
        temp_v10 = 0xffffffff;
        temp_v11 = 0xffffffff;
        temp_v3 = computeCountLimit();
        if (temp_v3 < (unsigned short)psVar6[3]) {
          temp_v10 = 0x9b9b9bff;
          temp_v11 = 0xdc0f14ff;
        }
        else {
          temp_v8 = slotRecordFindById(*psVar6);
          if (temp_v8 != 0) {
            temp_v10 = 0x9b9b9bff;
          }
        }
        temp_v8 = asdTMTexTableEntryAt(0x1a,0xf9);
        temp_v5 = FUN_0014bf3c(*psVar6,0);
        textFormatBuffer(temp_v13,&LAB_0034b684,temp_v5);
        puVar9 = temp_v13;
        fontMeasureLineAdvance(puVar9,2);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8) +
                            ((int)**(short **)(temp_v8 + 0xc) - (int)puVar9) / 2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0x8262dff,temp_v13,(int)*(short *)(temp_v2 + 8));
        temp_v8 = asdTMTexTableEntryAt(0x1a,0xf8);
        if (temp_v17 != 0) {
          textFormatBuffer(temp_v13,&LAB_0034b680);
        }
        else {
          temp_v5 = (int)FUN_00180114(*psVar6);
          textFormatBuffer(temp_v13,&LAB_0034b684,temp_v5);
        }
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,temp_v10,temp_v13,(int)*(short *)(temp_v8 + 8));
        drawSetColorFromRGBA8(temp_v11);
        if ((unsigned short)psVar6[3] >= 100) {
          temp_v8 = asdTMTexTableEntryAt(0x1a,0x25f);
          FUN_00180310(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,1,3,0x6f
                       ,&LAB_0034b68c,psVar6[3]);
        }
        else {
          temp_v8 = asdTMTexTableEntryAt(0x1a,0xf7);
          FUN_00180310(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,1,2,0x6f
                       ,&LAB_0034b68c,psVar6[3]);
        }
        FUN_00183bb0();
        temp_v8 = asdTMTexTableEntryAt(0x1a,0xf5);
        if (temp_v17 != 0) {
          FUN_0018152c(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x6f,0);
        }
        else {
          FUN_0018152c((int)*psVar6,
                       (int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x6f,0);
          FUN_0020caec(*psVar6,(int)&param_1->field_0x0 +
                               (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x74);
        }
        temp_v8 = asdTMTexTableEntryAt(0x1a,0xfa);
        temp_v6 = FUN_002a4b28(*psVar6);
        if (temp_v6 == 0) {
          FUN_00164b5c(2,0x1a,8,(int)&param_1->field_0x0 +
                                (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x6f);
        }
      }
      temp_v9 = temp_v9 + 1;
      temp_v2 = uiSearchPrimary(temp_v14);
    } while (temp_v9 < temp_v2);
  }
  temp_v1 = FUN_002a4894(temp_v14);
  temp_v1 = asdTMTexTableEntryAt(0x1a,temp_v1 + 0x3f);
  temp_v2 = resourceRunOperationIfUnblocked(temp_v14);
  temp_v9 = FUN_002a4894(temp_v14);
  psVar6 = (short *)(unsigned int)*(unsigned short *)((int)puVar2 + (temp_v9 + temp_v2) * 2 + 0x62a0);
  FUN_00184310();
  if (temp_v19 == 0) {
    FUN_001835b4(2,0x1a,0x272,param_1,param_2,0x97);
    FUN_00344cd0(temp_v14,param_1,param_2,0x1a,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
                 (int)*(short *)((int)puVar2 + 0x476),(int)*(short *)((int)puVar2 + 0x472),
                 (int)*(short *)(puVar2 + 0x11d),0x97,0);
    efctSetSpeed();
    return;
  }
  temp_v17 = 0;
  if (temp_v18 != 0) {
    temp_v8 = 0;
    if (*(short *)(puVar2 + 0x23de) != 0) {
      do {
        temp_v3 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x8f7c);
        contentEntryFindById();
        if (*(short *)(temp_v3 + 0x1a) == *(short *)((int)puVar2 + (temp_v9 + temp_v2) * 2 + 0x62a0)) {
          temp_v12 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x8f7c);
          break;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < (int)(unsigned int)*(unsigned short *)(puVar2 + 0x23de));
    }
    temp_v2 = fusionClassifyRecipeAvailability(*puVar2,temp_v12,temp_v16);
    if (temp_v2 == 0) {
      temp_v17 = 1;
    }
  }
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x38,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
               *(short *)(temp_v1 + 10) + param_2,0x79);
  FUN_001835b4(2,0x1a,0x39,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
               *(short *)(temp_v1 + 10) + param_2,0x79);
  FUN_001835b4(2,0x1a,0x3a,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
               *(short *)(temp_v1 + 10) + param_2,0x79);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x3b,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
               *(short *)(temp_v1 + 10) + param_2,0x7e);
  temp_v2 = FUN_002a4894(temp_v14);
  temp_v2 = recordGetModeForId((int)*(short *)((int)puVar2 + temp_v2 * 2 + 0x438));
  temp_v9 = *(short *)(temp_v1 + 10) + param_2;
  temp_v8 = (int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8);
  if (!((temp_v2 == 1 || temp_v2 == 2) || temp_v2 == 6)) {
    FUN_001835b4(2,0x1a,0x245,temp_v8,temp_v9,0x7e);
    FUN_001835b4(2,0x1a,0x3c,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
                 *(short *)(temp_v1 + 10) + param_2,0x7e);
    FUN_001835b4(2,0x1a,0x3d,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
                 *(short *)(temp_v1 + 10) + param_2,0x7e);
  }
  else {
    FUN_001835b4(2,0x1a,0x27f,temp_v8,temp_v9,0x7e);
    if ((temp_v2 != 1 && temp_v2 != 2) && temp_v2 != 6) {
      FUN_001835b4(2,0x1a,0x3c,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
                   *(short *)(temp_v1 + 10) + param_2,0x7e);
      FUN_001835b4(2,0x1a,0x3d,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
                   *(short *)(temp_v1 + 10) + param_2,0x7e);
    }
    else {
      FUN_001835b4(2,0x1a,0x27c,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
                   *(short *)(temp_v1 + 10) + param_2,0x7e);
      FUN_001835b4(2,0x1a,0x27d,(int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8),
                   *(short *)(temp_v1 + 10) + param_2,0x7e);
    }
  }
  efctSetSpeed();
  if (!((temp_v2 == 1 || temp_v2 == 2) || temp_v2 == 6)) {
    temp_v9 = vec2GetYInt(puVar2 + 0x2c);
    temp_v0 = *(short *)(temp_v1 + 10);
    temp_v8 = vec2GetXInt(puVar2 + 0x2c);
    FUN_001835b4(2,0x1a,0x3e,(int)&param_1->field_0x0 + *(short *)(temp_v1 + 8) + temp_v8,
                 temp_v9 + param_2 + (int)temp_v0,0x83);
  }
  else {
    temp_v9 = vec2GetYInt(puVar2 + 0x2c);
    temp_v0 = *(short *)(temp_v1 + 10);
    temp_v8 = vec2GetXInt(puVar2 + 0x2c);
    FUN_001835b4(2,0x1a,0x27e,(int)&param_1->field_0x0 + *(short *)(temp_v1 + 8) + temp_v8,
                 temp_v9 + param_2 + (int)temp_v0,0x83);
  }
  efctSetSpeed();
  if ((temp_v2 == 1 || temp_v2 == 2) || (temp_v2 == 6)) {
    temp_v10 = 0xf5ff9fff;
  }
  else {
    temp_v10 = 0x9fe7ffff;
  }
  temp_v11 = 0xffffffff;
  temp_v12 = computeCountLimit();
  if (temp_v12 < (unsigned short)psVar6[3]) {
    temp_v10 = 0x9b9b9bff;
    temp_v11 = 0xdc0f14ff;
  }
  else {
    temp_v2 = slotRecordFindById(*psVar6);
    if (temp_v2 != 0) {
      temp_v10 = 0x9b9b9bff;
    }
  }
  temp_v2 = asdTMTexTableEntryAt(0x1a,0xff);
  temp_v5 = FUN_0014bf3c(*psVar6,0);
  textFormatBuffer(temp_v13,&LAB_0034c1c0,temp_v5);
  puVar9 = temp_v13;
  fontMeasureLineAdvance(puVar9,3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)&param_1->field_0x0 +
                      (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) +
                      ((int)**(short **)(temp_v2 + 0xc) - (int)puVar9) / 2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(3,0xffffffff,temp_v13,(int)*(short *)(temp_v1 + 8));
  temp_v2 = asdTMTexTableEntryAt(0x1a,0xfe);
  if (temp_v17 != 0) {
    textFormatBuffer(temp_v13,&LAB_0034c1c4);
  }
  else {
    temp_v5 = (int)FUN_00180114(*psVar6);
    textFormatBuffer(temp_v13,&LAB_0034c1c0,temp_v5);
  }
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)&param_1->field_0x0 +
                      (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(3,temp_v10,temp_v13,(int)*(short *)(temp_v2 + 8));
  drawSetColorFromRGBA8(temp_v11);
  if ((unsigned short)psVar6[3] >= 100) {
    temp_v2 = asdTMTexTableEntryAt(0x1a,0x262);
    FUN_00180310(0,(int)&param_1->field_0x0 +
                   (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8),
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,3,0x83,
                 &LAB_0034c1dc,psVar6[3]);
  }
  else {
    temp_v2 = asdTMTexTableEntryAt(0x1a,0xfd);
    FUN_00180310(0,(int)&param_1->field_0x0 +
                   (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8),
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,2,0x83,
                 &LAB_0034c1dc,psVar6[3]);
  }
  FUN_00183bb0();
  temp_v2 = asdTMTexTableEntryAt(0x1a,0xfb);
  if (temp_v17 != 0) {
    FUN_0018152c(0,(int)&param_1->field_0x0 +
                   (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8),
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0x83,0);
  }
  else {
    FUN_0018152c((int)*psVar6,
                 (int)&param_1->field_0x0 + (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8),
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x83,0);
    FUN_0020caec(*psVar6,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8),
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0x88);
  }
  temp_v2 = asdTMTexTableEntryAt(0x1a,0x100);
  temp_v9 = FUN_002a4b28(*psVar6);
  if (temp_v9 == 0) {
    FUN_00164b5c(2,0x1a,8,(int)&param_1->field_0x0 +
                          (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8),
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x83);
  }
  FUN_001835b4(2,0x1a,0x272,param_1,param_2,0x97);
  FUN_00344cd0(temp_v14,param_1,param_2,0x1a,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
               (int)*(short *)((int)puVar2 + 0x476),(int)*(short *)((int)puVar2 + 0x472),
               (int)*(short *)(puVar2 + 0x11d),0x97,0);
  efctSetSpeed();
  return;
}

} /* extern "C" */
