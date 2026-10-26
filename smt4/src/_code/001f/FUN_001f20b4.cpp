/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f20b4` (_code @ 0x1f20b4, 0xf70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"
#include "shard/W6_W6Match3_RotationY.h"

extern "C" {

int FUN_0029a17c(...);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
int fontMeasureLineAdvance(...);
int devilGetRecord(void);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int textDrawString(...);
int textFormatBuffer(...);
int FUN_002bed3c(void);
int FUN_002bf380(...);
int asdTMTexTableEntryAt(...);
int efctSetSpeed(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_5: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_5_stack;

extern unsigned char LAB_001f3028; /* 0x1f3028 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002580d4. */
extern int uniteGetWork(void);
/* Supplied declaration required: FUN_0029a17c. */
extern int ifTouchGetSelectionModeForRegion(unsigned int);
extern unsigned int FUN_0029dde0(void);
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: devilGetRecord. */
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
extern unsigned int FUN_002bd068(unsigned short);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bed3c. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_001f20b4(int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 15 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned char *puVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar12;
  int *piVar13;
  unsigned int in_fpscr;
  unsigned char temp_v9 [64];
  unsigned short *temp_v10;
  int iStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  int temp_v11;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  temp_v11 = param_4;
  temp_v1 = uniteGetWork();
  if (temp_v1 != 0) {
    temp_v2 = param_1;
    if (param_1 < 0) {
      temp_v2 = -param_1;
    }
    if (temp_v2 < 0x140) {
      FUN_002bf380(2,0x24,0,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x5c,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x5d,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x5e,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x5f,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x60,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x61,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x62,param_1,param_2,0xc9);
      FUN_002bf288(2,0x24,0x4a,param_1,param_2,0xc9);
      temp_v2 = asdTMTexTableEntryAt(0x24,0x49);
      textFormatBuffer(temp_v9,"\x82e\x82\x95\x82\x93\x82\x89\x82\x8f\x82\x8e\x81@\x82o\x82\x8f\x82\x93\x82\x93\x82\x89\x82\x82\x82\x8c\x82\x85\x81F");
      VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xffffffff,temp_v9);
      temp_v2 = asdTMTexTableEntryAt(0x24,0x4c);
      temp_v3 = FUN_0029dde0();
      FUN_002bdf94(0,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,1,2,0xc9,
                   "%d",temp_v3);
      if (*(char *)(temp_v1 + 0x9450) == '\0') {
        temp_v8 = 0;
        do {
          if (temp_v8 != param_3) {
            temp_v2 = asdTMTexTableEntryAt(0x24,temp_v8 + 0x73);
            FUN_002bf288(2,0x24,99,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                         0xc9);
            FUN_002bf288(2,0x24,100,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2
                         ,0xc9);
            temp_v6 = temp_v1 + temp_v8 * 8;
            if ((*(unsigned int *)(temp_v6 + 0x943c) & 0x1fffc) != 0) {
              puVar12 = (unsigned int *)(temp_v6 + 0x9438);
              puVar5 = (unsigned short *)((*(unsigned int *)(temp_v6 + 0x943c) & 0x1ffff) >> 2);
              devilGetRecord();
              temp_v10 = puVar5;
              FUN_002bf288(2,0x24,0x65,*(short *)(temp_v2 + 8) + param_1,
                           *(short *)(temp_v2 + 10) + param_2,0xc9);
              FUN_002bf288(2,0x24,0x66,*(short *)(temp_v2 + 8) + param_1,
                           *(short *)(temp_v2 + 10) + param_2,0xc9);
              temp_v4 = asdTMTexTableEntryAt(0x24,0x6a);
              uiDrawDemonIcon((unsigned short)*puVar12 & 0x7fff,
                           (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                           (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xc9,
                           1);
              FUN_002580d4(*puVar12 & 0x7fff,
                           (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xce)
              ;
              temp_v4 = asdTMTexTableEntryAt(0x24,0x6b);
              uiDrawDemonIcon((*puVar12 & 0x3fffffff) >> 0xf,
                           (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                           (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xc9,
                           1);
              FUN_002580d4((*puVar12 & 0x3fffffff) >> 0xf,
                           (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xce)
              ;
              temp_v4 = asdTMTexTableEntryAt(0x24,0x6c);
              uiDrawDemonIcon((*(unsigned int *)(temp_v6 + 0x943c) & 0x1ffff) >> 2,
                           (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xc9,
                           0);
              FUN_002580d4((*(unsigned int *)(temp_v6 + 0x943c) & 0x1ffff) >> 2,
                           (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                           (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xce)
              ;
              FUN_002bf288(2,0x24,0x67,*(short *)(temp_v2 + 8) + param_1,
                           *(short *)(temp_v2 + 10) + param_2,0xc9);
              FUN_002bf288(2,0x24,0x68,*(short *)(temp_v2 + 8) + param_1,
                           *(short *)(temp_v2 + 10) + param_2,0xc9);
              FUN_002bf288(2,0x24,0x69,*(short *)(temp_v2 + 8) + param_1,
                           *(short *)(temp_v2 + 10) + param_2,0xc9);
              temp_v6 = asdTMTexTableEntryAt(0x24,0x6e);
              temp_v3 = FUN_002bd068(*temp_v10);
              textFormatBuffer(temp_v9,"%s",temp_v3);
              VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) +
                                  param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              textDrawString(2,0xff,temp_v9);
              temp_v6 = asdTMTexTableEntryAt(0x24,0x6f);
              temp_v3 = demonGetRaceLabel(*temp_v10,0);
              textFormatBuffer(temp_v9,"%s",temp_v3);
              puVar7 = temp_v9;
              fontMeasureLineAdvance(puVar7,2);
              VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) +
                                  param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(param_1 + ((int)**(short **)(temp_v6 + 0xc) - (int)puVar7) / 2 +
                                  (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8),
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              textDrawString(2,0x7a4c00ff,temp_v9);
              drawSetColorFromRGBA8(0xff);
              temp_v6 = asdTMTexTableEntryAt(0x24,0x71);
              FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                           (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,1,2,
                           0xce,"%d",*(unsigned char *)((int)temp_v10 + 3));
              FUN_002bed3c();
              temp_v6 = itemGetFlagBit1(*temp_v10);
              if (temp_v6 == 0) {
                temp_v6 = asdTMTexTableEntryAt(0x24,0x6d);
                FUN_002bf380(2,0x24,8,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) +
                                      param_1,
                             (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                             0xd3);
              }
            }
            else {
              textFormatBuffer(temp_v9,"\x82s\x82\x88\x82\x85\x82\x92\x82\x85\x81@\x82\x81\x82\x92\x82\x85\x81@\x82\x8e\x82\x8f\x81@\x82\x83\x82\x81\x82\x8e\x82\x84\x82\x89\x82\x84\x82\x81\x82\x94\x82\x85\x82\x93\x81D");
              temp_v6 = asdTMTexTableEntryAt(0x24,0x72);
              puVar7 = temp_v9;
              fontMeasureLineAdvance(puVar7,2);
              temp_v4 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8);
              VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) +
                                  param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v4 + param_1 + ((int)**(short **)(temp_v6 + 0xc) - (int)puVar7) /
                                                    2,(unsigned char)(in_fpscr >> 0x16) & 3);
              textDrawString(2,0x323232ff,temp_v9,temp_v4);
            }
          }
          temp_v8 = temp_v8 + 1;
        } while ((int)temp_v8 < 3);
        if (param_3 < 3) {
          temp_v2 = temp_v1 + param_3 * 8;
          puVar12 = (unsigned int *)(temp_v2 + 0x9438);
          puVar5 = (unsigned short *)((*(unsigned int *)(temp_v2 + 0x943c) & 0x1ffff) >> 2);
          devilGetRecord();
          temp_v6 = asdTMTexTableEntryAt(0x24,param_3 + 0x87);
          efctSetSpeed();
          FUN_002bf288(2,0x24,0x76,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
                       0xc9);
          FUN_002bf288(2,0x24,0x77,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
                       0xc9);
          FUN_002bf288(2,0x24,0x78,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
                       0xc9);
          efctSetSpeed();
          FUN_002bf288(2,0x24,0x79,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
                       0xc9);
          temp_v4 = ifTouchGetSelectionModeForRegion(param_5);
          temp_v5 = *(short *)(temp_v6 + 10) + param_2;
          temp_v7 = *(short *)(temp_v6 + 8) + param_1;
          if (!((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6)) {
            FUN_002bf288(2,0x24,0x7a,temp_v7,temp_v5,0xc9);
          }
          else {
            FUN_002bf288(2,0x24,0x7b,temp_v7,temp_v5,0xc9);
          }
          FUN_002bf288(2,0x24,0x7d,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
                       0xc9);
          FUN_002bf288(2,0x24,0x7e,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
                       0xc9);
          temp_v5 = asdTMTexTableEntryAt(0x24,0x7a);
          temp_v4 = g_titleScene;
          piVar13 = (int *)(g_titleScene + 0x130c);
          temp_v7 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = 3;
          if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v7 != 3) {
            (**(romwright_code **)(temp_v4 + 0x1328))();
            *(unsigned char *)(temp_v4 + 0x1324) = 0;
          }
          FUN_0029a17c((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                       (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,
                       (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1],1);
          temp_v4 = vec2GetYInt(temp_v1 + 0xb0);
          temp_v0 = *(short *)(temp_v6 + 10);
          temp_v1 = vec2GetXInt(temp_v1 + 0xb0);
          FUN_002bf288(2,0x24,0x7c,temp_v1 + param_1 + (int)*(short *)(temp_v6 + 8),
                       temp_v4 + param_2 + (int)temp_v0,0xce);
          temp_v1 = g_titleScene;
          piVar13 = (int *)(g_titleScene + 0x130c);
          temp_v4 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = 0;
          if (*(char *)(temp_v1 + 0x1324) != '\0' || temp_v4 != 0) {
            (**(romwright_code **)(temp_v1 + 0x1328))();
            *(unsigned char *)(temp_v1 + 0x1324) = 0;
          }
          temp_v1 = asdTMTexTableEntryAt(0x24,0x7f);
          uiDrawDemonIcon((unsigned short)*puVar12 & 0x7fff,
                       (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                       (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xc9,1);
          FUN_002580d4(*puVar12 & 0x7fff,
                       (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                       (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0xe2);
          temp_v1 = asdTMTexTableEntryAt(0x24,0x80);
          uiDrawDemonIcon((*puVar12 & 0x3fffffff) >> 0xf,
                       (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                       (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xc9,1);
          FUN_002580d4((*puVar12 & 0x3fffffff) >> 0xf,
                       (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                       (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xe2);
          temp_v1 = asdTMTexTableEntryAt(0x24,0x81);
          uiDrawDemonIcon((*(unsigned int *)(temp_v2 + 0x943c) & 0x1ffff) >> 2,
                       (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                       (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0xc9,0);
          FUN_002580d4((*(unsigned int *)(temp_v2 + 0x943c) & 0x1ffff) >> 2,
                       (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                       (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0xe2);
          temp_v1 = asdTMTexTableEntryAt(0x24,0x83);
          temp_v3 = FUN_002bd068(*puVar5);
          textFormatBuffer(temp_v9,"%s",temp_v3);
          VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(3,0xffffffff,temp_v9);
          temp_v1 = asdTMTexTableEntryAt(0x24,0x84);
          temp_v3 = demonGetRaceLabel(*puVar5,0);
          textFormatBuffer(temp_v9,"%s",temp_v3);
          puVar7 = temp_v9;
          fontMeasureLineAdvance(puVar7,3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v6 + 8) +
                              ((int)**(short **)(temp_v1 + 0xc) - (int)puVar7) / 2 + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(3,0xffffffff,temp_v9);
          temp_v2 = asdTMTexTableEntryAt(0x24,0x86);
          FUN_002bdf94(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                       (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,2,0xce,
                       &LAB_001f3028,*(unsigned char *)((int)puVar5 + 3));
          temp_v1 = itemGetFlagBit1(*puVar5);
          if (temp_v1 == 0) {
            temp_v2 = asdTMTexTableEntryAt(0x24,0x82);
            FUN_002bf380(2,0x24,8,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                         (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0xd3);
          }
          if (temp_v11 != 0) {
            if (temp_v11 != 1) {
              if (temp_v11 == 2) {
                temp_v2 = asdTMTexTableEntryAt(0x24,0x80);
              }
            }
            else {
              temp_v2 = asdTMTexTableEntryAt(0x24,0x7f);
            }
          }
          else {
            temp_v2 = asdTMTexTableEntryAt(0x24,0x81);
          }
          temp_v1 = g_titleScene;
          temp_v4 = packNibblesAndByte(6,1,0);
          piVar13 = (int *)(temp_v1 + 0x12ac);
          temp_v5 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = temp_v4;
          if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
            (**(romwright_code **)(temp_v1 + 0x12c8))();
            *(unsigned char *)(temp_v1 + 0x12c4) = 0;
          }
          FUN_002bf288(2,0x24,0x58,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + param_1
                       ,(int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xdd);
          efctSetSpeed();
          FUN_002bf288(2,0x24,0x59,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + param_1
                       ,(int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xdd);
          efctSetSpeed();
          temp_v1 = g_titleScene;
          temp_v2 = packNibblesAndByte(6,7,0);
          piVar13 = (int *)(temp_v1 + 0x12ac);
          temp_v6 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = temp_v2;
          if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v6 != temp_v2) {
            (**(romwright_code **)(temp_v1 + 0x12c8))();
            *(unsigned char *)(temp_v1 + 0x12c4) = 0;
          }
        }
      }
    }
  }
  return;
}

} /* extern "C" */
