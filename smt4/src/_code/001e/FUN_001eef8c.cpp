/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eef8c` (_code @ 0x1eef8c, 0x15b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match3_RotationY.h"
#include "code/Code0029.h"

extern "C" {

int FUN_00290994(...);

int gameRecordCopy(...);
int FUN_0029a17c(...);
int FUN_0029e6f0(void);
int FUN_0029efc0(...);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
int fontMeasureLineAdvance(...);
int devilGetRecord(void);
int demonGetRaceLabel(...);
int FUN_002bd068(...);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int textDrawString(...);
int textFormatBuffer(...);
int FUN_002bed3c(void);
int FUN_002bf380(int, int, int, int, int, int);
int asdTMTexTableEntryAt(...);
int efctSetSpeed(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 14 slot(s), 54 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned short spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_3_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002580d4. */
extern int uniteGetWork(void);
/* Supplied declaration required: gameRecordCopy. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029a17c. */
extern int ifTouchGetSelectionModeForRegion(int);
extern unsigned int FUN_0029dde0(void);
/* Supplied declaration required: FUN_0029e6f0. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
extern int *gameGetSlotTable(void);
/* Supplied declaration required: partyMemberFindById. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: demonGetRaceLabel. */
/* Supplied declaration required: FUN_002bd068. */
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


void FUN_001eef8c(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  short *psVar13;
  int temp_v11;
  int temp_v12;
  unsigned char *puVar16;
  int temp_v13;
  int temp_v14;
  int *piVar19;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int in_fpscr;
  unsigned short temp_v17 [26];
  int temp_v18;
  unsigned char temp_v19 [72];
  int temp_v20;
  int temp_v21;
  int temp_v22;
  
  temp_v20 = param_1;
  temp_v21 = param_2;
  temp_v22 = param_3;
  temp_v2 = uniteGetWork();
  temp_v8 = temp_v21;
  temp_v9 = temp_v20;
  if (temp_v2 != 0) {
    FUN_002bf380(2,0x24,3,temp_v20,temp_v21,0x65);
    FUN_002bf288(2,0x24,0x10e,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x10f,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x110,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x111,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x4f,temp_v9,temp_v8,0x6a);
    temp_v3 = temp_v2 + 0x6c00;
    puVar5 = (unsigned short *)
             ((*(unsigned int *)(temp_v2 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6ce2) * 8 + 0x1394) & 0x1ffff) >> 2);
    devilGetRecord();
    temp_v4 = asdTMTexTableEntryAt(0x24,0x4d);
    temp_v15 = 0xffffffff;
    temp_v5 = FUN_0029dde0();
    temp_v16 = 0x5a5a5aff;
    if (temp_v5 < *(unsigned char *)((int)puVar5 + 3)) {
      temp_v15 = 0xdc0f14ff;
    }
    else {
      temp_v6 = partyMemberFindById(*puVar5);
      if ((temp_v6 == 0) && (temp_v16 = 0xffffffff, *(char *)(temp_v3 + 0xe0) == '\0')) {
        temp_v16 = 0x72e027ff;
      }
    }
    temp_v7 = FUN_002bd068(*puVar5);
    textFormatBuffer(temp_v19,"%s",temp_v7);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(2,temp_v16,temp_v19);
    temp_v4 = asdTMTexTableEntryAt(0x24,0x4e);
    temp_v16 = demonGetRaceLabel(*puVar5,0);
    textFormatBuffer(temp_v19,"%s",temp_v16);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(2,0xf49800ff,temp_v19);
    temp_v4 = asdTMTexTableEntryAt(0x24,0x51);
    drawSetColorFromRGBA8(temp_v15);
    FUN_002bdf94(0,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,1,2,0x6f,
                 "%d",*(unsigned char *)((int)puVar5 + 3));
    FUN_002bed3c();
    if (*(char *)(temp_v3 + 0xe0) == '\0') {
      FUN_002bf288(2,0x24,0x1e9,
                   ((int)(*(int *)(temp_v2 + 0x3fc) +
                         ((unsigned int)(*(int *)(temp_v2 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3 + temp_v9,
                   temp_v8,0x79);
      efctSetSpeed();
      temp_v4 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar19 = (int *)(temp_v4 + 0x12ac);
      temp_v13 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v6;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v13 != temp_v6) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x24,0x1ea,temp_v9,temp_v8,0x79);
      temp_v9 = g_titleScene;
      temp_v8 = packNibblesAndByte(6,7,0);
      piVar19 = (int *)(temp_v9 + 0x12ac);
      temp_v4 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v8;
      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v4 != temp_v8) {
        (**(romwright_code **)(temp_v9 + 0x12c8))(temp_v8);
        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
      }
      efctSetSpeed();
    }
    temp_v18 = temp_v2 + 0x6c7c;
    temp_v9 = FUN_0029efc0();
    temp_v4 = 0;
    temp_v8 = FUN_0029d644((const void *)(temp_v2 + 0x6c7c));
    if (0 < temp_v8) {
      do {
        temp_v6 = temp_v21;
        temp_v8 = temp_v20;
        temp_v1 = *(unsigned short *)(temp_v2 + (temp_v9 + temp_v4) * 2 + 0x6ce2);
        temp_v13 = asdTMTexTableEntryAt(0x24,temp_v4 + 0x125);
        temp_v8 = temp_v8 + *(short *)(temp_v13 + 8);
        temp_v6 = temp_v6 + *(short *)(temp_v13 + 10);
        temp_v10 = temp_v2 + (unsigned int)temp_v1 * 8;
        psVar13 = (short *)(*(unsigned int *)(temp_v10 + 0x1390) & 0x7fff);
        temp_v13 = temp_v10;
        devilGetRecord();
        temp_v11 = asdTMTexTableEntryAt(0x24,0x11a);
        FUN_002bf288(2,0x24,0x113,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6a);
        FUN_002bf288(2,0x24,0x114,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6f);
        temp_v12 = asdTMTexTableEntryAt(0x24,0x118);
        temp_v15 = FUN_002bd068(*psVar13);
        textFormatBuffer(temp_v19,"%s",temp_v15);
        puVar16 = temp_v19;
        fontMeasureLineAdvance(puVar16,1);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(1,0xff,temp_v19,(int)*(short *)(temp_v12 + 10));
        temp_v12 = asdTMTexTableEntryAt(0x24,0x119);
        temp_v15 = demonGetRaceLabel(*psVar13,0);
        textFormatBuffer(temp_v19,"%s",temp_v15);
        puVar16 = temp_v19;
        fontMeasureLineAdvance(puVar16,2);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0x7a4c00ff,temp_v19,(int)*(short *)(temp_v11 + 8));
        temp_v12 = asdTMTexTableEntryAt(0x24,0x117);
        if (*(unsigned int *)(temp_v10 + 0x1390) >> 0x1e == 3) {
          gameRecordCopy(*psVar13,temp_v17);
          temp_v5 = (unsigned int)temp_v17[0];
        }
        else {
          temp_v14 = partyMemberFindById(*psVar13);
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v14 + 0x48);
        }
        drawSetColorFromRGBA8(0xff);
        FUN_002bdf94(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,1,2,0x79,
                     "%d",temp_v5);
        FUN_002bed3c();
        temp_v12 = asdTMTexTableEntryAt(0x24,0x115);
        uiDrawDemonIcon((int)*psVar13,
                     (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,0x79,1);
        FUN_002580d4(*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,0x7e);
        psVar13 = (short *)((*(unsigned int *)(temp_v10 + 0x1390) & 0x3fffffff) >> 0xf);
        devilGetRecord();
        temp_v11 = asdTMTexTableEntryAt(0x24,0x11b);
        FUN_002bf288(2,0x24,0x113,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6a);
        FUN_002bf288(2,0x24,0x114,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6f);
        temp_v12 = asdTMTexTableEntryAt(0x24,0x118);
        temp_v15 = FUN_002bd068(*psVar13);
        textFormatBuffer(temp_v19,"%s",temp_v15);
        puVar16 = temp_v19;
        fontMeasureLineAdvance(puVar16,1);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(1,0xff,temp_v19,(int)*(short *)(temp_v11 + 8));
        temp_v12 = asdTMTexTableEntryAt(0x24,0x119);
        temp_v15 = demonGetRaceLabel(*psVar13,0);
        textFormatBuffer(temp_v19,"%s",temp_v15);
        puVar16 = temp_v19;
        fontMeasureLineAdvance(puVar16,2);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0x7a4c00ff,temp_v19,(int)*(short *)(temp_v11 + 8));
        temp_v12 = asdTMTexTableEntryAt(0x24,0x117);
        if ((*(unsigned int *)(temp_v10 + 0x1394) & 3) == 3) {
          gameRecordCopy(*psVar13,temp_v17);
          temp_v1 = temp_v17[0];
        }
        else {
          temp_v10 = partyMemberFindById(*psVar13);
          temp_v1 = (unsigned short)*(unsigned char *)(temp_v10 + 0x48);
        }
        drawSetColorFromRGBA8(0xff);
        FUN_002bdf94(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,1,2,0x79,
                     "%d",temp_v1);
        FUN_002bed3c();
        temp_v10 = asdTMTexTableEntryAt(0x24,0x115);
        uiDrawDemonIcon((int)*psVar13,
                     (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,0x6f,1);
        FUN_002580d4(*psVar13,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,0x74);
        temp_v10 = asdTMTexTableEntryAt(0x24,0x123);
        temp_v13 = temp_v13 + 0x1390;
        FUN_0029e6f0();
        piVar19 = (int *)gameGetSlotTable();
        if (*piVar19 < temp_v13) {
          temp_v15 = 0xdc0f14ff;
        }
        else {
          temp_v15 = 0xff;
        }
        drawSetColorFromRGBA8(temp_v15);
        FUN_002bdf94(0,*(short *)(temp_v10 + 8) + temp_v8,*(short *)(temp_v10 + 10) + temp_v6,1,8,0x79,
                     "%d",temp_v13);
        FUN_002bed3c();
        temp_v4 = temp_v4 + 1;
        temp_v8 = FUN_0029d644((const void *)(temp_v18));
      } while (temp_v4 < temp_v8);
    }
    temp_v4 = FUN_0029efc0(temp_v18);
    temp_v6 = FUN_0029efa8(temp_v18);
    temp_v8 = temp_v21;
    temp_v9 = temp_v20;
    if (temp_v22 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + (temp_v6 + temp_v4) * 2 + 0x6ce2);
      temp_v4 = FUN_0029efa8(temp_v18);
      temp_v4 = asdTMTexTableEntryAt(0x24,temp_v4 + 0x146);
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x12a,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79)
      ;
      FUN_002bf288(2,0x24,299,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
      FUN_002bf288(2,0x24,300,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x12d,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e)
      ;
      temp_v6 = FUN_0029efa8(temp_v18);
      temp_v6 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + temp_v6 * 2 + 0x438));
      temp_v13 = *(short *)(temp_v4 + 10) + temp_v8;
      temp_v10 = *(short *)(temp_v4 + 8) + temp_v9;
      if (!((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 6)) {
        FUN_002bf288(2,0x24,0x12f,temp_v10,temp_v13,0x7e);
      }
      else {
        FUN_002bf288(2,0x24,0x130,temp_v10,temp_v13,0x7e);
      }
      temp_v13 = asdTMTexTableEntryAt(0x24,0x12f);
      temp_v6 = g_titleScene;
      piVar19 = (int *)(g_titleScene + 0x130c);
      temp_v10 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = 3;
      if (*(char *)(temp_v6 + 0x1324) != '\0' || temp_v10 != 3) {
        (**(romwright_code **)(temp_v6 + 0x1328))();
        *(unsigned char *)(temp_v6 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v13 + 8) + temp_v9,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,
                   (int)**(short **)(temp_v13 + 0xc),(int)(*(short **)(temp_v13 + 0xc))[1],1);
      temp_v6 = vec2GetYInt(temp_v2 + 0xb0);
      temp_v0 = *(short *)(temp_v4 + 10);
      temp_v13 = vec2GetXInt(temp_v2 + 0xb0);
      FUN_002bf288(2,0x24,0x131,temp_v13 + temp_v9 + (int)*(short *)(temp_v4 + 8),
                   temp_v6 + temp_v8 + (int)temp_v0,0x83);
      temp_v6 = g_titleScene;
      piVar19 = (int *)(g_titleScene + 0x130c);
      temp_v13 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = 0;
      if (*(char *)(temp_v6 + 0x1324) != '\0' || temp_v13 != 0) {
        (**(romwright_code **)(temp_v6 + 0x1328))();
        *(unsigned char *)(temp_v6 + 0x1324) = 0;
      }
      temp_v9 = *(short *)(temp_v4 + 8) + temp_v9;
      temp_v8 = *(short *)(temp_v4 + 10) + temp_v8;
      temp_v6 = temp_v2 + (unsigned int)temp_v1 * 8;
      psVar13 = (short *)(*(unsigned int *)(temp_v6 + 0x1390) & 0x7fff);
      temp_v4 = temp_v6;
      devilGetRecord();
      temp_v13 = asdTMTexTableEntryAt(0x24,0x13b);
      FUN_002bf288(2,0x24,0x133,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x83);
      FUN_002bf288(2,0x24,0x135,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x88);
      temp_v10 = asdTMTexTableEntryAt(0x24,0x139);
      temp_v15 = 0xffffffff;
      if (*(char *)(temp_v3 + 0xe0) == '\x01') {
        temp_v15 = 0x72e027ff;
      }
      temp_v16 = FUN_002bd068(*psVar13);
      textFormatBuffer(temp_v19,"%s",temp_v16);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,temp_v15,temp_v19,(int)*(short *)(temp_v10 + 8));
      temp_v10 = asdTMTexTableEntryAt(0x24,0x13a);
      temp_v15 = demonGetRaceLabel(*psVar13,0);
      textFormatBuffer(temp_v19,"%s",temp_v15);
      puVar16 = temp_v19;
      fontMeasureLineAdvance(puVar16,2);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v9 + ((int)**(short **)(temp_v10 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xf49800ff,temp_v19,(int)*(short *)(temp_v13 + 8));
      temp_v10 = asdTMTexTableEntryAt(0x24,0x138);
      if (*(unsigned int *)(temp_v6 + 0x1390) >> 0x1e == 3) {
        gameRecordCopy(*psVar13,temp_v17);
        temp_v1 = temp_v17[0];
      }
      else {
        temp_v11 = partyMemberFindById(*psVar13);
        temp_v1 = (unsigned short)*(unsigned char *)(temp_v11 + 0x48);
      }
      FUN_002bdf94(0,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,1,2,0x8d,
                   "%d",temp_v1);
      temp_v11 = asdTMTexTableEntryAt(0x24,0x136);
      uiDrawDemonIcon((int)*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                   (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x8d,1);
      temp_v10 = g_titleScene;
      if (*(char *)(temp_v3 + 0xe0) == '\x01') {
        temp_v12 = packNibblesAndByte(6,1,0);
        piVar19 = (int *)(temp_v10 + 0x12ac);
        temp_v14 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v12;
        if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v14 != temp_v12) {
          (**(romwright_code **)(temp_v10 + 0x12c8))();
          *(unsigned char *)(temp_v10 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x24,0x58,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x97);
        efctSetSpeed();
        FUN_002bf288(2,0x24,0x59,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x97);
        efctSetSpeed();
        temp_v10 = g_titleScene;
        temp_v12 = packNibblesAndByte(6,7,0);
        piVar19 = (int *)(temp_v10 + 0x12ac);
        temp_v14 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v12;
        if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v14 != temp_v12) {
          (**(romwright_code **)(temp_v10 + 0x12c8))();
          *(unsigned char *)(temp_v10 + 0x12c4) = 0;
        }
      }
      FUN_002580d4(*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,0x9c);
      psVar13 = (short *)((*(unsigned int *)(temp_v6 + 0x1390) & 0x3fffffff) >> 0xf);
      devilGetRecord();
      temp_v13 = asdTMTexTableEntryAt(0x24,0x13c);
      FUN_002bf288(2,0x24,0x134,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x6a);
      FUN_002bf288(2,0x24,0x135,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x6f);
      temp_v10 = asdTMTexTableEntryAt(0x24,0x139);
      temp_v15 = 0xffffffff;
      if (*(char *)(temp_v3 + 0xe0) == '\x02') {
        temp_v15 = 0x72e027ff;
      }
      temp_v16 = FUN_002bd068(*psVar13);
      textFormatBuffer(temp_v19,"%s",temp_v16);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,temp_v15,temp_v19,(int)*(short *)(temp_v10 + 8));
      temp_v10 = asdTMTexTableEntryAt(0x24,0x13a);
      temp_v15 = demonGetRaceLabel(*psVar13,0);
      textFormatBuffer(temp_v19,"%s",temp_v15);
      puVar16 = temp_v19;
      fontMeasureLineAdvance(puVar16,2);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v9 + ((int)**(short **)(temp_v10 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xf49800ff,temp_v19,(int)*(short *)(temp_v13 + 8));
      temp_v10 = asdTMTexTableEntryAt(0x24,0x138);
      if ((*(unsigned int *)(temp_v6 + 0x1394) & 3) == 3) {
        gameRecordCopy(*psVar13,temp_v17);
      }
      else {
        temp_v6 = partyMemberFindById(*psVar13);
        temp_v17[0] = (unsigned short)*(unsigned char *)(temp_v6 + 0x48);
      }
      FUN_002bdf94(0,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,1,2,0x8d,
                   "%d",temp_v17[0]);
      temp_v10 = asdTMTexTableEntryAt(0x24,0x136);
      uiDrawDemonIcon((int)*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,0x8d,1);
      temp_v6 = g_titleScene;
      if (*(char *)(temp_v3 + 0xe0) == '\x02') {
        temp_v3 = packNibblesAndByte(6,1,0);
        piVar19 = (int *)(temp_v6 + 0x12ac);
        temp_v11 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v3;
        if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v11 != temp_v3) {
          (**(romwright_code **)(temp_v6 + 0x12c8))();
          *(unsigned char *)(temp_v6 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x24,0x58,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,0x97);
        efctSetSpeed();
        FUN_002bf288(2,0x24,0x59,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,0x97);
        efctSetSpeed();
        temp_v3 = g_titleScene;
        temp_v6 = packNibblesAndByte(6,7,0);
        piVar19 = (int *)(temp_v3 + 0x12ac);
        temp_v11 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v6;
        if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v11 != temp_v6) {
          (**(romwright_code **)(temp_v3 + 0x12c8))(temp_v6);
          *(unsigned char *)(temp_v3 + 0x12c4) = 0;
        }
      }
      FUN_002580d4(*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,0x9c);
      temp_v4 = temp_v4 + 0x1390;
      FUN_0029e6f0();
      piVar19 = (int *)gameGetSlotTable();
      if (*piVar19 < temp_v4) {
        temp_v15 = 0xdc0f14ff;
      }
      else {
        temp_v15 = 0xffffffff;
      }
      drawSetColorFromRGBA8(temp_v15);
      temp_v3 = asdTMTexTableEntryAt(0x24,0x144);
      FUN_002bdf94(0,*(short *)(temp_v3 + 8) + temp_v9,*(short *)(temp_v3 + 10) + temp_v8,1,8,0x8d,
                   "%d",temp_v4);
      FUN_002bed3c();
    }
    FUN_00290994(temp_v18,temp_v20,temp_v20,0x24,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
                 (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x472),
                 (int)*(short *)(temp_v2 + 0x474),0x97,0);
  }
  return;
}

} /* extern "C" */
