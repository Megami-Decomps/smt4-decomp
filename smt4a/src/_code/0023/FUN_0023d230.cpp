/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d230` (_code @ 0x23d230, 0xa60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0022_Smt4a.h"

extern "C" {

int fontMeasureLineAdvance(...);

int textFormatBuffer(...);
int textDrawString(...);
int FUN_00164b5c(...);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int FUN_00185e84(...);
int gameGetSlotRecord(...);
int FUN_0023d150(...);
int FUN_0026ec00(...);
int statDrawClampedDelta(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
} param_3_stack;

extern unsigned char LAB_0023dcbc; /* 0x23dcbc */
extern int g_camp; /* 0x57f108 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185e84. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: FUN_0023d150. */
extern int FUN_002684d0(unsigned int, int);
/* Supplied declaration required: FUN_0026ec00. */
extern int recordGetModeForId(int);
extern int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: statDrawClampedDelta. */
extern unsigned int FUN_003df57c(unsigned int, unsigned int);
extern unsigned int FUN_004bcbb4(int, unsigned int);


void FUN_0023d230(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *puVar8;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  int temp_v10;
  unsigned char temp_v11 [136];
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  int iStack_30;
  int iStack_2c;
  int temp_v18;
  
  temp_v6 = g_camp;
  temp_v14 = 0;
  temp_v12 = 0;
  temp_v13 = g_camp + 0x1ec;
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v18 = param_3;
  FUN_00164b5c(2,0x14,0,param_1,param_2,0x65);
  FUN_001835b4(2,0x14,0x439,param_1,param_2,0x6a);
  temp_v7 = 0;
  do {
    temp_v1 = resourceRunOperationIfUnblocked(temp_v13);
    temp_v2 = objectApplyIfUnblocked(temp_v13);
    if (temp_v2 <= temp_v1 + temp_v7) break;
    temp_v1 = resourceRunOperationIfUnblocked(temp_v13);
    temp_v9 = *(unsigned int *)(temp_v6 + (temp_v1 + temp_v7) * 8 + 0x1b70);
    temp_v1 = resourceRunOperationIfUnblocked(temp_v13);
    temp_v8 = *(unsigned int *)(temp_v6 + (temp_v1 + temp_v7) * 8 + 0x1b74);
    if (-1 < (int)temp_v8) {
      temp_v12 = gameGetSlotRecord(temp_v8);
    }
    temp_v16 = temp_v8 >> 0x1f;
    FUN_001835b4(2,0x14,0x43a,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6a)
    ;
    FUN_001835b4(2,0x14,0x43b,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6a)
    ;
    FUN_001835b4(2,0x14,0x43c,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6a)
    ;
    FUN_001835b4(2,0x14,0x43d,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6f)
    ;
    temp_v17 = FUN_0014bd84(temp_v9);
    if (temp_v17 != 0) {
      temp_v15 = 0xffffffff;
      temp_v3 = resourceRunOperationIfUnblocked(temp_v13);
      temp_v3 = FUN_002684d0(temp_v9,(int)(short)*(unsigned int *)(temp_v6 + (temp_v3 + temp_v7) * 8 + 0x1b74))
      ;
      if ((temp_v3 != 0) && (temp_v3 = FUN_0022a030(temp_v8,temp_v9), temp_v3 != 0)) {
        temp_v3 = resourceRunOperationIfUnblocked(temp_v13);
        temp_v3 = *(int *)(temp_v6 + (temp_v3 + temp_v7) * 8 + 0x1b74);
        temp_v10 = 1;
        if (temp_v3 < 0) {
          temp_v3 = gameGetPlayerData();
          if ((*(unsigned short *)(temp_v3 + 0x5e) & 2) != 0) {
            temp_v15 = 0x9b9b9bff;
          }
        }
        else {
          temp_v3 = gameGetSlotRecord(temp_v3);
          if (((temp_v3 == 0) || ((*(unsigned short *)(temp_v3 + 0x60) & 2) != 0)) ||
             ((*(unsigned short *)(temp_v3 + 0x60) & 0x400) != 0)) {
            temp_v10 = 0;
          }
          temp_v4 = gameFlagIsSet(0x401);
          temp_v3 = 0;
          if (temp_v4 != 0) {
            temp_v3 = temp_v10;
          }
          if (temp_v4 == 0 || temp_v3 == 0) {
            temp_v15 = 0x9b9b9bff;
          }
        }
      }
      else {
        temp_v15 = 0x9b9b9bff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,temp_v15,temp_v17,(int)*(short *)(temp_v2 + 8));
    }
    if ((int)temp_v8 < 0) {
      temp_v5 = FUN_003df57c(temp_v9,1);
      textFormatBuffer(temp_v11,"%d",temp_v5);
    }
    else {
      temp_v5 = FUN_004bcbb4(temp_v12,temp_v9);
      textFormatBuffer(temp_v11,"%d",temp_v5);
    }
    FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,4,0x6f,
                 temp_v11);
    FUN_00185e84((int)(short)temp_v9,
                 (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x6f,temp_v16,0
                );
    if (-1 < (int)temp_v8) {
      statDrawClampedDelta(temp_v12,(int)(short)temp_v9,
                   (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x88,0);
    }
    if ((int)temp_v8 < 0) {
      drawSetColorFromRGBA8(*(unsigned int *)(temp_v6 + temp_v8 * 4 + 0x3248));
      temp_v3 = (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10);
      temp_v1 = (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8);
      temp_v2 = -1;
      FUN_0018152c(temp_v2,temp_v1 + param_1,temp_v3 + param_2,0x6f,0);
    }
    else if (temp_v12 != 0) {
      drawSetColorFromRGBA8(*(unsigned int *)(temp_v6 + temp_v8 * 4 + 0x3248));
      temp_v3 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10);
      temp_v1 = (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8);
      temp_v2 = (int)*(short *)(temp_v12 + 0x62);
      FUN_0018152c(temp_v2,temp_v1 + param_1,temp_v3 + param_2,0x6f,0);
    }
    FUN_00183bb0();
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0xb);
  FUN_0023d150(temp_v13,param_1,param_2,1);
  if ((temp_v18 != 0) && (temp_v7 = objectApplyIfUnblocked(temp_v6 + 0x1ec), temp_v7 >= 1)) {
    temp_v7 = resourceRunOperationIfUnblocked(temp_v13);
    temp_v1 = FUN_002a4894(temp_v13);
    temp_v9 = *(unsigned int *)(temp_v6 + (temp_v1 + temp_v7) * 8 + 0x1b70);
    temp_v7 = resourceRunOperationIfUnblocked(temp_v13);
    temp_v1 = FUN_002a4894(temp_v13);
    temp_v8 = *(unsigned int *)(temp_v6 + (temp_v1 + temp_v7) * 8 + 0x1b74);
    if (-1 < (int)temp_v8) {
      temp_v12 = gameGetSlotRecord(temp_v8);
    }
    temp_v16 = temp_v8 >> 0x1f;
    temp_v1 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,temp_v7 + 0x40d));
    temp_v7 = FUN_002a4894(temp_v13);
    temp_v7 = recordGetModeForId((int)*(short *)(temp_v6 + temp_v7 * 2 + 0x1b3e));
    temp_v5 = 0x9fe7ffff;
    if ((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6) {
      temp_v5 = 0xf5ff9fff;
      temp_v14 = 1;
    }
    temp_v7 = FUN_002a4894(temp_v13);
    temp_v7 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,temp_v7 + 0x42e));
    FUN_0026ec00(*(short *)(temp_v7 + 8) + param_1,*(short *)(temp_v7 + 10) + param_2,temp_v14);
    temp_v1 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x449));
    temp_v17 = FUN_0014bd84(temp_v9);
    if (temp_v17 != 0) {
      temp_v2 = resourceRunOperationIfUnblocked(temp_v13);
      temp_v3 = FUN_002a4894(temp_v13);
      temp_v2 = FUN_002684d0(temp_v9,(int)(short)*(unsigned int *)(temp_v6 + (temp_v3 + temp_v2) * 8 + 0x1b74))
      ;
      if ((temp_v2 != 0) && (temp_v2 = FUN_0022a030(temp_v8,temp_v9), temp_v2 != 0)) {
        temp_v2 = resourceRunOperationIfUnblocked(temp_v13);
        temp_v3 = FUN_002a4894(temp_v13);
        temp_v0 = 1;
        if (*(int *)(temp_v6 + (temp_v3 + temp_v2) * 8 + 0x1b74) < 0) {
          temp_v2 = gameGetPlayerData();
          if ((*(unsigned short *)(temp_v2 + 0x5e) & 2) != 0) {
            temp_v5 = 0x9b9b9bff;
          }
        }
        else {
          temp_v2 = gameGetSlotRecord();
          if (((temp_v2 == 0) || ((*(unsigned short *)(temp_v2 + 0x60) & 2) != 0)) ||
             ((*(unsigned short *)(temp_v2 + 0x60) & 0x400) != 0)) {
            temp_v0 = 0;
          }
          temp_v2 = gameFlagIsSet(0x401);
          if (temp_v2 == 0 || !temp_v0) {
            temp_v5 = 0x9b9b9bff;
          }
        }
      }
      else {
        temp_v5 = 0x9b9b9bff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(3,temp_v5,temp_v17,(int)*(short *)(temp_v1 + 8));
    }
    FUN_001835b4(2,0x14,0x446,*(short *)(temp_v7 + 8) + param_1,*(short *)(temp_v7 + 10) + param_2,0x83)
    ;
    if ((int)temp_v8 < 0) {
      temp_v5 = FUN_003df57c(temp_v9,1);
      textFormatBuffer(temp_v11,"%d",temp_v5);
    }
    else {
      temp_v5 = FUN_004bcbb4(temp_v12,temp_v9);
      textFormatBuffer(temp_v11,"%d",temp_v5);
    }
    FUN_00180310(0,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,4,0x83,
                 temp_v11);
    temp_v2 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x43f));
    FUN_001835b4(2,0x14,0x445,*(short *)(temp_v7 + 8) + param_1,*(short *)(temp_v7 + 10) + param_2,0x83)
    ;
    temp_v1 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x448));
    temp_v1 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x44d));
    temp_v2 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x440));
    FUN_00185e84((int)(short)temp_v9,
                 (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0x88,temp_v16,0
                );
    if (-1 < (int)temp_v8) {
      statDrawClampedDelta(temp_v12,(int)(short)temp_v9,
                   (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v7 + 10) + param_2,0x88,0);
    }
    if ((int)temp_v8 < 0) {
      drawSetColorFromRGBA8(*(unsigned int *)(temp_v6 + temp_v8 * 4 + 0x3248));
      temp_v3 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v7 + 10);
      temp_v7 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8);
      temp_v2 = -1;
      FUN_0018152c(temp_v2,temp_v7 + param_1,temp_v3 + param_2,0x88,0);
    }
    else {
      temp_v2 = gameGetSlotRecord(temp_v8);
      if (temp_v2 != 0) {
        drawSetColorFromRGBA8(*(unsigned int *)(temp_v6 + temp_v8 * 4 + 0x3248));
        temp_v3 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v7 + 10);
        temp_v2 = (int)*(short *)(temp_v2 + 0x62);
        temp_v7 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8);
        FUN_0018152c(temp_v2,temp_v7 + param_1,temp_v3 + param_2,0x88,0);
      }
    }
    temp_v1 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x447));
    temp_v2 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x43e));
    temp_v2 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x14,0x444));
    FUN_00183bb0();
  }
  temp_v6 = objectApplyIfUnblocked(temp_v6 + 0x1ec);
  if (temp_v6 < 1) {
    FUN_00164b5c(2,0x12,0x1b,param_1,param_2,0xdd);
    temp_v6 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x12,0x544));
    textFormatBuffer(temp_v11,&LAB_0023dcbc);
    puVar8 = temp_v11;
    fontMeasureLineAdvance(puVar8,2);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 8) +
                        ((int)**(short **)(temp_v6 + 0xc) - (int)puVar8) / 2 + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v6 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(2,0xffffffff,temp_v11);
  }
  return;
}

} /* extern "C" */
