#include "util/Vec2Fixed.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b1a00` (_code @ 0x4b1a00, 0x144c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "util/PackNibbles.h"

extern "C" {

int textFormatBuffer(...);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(...);
int FUN_00180310(...);
int asdTMTexTableEntryAt(...);
int FUN_00185e84(...);
int FUN_002685cc(void);
int FUN_002a4894(...);
int arrayContainsU16(...);
int resultDrawRewardDetails(...);
int FUN_004bcbb4(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_3_stack;

extern unsigned char LAB_004b1dc8; /* 0x4b1dc8 */
extern unsigned char LAB_004b1de8; /* 0x4b1de8 */
extern unsigned char LAB_004b25a8; /* 0x4b25a8 */
extern unsigned char LAB_004b25b0; /* 0x4b25b0 */
extern unsigned char LAB_004b2a8c; /* 0x4b2a8c */
extern unsigned char LAB_004b2a9c; /* 0x4b2a9c */
extern unsigned char LAB_004b2e4c; /* 0x4b2e4c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bd84(unsigned short);
extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00180114(unsigned short);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: FUN_00185e84. */
extern int padGetMappedValue(unsigned short);
extern int gameGetSlotRecord(int);
/* Supplied declaration required: FUN_002685cc. */
extern int recordGetModeForId(int);
/* Supplied declaration required: FUN_002a4894. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: arrayContainsU16. */
extern int countUnlockedSlots(void);
extern int FUN_003dfed4(unsigned short, int);
/* Supplied declaration required: resultDrawRewardDetails. */
/* Supplied declaration required: FUN_004bcbb4. */
extern int getUnlockedSlotCount(int);


void FUN_004b1a00(int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [72];
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  unsigned int *temp_v27;
  int temp_v28;
  int temp_v29;
  int temp_v30;
  unsigned int temp_v31;
  int temp_v32;
  
  temp_v22 = 0x1d;
  temp_v13 = gameGetSlotRecord((int)*(char *)(param_1 + *(int *)(param_1 + 0x74c0) * 0x150 + 0x442c));
  temp_v11 = 0;
  temp_v28 = param_1 + 0x4000;
  temp_v19 = 0;
  temp_v23 = 0;
  temp_v21 = 0;
  temp_v1 = *(int *)(param_1 + 0x436c);
  temp_v10 = 0;
  temp_v16 = 0;
  if (temp_v1 == 3) {
    temp_v19 = 1;
  }
  else {
    temp_v11 = (unsigned int)(temp_v1 == 4);
    if (temp_v1 != 4) {
      if (temp_v1 == 5) {
        temp_v21 = 1;
      }
      else if (temp_v1 != 6) {
        if (temp_v1 == 10) {
          temp_v23 = 1;
        }
        else if (temp_v1 == 0x1e) {
          temp_v16 = 1;
        }
      }
      else {
        temp_v16 = 1;
      }
    }
  }
  FUN_00164b5c(2,0x1d,0xb,param_2,param_3,0x65);
  FUN_001835b4(2,0x1d,0xd1,param_2,param_3,0x65);
  FUN_001835b4(2,0x1d,0xd2,param_2,param_3,0x6a);
  temp_v1 = asdTMTexTableEntryAt(0x1d,0xd3);
  temp_v2 = gameGetPlayerName();
  textFormatBuffer(temp_v12,&LAB_004b1dc8,temp_v2);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(3,0xff,temp_v12);
  FUN_001835b4(2,0x1d,0xd4,param_2,param_3,0x65);
  FUN_001835b4(2,0x1d,0xd5,param_2,param_3,0x6a);
  temp_v1 = asdTMTexTableEntryAt(0x1d,0xd6);
  temp_v2 = FUN_00180114(*(unsigned short *)(temp_v13 + 0x62));
  textFormatBuffer(temp_v12,&LAB_004b1dc8,temp_v2);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(3,0xff,temp_v12);
  temp_v1 = asdTMTexTableEntryAt(0x1d,0x3ec);
  FUN_001835b4(2,0x1d,*(unsigned int *)(param_1 + 0x740),*(short *)(temp_v1 + 8) + param_2,
               *(short *)(temp_v1 + 10) + param_3,0x65);
  temp_v20 = temp_v19 | temp_v16;
  temp_v15 = 0;
  temp_v26 = param_1 + 0x7640;
  if (temp_v20 != 0) {
    temp_v1 = FUN_002a4894();
    temp_v3 = objectApplyIfUnblocked(temp_v26);
    if (temp_v3 - 1 <= temp_v1) {
      temp_v15 = 1;
      temp_v1 = asdTMTexTableEntryAt(0x1d,0x169);
      efctSetSpeed();
      temp_v3 = recordGetModeForId((int)*(short *)(param_1 + *(short *)(param_1 + 0x7868) * 2 + 0x43b6));
      if ((!(temp_v3 == 1 || temp_v3 == 2)) && (temp_v3 != 6)) {
        temp_v2 = 0x9fe7ffff;
      }
      else {
        temp_v2 = 0xf5ff9fff;
        temp_v10 = 1;
      }
      resultDrawRewardDetails(param_1,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,temp_v10);
      temp_v3 = asdTMTexTableEntryAt(0x1d,0xfe);
      temp_v8 = (int)*(short *)(temp_v3 + 10);
      VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v8 + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = 3;
      goto LAB_004b1d78;
    }
  }
  temp_v2 = 0xffffffff;
  temp_v1 = asdTMTexTableEntryAt(0x1d,0x168);
  FUN_00164b5c(2,0x1d,9,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0x97);
  temp_v3 = asdTMTexTableEntryAt(0x1d,0xdf);
  temp_v8 = (int)*(short *)(temp_v3 + 10);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v8 + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = 2;
LAB_004b1d78:
  textDrawString(temp_v10,temp_v2,&LAB_004b1de8,temp_v8);
  temp_v18 = countUnlockedSlots();
  temp_v1 = 0;
  temp_v31 = temp_v21 | temp_v23;
  temp_v27 = (unsigned int *)(param_1 + 0x7854);
  temp_v14 = param_1 + 0x76c4;
  temp_v29 = param_1 + 0x75dc;
  temp_v30 = param_1 + 0x7c8;
  do {
    if (((temp_v11 == 0) || (temp_v3 = FUN_002a4894(temp_v29), temp_v3 != temp_v1)) || (temp_v15 != 0)) {
      temp_v4 = asdTMTexTableEntryAt(temp_v22,temp_v1 + 0xe4);
      temp_v17 = 0xffffffff;
      temp_v3 = temp_v4;
      temp_v8 = param_2;
      temp_v5 = param_3;
      if ((temp_v21 != 0) && (temp_v3 = FUN_002a4894(temp_v29), temp_v3 == temp_v1)) {
        if (*(int *)(temp_v28 + 0x37c) < 1) {
          VectorSignedToFloat(1 - *(int *)(temp_v28 + 0x37c),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v3 = temp_v28;
        }
        else {
          temp_v8 = vec2GetXInt(reinterpret_cast<const void *>(temp_v30));
          temp_v8 = param_2 + temp_v8;
          temp_v5 = vec2GetYInt(temp_v30);
          temp_v5 = param_3 + temp_v5;
          temp_v3 = temp_v30;
        }
      }
      temp_v6 = 0;
      if (((temp_v16 != 0) && (temp_v6 = 0, *(char *)(param_1 + temp_v1 + 0x7860) != '\0')) &&
         (temp_v6 = *(int *)(temp_v28 + 0x37c), temp_v3 = temp_v28, temp_v6 < 7)) {
        temp_v6 = 6 - temp_v6;
        VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      efctSetSpeed(temp_v3,temp_v6);
      FUN_00164b5c(2,temp_v22,9,*(short *)(temp_v4 + 8) + temp_v8,*(short *)(temp_v4 + 10) + temp_v5,0x65);
      if (temp_v1 >= temp_v18) {
        FUN_001835b4(2,temp_v22,0x118,*(short *)(temp_v4 + 8) + temp_v8,*(short *)(temp_v4 + 10) + temp_v5,
                     0x6f);
      }
      else {
        temp_v3 = param_1 + temp_v1 * 2;
        temp_v32 = temp_v3 + 0x7600;
        if (*(short *)(temp_v3 + 0x76a4) != 0) {
          FUN_001835b4(2,temp_v22,0xdb,*(short *)(temp_v4 + 8) + temp_v8,*(short *)(temp_v4 + 10) + temp_v5
                       ,0x6a);
          FUN_001835b4(2,temp_v22,0xdc,*(short *)(temp_v4 + 8) + temp_v8,*(short *)(temp_v4 + 10) + temp_v5
                       ,0x6f);
          FUN_001835b4(2,temp_v22,0xdd,*(short *)(temp_v4 + 8) + temp_v8,*(short *)(temp_v4 + 10) + temp_v5
                       ,0x74);
          temp_v9 = *(unsigned short *)(temp_v32 + 0xb4) & 0xff;
          temp_v3 = temp_v14;
          arrayContainsU16(temp_v14,*temp_v27,*(unsigned short *)(temp_v32 + 0xa4));
          if (temp_v3 != 0) {
            temp_v17 = 0x57d8ffff;
          }
          temp_v3 = asdTMTexTableEntryAt(temp_v22,0xde);
          FUN_00185e84((int)*(short *)(temp_v32 + 0xa4),
                       (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v8,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v5,0x6a,1,
                       temp_v9);
          temp_v3 = padGetMappedValue(*(unsigned short *)(temp_v32 + 0xa4));
          temp_v25 = FUN_003dfed4(*(unsigned short *)(temp_v32 + 0xa4),temp_v3 + temp_v9);
          if (temp_v9 != 0) {
            temp_v17 = 0x72e027ff;
          }
          temp_v24 = asdTMTexTableEntryAt(temp_v22,0xdf);
          temp_v10 = FUN_0014bd84(*(unsigned short *)(temp_v32 + 0xa4));
          textFormatBuffer(temp_v12,&LAB_004b1dc8,temp_v10);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v24 + 10) + temp_v5,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v24 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v8,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v17,temp_v12,(int)*(short *)(temp_v4 + 8));
          temp_v3 = asdTMTexTableEntryAt(temp_v22,0xe3);
          FUN_00180310(1,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v8,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v5,1,4,0x79,
                       &LAB_004b25a8,temp_v25);
        }
        else {
          temp_v24 = asdTMTexTableEntryAt(temp_v22,0xdf);
          textFormatBuffer(temp_v12,&LAB_004b2a8c);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v24 + 10) + temp_v5,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v24 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v8,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v17,temp_v12,(int)*(short *)(temp_v4 + 8));
        }
        if ((temp_v31 != 0) && (*(short *)(param_1 + temp_v1 * 0x8c + 0x93c) != 0)) {
          temp_v3 = g_renderCtx;
          temp_v6 = packNibblesAndByte(6, 1, 0);
          piVar7 = (int *)(temp_v3 + 0x12b8);
          temp_v7 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v6;
          if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v7 != temp_v6) {
            (**(romwright_code **)(temp_v3 + 0x12d4))(temp_v6);
            *(unsigned char *)(piVar7 + 6) = 0;
          }
          efctSetSpeed();
          FUN_001835b4(2,temp_v22,0xda,*(short *)(temp_v4 + 8) + temp_v8,*(short *)(temp_v4 + 10) + temp_v5
                       ,0x97);
          efctSetSpeed();
          temp_v3 = g_renderCtx;
          temp_v8 = packNibblesAndByte(6, 7, 0);
          piVar7 = (int *)(temp_v3 + 0x12b8);
          temp_v5 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v8;
          if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v8) {
            (**(romwright_code **)(temp_v3 + 0x12d4))();
            *(unsigned char *)(temp_v3 + 0x12d0) = 0;
          }
        }
        efctSetSpeed();
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  if ((temp_v11 & ~temp_v15) != 0) {
    temp_v1 = FUN_002a4894(temp_v29);
    temp_v3 = asdTMTexTableEntryAt(temp_v22,temp_v1 + 0x103);
    efctSetSpeed();
    temp_v8 = FUN_002a4894(temp_v29);
    temp_v8 = recordGetModeForId((int)*(short *)(param_1 + temp_v8 * 2 + 0x43b6));
    if ((temp_v8 == 1 || temp_v8 == 2) || (temp_v8 == 6)) {
      temp_v10 = 0xf5ff9fff;
    }
    else {
      temp_v10 = 0x9fe7ffff;
    }
    resultDrawRewardDetails(param_1,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3);
    temp_v1 = param_1 + temp_v1 * 2;
    if (*(short *)(temp_v1 + 0x76a4) != 0) {
      FUN_001835b4(2,temp_v22,0xfb,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                   0xc4);
      FUN_001835b4(2,temp_v22,0xfc,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                   0xc9);
      temp_v0 = *(unsigned short *)(temp_v1 + 0x76b4);
      temp_v9 = temp_v0 & 0xff;
      temp_v8 = temp_v14;
      arrayContainsU16(temp_v14,*temp_v27,*(unsigned short *)(temp_v1 + 0x76a4));
      if (temp_v8 != 0) {
        temp_v10 = 0x57d8ffff;
      }
      temp_v8 = padGetMappedValue(*(unsigned short *)(temp_v1 + 0x76a4));
      temp_v25 = FUN_003dfed4(*(unsigned short *)(temp_v1 + 0x76a4),temp_v8 + temp_v9);
      if ((temp_v0 & 0xff) != 0) {
        temp_v10 = 0x72e027ff;
      }
      temp_v24 = asdTMTexTableEntryAt(temp_v22,0xfe);
      temp_v2 = FUN_0014bd84(*(unsigned short *)(temp_v1 + 0x76a4));
      textFormatBuffer(temp_v12,&LAB_004b25b0,temp_v2);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v24 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v24 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(3,temp_v10,temp_v12);
      temp_v8 = asdTMTexTableEntryAt(temp_v22,0xfd);
      FUN_00185e84((int)*(short *)(temp_v1 + 0x76a4),
                   (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + param_2,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + param_3,0xc9,1,
                   temp_v9);
      temp_v1 = asdTMTexTableEntryAt(temp_v22,0x102);
      FUN_00180310(1,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_3,1,4,0xc9,
                   &LAB_004b25a8,temp_v25);
    }
    else {
      temp_v1 = asdTMTexTableEntryAt(temp_v22,0xfe);
      textFormatBuffer(temp_v12,&LAB_004b2a8c);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,temp_v10,temp_v12,(int)*(short *)(temp_v3 + 8));
    }
  }
  temp_v18 = getUnlockedSlotCount(temp_v13);
  temp_v1 = 0;
  do {
    if (((temp_v19 == 0) || (temp_v3 = FUN_002a4894(temp_v26), temp_v3 != temp_v1)) || (temp_v15 != 0)) {
      temp_v17 = 0xffffffff;
      efctSetSpeed();
      temp_v3 = asdTMTexTableEntryAt(temp_v22,temp_v1 + 0xec);
      FUN_00164b5c(2,temp_v22,9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                   0x97);
      if (temp_v1 >= temp_v18) {
        FUN_001835b4(2,temp_v22,0x118,*(short *)(temp_v3 + 8) + param_2,
                     *(short *)(temp_v3 + 10) + param_3,0x9c);
      }
      else {
        if ((temp_v11 != 0) && (temp_v8 = FUN_002a4894(temp_v26), temp_v8 == temp_v1)) {
          FUN_001835b4(2,temp_v22,0xda,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0x9a);
        }
        temp_v25 = temp_v13 + temp_v1 * 2;
        if (*(short *)(temp_v25 + 0x34) != 0) {
          FUN_001835b4(2,temp_v22,0xdb,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0x9c);
          FUN_001835b4(2,temp_v22,0xdc,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xa1);
          FUN_001835b4(2,temp_v22,0xdd,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xa6);
          temp_v8 = asdTMTexTableEntryAt(temp_v22,0xde);
          FUN_00185e84((int)*(short *)(temp_v25 + 0x34),
                       (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + param_2,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + param_3,0x9c,0,0
                      );
          temp_v9 = (unsigned int)*(unsigned short *)(temp_v25 + 0x34);
          FUN_002685cc();
          if (temp_v9 == 0) {
            temp_v17 = 0x9b9b9bff;
          }
          temp_v8 = temp_v14;
          arrayContainsU16(temp_v14,*temp_v27,*(unsigned short *)(temp_v25 + 0x34));
          if (temp_v8 != 0) {
            temp_v17 = 0x9b9b9bff;
          }
          if ((temp_v11 != 0) && (temp_v8 = FUN_002a4894(temp_v26), temp_v8 == temp_v1)) {
            temp_v17 = 0xff;
          }
          temp_v24 = asdTMTexTableEntryAt(temp_v22,0xdf);
          temp_v10 = FUN_0014bd84(*(unsigned short *)(temp_v25 + 0x34));
          textFormatBuffer(temp_v12,&LAB_004b25b0,temp_v10);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v24 + 10) + param_3
                              ,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v24 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v17,temp_v12,(int)*(short *)(temp_v3 + 8));
          temp_v25 = FUN_004bcbb4(temp_v13,*(unsigned short *)(temp_v25 + 0x34));
          temp_v8 = asdTMTexTableEntryAt(temp_v22,0xe3);
          FUN_00180310(1,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + param_3,1,4,0xab
                       ,&LAB_004b2a9c,temp_v25);
        }
        else {
          temp_v24 = asdTMTexTableEntryAt(temp_v22,0xdf);
          textFormatBuffer(temp_v12,&LAB_004b2a8c);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v24 + 10) + param_3
                              ,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v24 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v17,temp_v12,(int)*(short *)(temp_v3 + 8));
        }
        if ((temp_v23 != 0) && (*(short *)(param_1 + temp_v1 * 0x8c + 0xd9c) != 0)) {
          temp_v8 = g_renderCtx;
          temp_v5 = packNibblesAndByte(6, 1, 0);
          piVar7 = (int *)(temp_v8 + 0x12b8);
          temp_v4 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v5;
          if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v4 != temp_v5) {
            (**(romwright_code **)(temp_v8 + 0x12d4))(temp_v5);
            *(unsigned char *)(piVar7 + 6) = 0;
          }
          efctSetSpeed();
          FUN_001835b4(2,temp_v22,0xda,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xab);
          efctSetSpeed();
          temp_v3 = g_renderCtx;
          temp_v8 = packNibblesAndByte(6, 7, 0);
          piVar7 = (int *)(temp_v3 + 0x12b8);
          temp_v5 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v8;
          if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v8) {
            (**(romwright_code **)(temp_v3 + 0x12d4))();
            *(unsigned char *)(temp_v3 + 0x12d0) = 0;
          }
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  if ((temp_v20 & ~temp_v15) != 0) {
    temp_v1 = FUN_002a4894(temp_v26);
    temp_v3 = asdTMTexTableEntryAt(temp_v22,temp_v1 + 0x10b);
    efctSetSpeed();
    temp_v8 = FUN_002a4894(temp_v26);
    temp_v8 = recordGetModeForId((int)*(short *)(param_1 + temp_v8 * 2 + 0x43c6));
    if ((temp_v8 == 1 || temp_v8 == 2) || (temp_v8 == 6)) {
      temp_v10 = 0xf5ff9fff;
    }
    else {
      temp_v10 = 0x9fe7ffff;
    }
    resultDrawRewardDetails(param_1,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3);
    FUN_001835b4(2,temp_v22,0xfb,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                 0xc4);
    FUN_001835b4(2,temp_v22,0xfc,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                 0xc9);
    temp_v1 = temp_v13 + temp_v1 * 2;
    temp_v11 = (unsigned int)*(unsigned short *)(temp_v1 + 0x34);
    FUN_002685cc();
    if (temp_v11 == 0) {
      temp_v10 = 0x9b9b9bff;
    }
    temp_v8 = temp_v14;
    arrayContainsU16(temp_v14,*temp_v27,*(unsigned short *)(temp_v1 + 0x34));
    if (temp_v8 != 0) {
      temp_v10 = 0x9b9b9bff;
    }
    temp_v8 = asdTMTexTableEntryAt(temp_v22,0xfe);
    temp_v2 = FUN_0014bd84(*(unsigned short *)(temp_v1 + 0x34));
    textFormatBuffer(temp_v12,&LAB_004b2e4c,temp_v2);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(3,temp_v10,temp_v12,(int)*(short *)(temp_v8 + 8));
    temp_v8 = asdTMTexTableEntryAt(temp_v22,0xfd);
    FUN_00185e84((int)*(short *)(temp_v1 + 0x34),
                 (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + param_2,
                 (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,0xc9,0,0);
    temp_v10 = FUN_004bcbb4(temp_v13,*(unsigned short *)(temp_v1 + 0x34));
    temp_v1 = asdTMTexTableEntryAt(temp_v22,0x102);
    FUN_00180310(1,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_3,1,4,0xc9,
                 &LAB_004b2a9c,temp_v10);
  }
  return;
}

} /* extern "C" */
