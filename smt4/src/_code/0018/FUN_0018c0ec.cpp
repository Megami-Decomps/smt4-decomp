/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018c0ec` (_code @ 0x18c0ec, 0x3164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "status/StatusCamera.h"

extern "C" {

int statusReplaceSkillList(...);
int FUN_001cea8c(...);
int FUN_00295214(...);
int devilCreateRaceEffect(...);
int gameSavedFlagSet(...);
int messageMainFinishWindow(void);
int FUN_0029bed8(...);
int FUN_002b827c(...);
int FUN_002f6660(...);
int FUN_002f6728(void);
int FUN_0030aacc(void);
int FUN_0030ab34(...);
int FUN_00317e34(void);
int FUN_0033be90(...);
int skillChooseRandomFlaggedSlot(void);

int FUN_00216e64(...);
int FUN_0029541c(...);
int FUN_002954bc(...);
int btlTalkBustUpSetUnk2F4(...);
int FUN_002954f4(...);
int FUN_0029bd4c(void);
int FUN_0029bde4(...);
int unitRecalculateEffectiveStats(...);
int flagCountUnlockedSlots(...);
int beginStatusPanelClose(void);
int FUN_0029ee6c(...);
int buttonHelpSetPreset(...);
int FUN_002d9680(void);
int statusDownSetEntries(...);
int statusDownEnterState4(void);
int statusDownEnterRefreshState(void);

int scrRunOpcodesStub(...);
int FUN_00204358(...);
int textEncodeFontSlot(...);
int btlTalkBustUpCreate(void);
int FUN_002958f8(...);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int FUN_0029a0cc(void);
int FUN_0029a0e8(...);
int gameGlobalsSetSelected(...);
int FUN_0029c424(...);
int FUN_0029c4c8(...);
int FUN_0029c4e4(...);
int FUN_0029cc44(...);
int statusPanelSetOpen(...);
int FUN_0029d8f4(...);
int FUN_0029e788(void);
int FUN_0029e874(...);
int FUN_0029ede8(...);
int FUN_0029f848(...);
int devilGetRecord(void);
int eventQueueAddUniqueIfValid(...);
int FUN_002bd06c(...);
int textFormatBuffer(...);
int libc_strcpy(...);

int FUN_00295a18(...);
int infoWinStartTimer(...);
int gameMoneyAdd(...);
int FUN_00295cec(...);
int soundSlotStopById(...);
int FUN_00295d7c(...);
int FUN_00295eb0(...);
int FUN_002b7bca(...);
int eventQueueAddUnique(...);
int timerStart(...);
int spriteStartAnimationByIndex(...);
int FUN_002bf810(...);
int FUN_002c1658(...);
int rt_memclr(...);
int memClear(...);
int FUN_0033b7a0(...);
int FUN_0033b838(...);
int unitApplyLevelGrowth(...);
unsigned int devilCollectLevelGainSkills(void*, int levelGain, unsigned short* output);
int demonApplyLevelGrowth(...);
int __aeabi_memcpy4(...);

int mapDepartAdvanceState(void);
int FUN_00295f54(...);
int FUN_002960ec(...);
int FUN_00296284(int, int);
int FUN_002963ec(...);
int FUN_00296474(...);
int resultSetMenuState(...);
int FUN_00296934(void);
int FUN_0029c43c(...);
int messageTargetSetValue(unsigned int, int);
int messageBannerInitSelection(int, int);
int soundChannelRequestIfEnabled(int, int);
int gameGetUnitRecord(...);
int gameGetSlotTable(...);
int FUN_002aa278(...);
int uiSpriteSetImageKeyframe(...);
int pairSetHalves(int, int, int);
int gameGetPlayerData(void);
int pairSetFirstResetSecond(...);
int FUN_002b8ee0(...);
int FUN_002bf4f8(...);
int FUN_002bf818(...);
int mapMainCallIfActive2(void);
int lmapMainCallIfActive2(void);

/* stack frame of void: 16 slot(s), 62 byte(s) */
typedef struct {
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
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned short sp90; /* 0x90: local_90 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} void_stack;

extern unsigned char LAB_0018dd60; /* 0x18dd60 */
extern int partyCompareSlotOrder(...); /* 0x21768c */
extern int g_result; /* 0x44dc20 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: statusReplaceSkillList. */
/* Supplied declaration required: FUN_001cea8c. */
/* Supplied declaration required: mapDepartAdvanceState. */
extern int FUN_00203610(void);
/* Supplied declaration required: FUN_00204358. */
/* Supplied declaration required: FUN_00216e64. */
/* Supplied declaration required: FUN_00295214. */
/* Supplied declaration required: devilCreateRaceEffect. */
extern int asdSoundSlotBIsPlaying(unsigned int);
/* Supplied declaration required: gameSavedFlagSet. */
extern int FUN_00295408(void);
/* Supplied declaration required: FUN_0029541c. */
/* Supplied declaration required: FUN_002954bc. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_002954f4. */
extern int btlTalkBustUpGetValue(void);
extern int FUN_00295618(void);
extern int FUN_0029563c(void);
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: btlTalkBustUpCreate. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: infoWinStartTimer. */
extern int dialogIsActive(void);
/* Supplied declaration required: gameMoneyAdd. */
extern int FUN_00295c60(unsigned short, unsigned char);
/* Supplied declaration required: FUN_00295cec. */
extern int playerPadTestBit(unsigned int);
/* Supplied declaration required: soundSlotStopById. */
/* Supplied declaration required: FUN_00295d7c. */
extern unsigned int devilCalculateRankCost(unsigned short, int, int);
/* Supplied declaration required: FUN_00295eb0. */
extern int dataTable9EntryOrZero(int);
/* Supplied declaration required: FUN_00295f54. */
/* Supplied declaration required: FUN_002960ec. */
/* Supplied declaration required: FUN_00296284. */
/* Supplied declaration required: FUN_002963ec. */
/* Supplied declaration required: FUN_00296474. */
/* Supplied declaration required: resultSetMenuState. */
/* Supplied declaration required: FUN_00296934. */
extern int modelPairTryBind(int);
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int messageMainGetChoiceResult(void);
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_0029a0e8. */
/* Supplied declaration required: gameGlobalsSetSelected. */
/* Supplied declaration required: FUN_0029bd4c. */
/* Supplied declaration required: FUN_0029bde4. */
/* Supplied declaration required: FUN_0029bed8. */
/* Supplied declaration required: FUN_0029c424. */
/* Supplied declaration required: FUN_0029c43c. */
extern int FUN_0029c48c(void);
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029c4e4. */
/* Supplied declaration required: unitRecalculateEffectiveStats. */
/* Supplied declaration required: flagCountUnlockedSlots. */
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: statusPanelSetOpen. */
/* Supplied declaration required: FUN_0029d8f4. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: messageTargetSetValue. */
/* Supplied declaration required: messageBannerInitSelection. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
extern int flagWordTestBit(int, unsigned int);
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a0cc8. */
extern int sys43e188GetState(void);
/* Supplied declaration required: gameGetUnitRecord. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: FUN_002aa278. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: pairSetHalves. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bf818. */
extern unsigned int dataTableGetCount(unsigned int);
extern char *dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: memClear. */
extern unsigned int asdLoadFileSyncDefault(int *);
/* Supplied declaration required: FUN_002d9680. */
extern int statusDownGetLastEntryIndex(void);
extern int FUN_002efe58(void);
extern int statusDownValueGet(void);
/* Supplied declaration required: statusDownSetEntries. */
/* Supplied declaration required: statusDownEnterState4. */
extern int FUN_002f6564(void);
extern int FUN_002f6614(void);
/* Supplied declaration required: FUN_002f6660. */
/* Supplied declaration required: FUN_002f6728. */
/* Supplied declaration required: mapMainCallIfActive2. */
/* Supplied declaration required: FUN_0030aacc. */
extern int FUN_0030aaf4(void);
extern int FUN_0030ab14(void);
/* Supplied declaration required: FUN_0030ab34. */
/* Supplied declaration required: statusDownEnterRefreshState. */
/* Supplied declaration required: lmapMainCallIfActive2. */
/* Supplied declaration required: FUN_00317e34. */
extern int statusDownGetCursorIndex(void);
/* Supplied declaration required: FUN_0033b7a0. */
/* Supplied declaration required: FUN_0033b838. */
extern unsigned int devilRollDropItem(int);
extern unsigned int partyClassifyDemonLevelRequirement(int);
/* Supplied declaration required: FUN_0033be90. */
/* Supplied declaration required: skillChooseRandomFlaggedSlot. */
/* Supplied declaration required: unitApplyLevelGrowth. */
extern int devilLevelUpsAffordable(unsigned short, unsigned char, int);
extern int FUN_003c1de8(unsigned char, int);
/* Supplied declaration required: demonApplyLevelGrowth. */
extern int __aeabi_idivmod(unsigned int, unsigned int);
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int FUN_0018c0ec(void)

{
/* irregular: 45 unstructured edge(s); 4 goto(s); 107 native warning(s); review required */
  char temp_v0;
  long long temp_v1;
  int temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  short *psVar9;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char *temp_v10;
  unsigned char *puVar12;
  unsigned char *temp_v11;
  unsigned char *temp_v12;
  unsigned char *temp_v13;
  unsigned int *puVar13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int *piVar17;
  char *pcVar18;
  int temp_v17;
  int *piVar20;
  int temp_v18;
  short temp_v19;
  short *psVar23;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22;
  long long temp_v23;
  unsigned long long temp_v24;
  long long temp_v25;
  short temp_v26 [2];
  int temp_v27;
  unsigned int temp_v28;
  unsigned char *temp_v29;
  int temp_v30;
  int temp_v31;
  char *temp_v32;
  char *temp_v33;
  char *temp_v34;
  int temp_v35;
  unsigned char *temp_v36;
  int *temp_v37;
  unsigned char *temp_v38;
  unsigned int temp_v39;
  
  temp_v2 = g_result;
  if (g_result == 0) {
    return 0;
  }
  temp_v4 = modelPairTryBind(g_result);
  if (temp_v4 == 0) {
    return 0;
  }
  FUN_002bf818(temp_v2 + 0x3f4);
  FUN_002bf818(temp_v2 + 0x480);
  switch(*(unsigned int *)(temp_v2 + 0x352c)) {
  case 0:
    temp_v4 = FUN_00203610();
    if (temp_v4 != 0) {
      mapMainCallIfActive2();
      lmapMainCallIfActive2();
      FUN_00296934();
      resultSetMenuState(temp_v2,1);
    }
    break;
  case 1:
    temp_v4 = gameGetPlayerData();
    temp_v16 = *(unsigned int *)(temp_v4 + 0x30);
    *(unsigned int *)(temp_v2 + 0xd3a0) = temp_v16 << 0xc;
    temp_v4 = 0;
    *(unsigned int *)(temp_v2 + 0xd3a4) = temp_v16 >> 0x14;
    do {
      temp_v8 = gameGetSlotTable();
      temp_v8 = (int)*(char *)(temp_v8 + temp_v4 + 0x90f0);
      if (-1 < temp_v8) {
        temp_v18 = gameGetUnitRecord(temp_v8);
        if (temp_v18 != 0) {
          temp_v16 = *(unsigned int *)(temp_v18 + 0x30);
          temp_v8 = temp_v2 + temp_v8 * 8;
          *(unsigned int *)(temp_v8 + 0xd3a8) = temp_v16 << 0xc;
          *(unsigned int *)(temp_v8 + 0xd3ac) = temp_v16 >> 0x14;
        }
        else {
          temp_v8 = temp_v2 + temp_v8 * 8;
          *(unsigned int *)(temp_v8 + 0xd3a8) = 0;
          *(unsigned int *)(temp_v8 + 0xd3ac) = 0;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    temp_v4 = gameGetPlayerData();
    temp_v8 = 0;
    *(unsigned char *)(temp_v2 + 0xd530) = *(unsigned char *)(temp_v4 + 0x76);
    do {
      temp_v4 = gameGetSlotTable();
      temp_v4 = (int)*(char *)(temp_v4 + temp_v8 + 0x90f0);
      if ((-1 < temp_v4) && (temp_v18 = gameGetUnitRecord(temp_v4), temp_v18 != 0)) {
        *(unsigned char *)(temp_v2 + temp_v4 + 0xd531) = *(unsigned char *)(temp_v18 + 0x48);
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x18);
    FUN_00296474(temp_v2);
    resultSetMenuState(temp_v2,2);
    messageBannerInitSelection(1,0);
    messageTargetSetValue(*(unsigned int *)(temp_v2 + 0x3650),1);
    temp_v8 = 0;
    temp_v4 = 0;
LAB_0018c354:
    do {
      temp_v20 = 1000000;
      puVar13 = (unsigned int *)(temp_v2 + temp_v4 * 4 + 0x35b4);
      temp_v19 = 0;
      temp_v21 = *puVar13;
      temp_v4 = 0;
      temp_v16 = 1;
      do {
        temp_v4 = temp_v4 + (unsigned int)(temp_v16 <= temp_v21);
        temp_v16 = temp_v16 * 10;
      } while ((int)temp_v16 < 1000000);
      temp_v18 = FUN_002bf4f8(0x28,0x2e);
      temp_v17 = 0;
      temp_v32 = (char *)((int)*(short *)(temp_v18 + 8) + (temp_v4 * -0xc + 0x54) / 2);
      temp_v28 = temp_v8 * 7;
      do {
        if (temp_v20 <= *puVar13) {
          temp_v4 = temp_v28 - temp_v17;
          temp_v27 = __aeabi_idivmod(temp_v21,temp_v20);
          temp_v18 = temp_v2 + (temp_v4 + 0x24) * 0x8c;
          pairSetFirstResetSecond(temp_v18 + 0x20,temp_v27 + 0x80c);
          temp_v21 = temp_v21 - temp_v27 * temp_v20;
          temp_v4 = FUN_002bf4f8(0x28,temp_v8 + 0x30);
          pairSetHalves(temp_v18 + 0x20,(int)*(short *)(temp_v4 + 8),(int)*(short *)(temp_v4 + 10));
          temp_v4 = FUN_002bf4f8(0x28,0x2e);
          FUN_002963ec(temp_v18 + 0x20,
                       (int)(short)((short)(int)temp_v32 + temp_v19 * 0xc + **(short **)(temp_v4 + 0xc) / 2),
                       (int)(short)(*(short *)(temp_v4 + 10) + (*(short **)(temp_v4 + 0xc))[1] / 2));
          temp_v19 = temp_v19 + 1;
        }
        temp_v17 = temp_v17 + 1;
        temp_v20 = temp_v20 / 10;
      } while (temp_v20 != 0);
      do {
        temp_v8 = temp_v8 + 1;
        if (temp_v8 >= 4) {
          temp_v0 = *(char *)(temp_v2 + 0x3560);
          if ((temp_v0 == '\0') || ((temp_v0 != '\x01' && (temp_v0 == '\x02')))) {
            soundChannelRequestIfEnabled(0x100003c,0);
          }
          *(int *)(temp_v2 + 0x3544) = *(int *)(temp_v2 + 0x3544) + 1;
          return 0;
        }
        temp_v4 = 0;
        if (temp_v8 < 1) goto LAB_0018c354;
        temp_v4 = gameGetSlotTable();
      } while (*(char *)(temp_v4 + temp_v8 + 0x9107) < '\0');
      temp_v4 = gameGetSlotTable();
      temp_v4 = *(char *)(temp_v4 + temp_v8 + 0x9107) + 1;
    } while( 1 );
  case 2:
    FUN_00296284(temp_v2 + 0x20,0);
    temp_v4 = 0;
    do {
      if (temp_v4 < *(int *)(temp_v2 + 0x3544)) {
        FUN_002b8ee0(temp_v2 + temp_v4 * 0x8c + 0xac,0);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
    if (((((*(char *)(temp_v2 + 0xaa) != '\0') && (*(char *)(temp_v2 + 0x136) != '\0')) &&
         (*(char *)(temp_v2 + 0x1c2) != '\0')) &&
        ((*(char *)(temp_v2 + 0x24e) != '\0' && (*(char *)(temp_v2 + 0x2da) != '\0')))) &&
       ((*(char *)(temp_v2 + 0x366) != '\0' && (*(char *)(temp_v2 + 0x3f2) != '\0')))) {
      resultSetMenuState(temp_v2,3);
    }
    break;
  case 3:
    FUN_002960ec(temp_v2);
    FUN_00295f54(temp_v2);
    temp_v4 = 0;
    do {
      temp_v8 = 0;
      do {
        FUN_002bf818(temp_v2 + (temp_v4 * 7 + temp_v8 + 0x1e) * 0x8c + 0x20);
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 7);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if ((*(char *)(temp_v2 + 0x1112) != '\0') && (*(int *)(temp_v2 + 0x3544) >= 0x18)) {
      temp_v4 = 0;
      do {
        temp_v8 = 0;
        do {
          uiSpriteSetImageKeyframe(temp_v2 + (temp_v4 * 7 + temp_v8 + 0x1e) * 0x8c + 0x20,2,0);
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 7);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      FUN_0029c43c(*(unsigned int *)(temp_v2 + 0x3650),1);
      resultSetMenuState(temp_v2,4);
    }
    break;
  case 4:
    FUN_002960ec(temp_v2);
    FUN_00295f54(temp_v2);
    temp_v4 = 0;
    do {
      temp_v8 = 0;
      do {
        FUN_002bf818(temp_v2 + (temp_v4 * 7 + temp_v8 + 0x1e) * 0x8c + 0x20);
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 7);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if (*(char *)(temp_v2 + 0x1112) != '\0') {
      resultSetMenuState(temp_v2,5);
      *(unsigned int *)(temp_v2 + 0xd558) = 0;
      *(unsigned char *)(temp_v2 + 0xd55c) = 0;
      *(unsigned char *)(temp_v2 + 0xd55d) = 0;
      if (*(char *)(temp_v2 + 0x3560) == '\0') {
        mapDepartAdvanceState();
      }
    }
    break;
  case 5:
    temp_v28 = FUN_002960ec(temp_v2);
    FUN_00295f54(temp_v2);
    temp_v4 = gameGetPlayerData();
    temp_v32 = (char *)(temp_v2 + 0xd517);
    *temp_v32 = '\0';
    if (*(char *)(temp_v2 + 0xd4fe) != '\0') {
      *(short *)(temp_v2 + 0xd4cc) = *(short *)(temp_v2 + 0xd4cc) + 1;
      FUN_002bf818(temp_v2 + 0x1fd8);
      puVar12 = temp_v10;
      if (*(short *)(temp_v2 + 0xd4cc) >= 0x1f) {
        *(unsigned char *)(temp_v2 + 0xd4fe) = 0;
        *(unsigned int *)(temp_v2 + 0xd3a0) = 0;
        *(unsigned int *)(temp_v2 + 0xd3a4) = 0;
        puVar12 = (unsigned char *)0xd554;
        *(unsigned short *)(temp_v2 + 0xd4cc) = 0;
        *(unsigned char *)(temp_v2 + 0xd554) = 0;
      }
    }
    else {
      temp_v21 = *(unsigned int *)(temp_v2 + 0x35b4);
      temp_v16 = *(unsigned int *)(temp_v2 + 0xd2d8);
      temp_v20 = *(unsigned int *)(temp_v2 + 0xd2dc);
      temp_v1 = *(long long *)(temp_v2 + 0xd2d8);
      if (temp_v21 >> 0x14 < temp_v20 || temp_v20 - (temp_v21 >> 0x14) < (unsigned int)(temp_v21 << 0xc <= temp_v16)) {
        puVar12 = (unsigned char *)0x1;
        *temp_v32 = '\x01';
      }
      else {
        temp_v23 = FUN_002aa278(temp_v21 << 0xc,temp_v21 >> 0x14,0x3c,0);
        temp_v1 = temp_v23 + temp_v1;
        temp_v14 = (unsigned int)((unsigned long long)temp_v1 >> 0x20);
        if (temp_v21 >> 0x14 < temp_v14 ||
            temp_v14 - (temp_v21 >> 0x14) < (unsigned int)(temp_v21 << 0xc <= (unsigned int)temp_v1)) {
          temp_v23 = romwright_piece_4_4((temp_v21 >> 0x14) - (temp_v20 + (temp_v21 * 0x1000 < temp_v16)),
                            temp_v21 * 0x1000 - temp_v16);
        }
        *(long long *)(temp_v2 + 0xd3a0) = temp_v23 + *(long long *)(temp_v2 + 0xd3a0);
        *(long long *)(temp_v2 + 0xd2d8) = temp_v23 + *(long long *)(temp_v2 + 0xd2d8);
        temp_v8 = dataTable9EntryOrZero((unsigned int)*(unsigned char *)(temp_v4 + 0x76) + (int)*(short *)(temp_v2 + 0xd49a));
        temp_v16 = temp_v8 * 0x1000;
        if ((int)((unsigned int)*(unsigned char *)(temp_v4 + 0x76) + (int)*(short *)(temp_v2 + 0xd49a)) >= 99) {
          puVar12 = (unsigned char *)0xd4fe;
          *(unsigned char *)(temp_v2 + 0xd4fe) = 0;
          *(unsigned int *)(temp_v2 + 0xd3a0) = 0;
          *(unsigned int *)(temp_v2 + 0xd3a4) = 0;
          *(unsigned short *)(temp_v2 + 0xd4cc) = 0;
          *temp_v32 = '\x01';
        }
        else {
          temp_v20 = *(unsigned int *)(temp_v2 + 0xd3a4);
          temp_v22 = temp_v16 <= *(unsigned int *)(temp_v2 + 0xd3a0);
          puVar12 = (unsigned char *)(temp_v20 - !temp_v22);
          if (temp_v20 != 0 || temp_v20 < temp_v22) {
            *(unsigned short *)(temp_v4 + 0x72) = 0;
            temp_v20 = *(unsigned int *)(temp_v2 + 0xd3a0);
            temp_v4 = *(int *)(temp_v2 + 0xd3a4);
            temp_v14 = *(unsigned int *)(temp_v2 + 0xd2d8);
            temp_v21 = temp_v20 + temp_v8 * -0x1000;
            *(unsigned int *)(temp_v2 + 0xd3a0) = temp_v16;
            *(unsigned int *)(temp_v2 + 0xd3a4) = 0;
            *(unsigned int *)(temp_v2 + 0xd2d8) = temp_v14 - temp_v21;
            *(unsigned int *)(temp_v2 + 0xd2dc) =
                 *(int *)(temp_v2 + 0xd2dc) -
                 ((temp_v4 - (unsigned int)(temp_v20 < temp_v16)) + (unsigned int)(temp_v14 < temp_v21));
            *(short *)(temp_v2 + 0xd49a) = *(short *)(temp_v2 + 0xd49a) + 1;
            *(unsigned char *)(temp_v2 + 0xd4fe) = 1;
            if (*(short *)(temp_v2 + 0xcf96) < 0) {
              *(short *)(temp_v2 + 0xcf96) = *(short *)(temp_v2 + 0xcfca);
              *(short *)(temp_v2 + 0xcfca) = *(short *)(temp_v2 + 0xcfca) + 1;
            }
            if (*(char *)(temp_v2 + 0xd554) == '\0') {
              eventQueueAddUnique(0x100017e);
              *(unsigned char *)(temp_v2 + 0xd55c) = 1;
            }
            *(unsigned char *)(temp_v2 + 0xd554) = 1;
            temp_v4 = temp_v2 + 0x1fd8;
            spriteStartAnimationByIndex(temp_v4,2);
            pairSetFirstResetSecond(temp_v4,0x1a);
            FUN_00295eb0(temp_v4,0x28,0x2f);
            temp_v8 = FUN_002bf4f8(0x28,0x30);
            FUN_002963ec(temp_v4,(int)*(short *)(temp_v8 + 8),(int)*(short *)(temp_v8 + 10));
            puVar12 = temp_v11;
          }
        }
      }
    }
    temp_v34 = (char *)(temp_v2 + 0xcf00);
    temp_v35 = temp_v2 + 0xd500;
    temp_v36 = (unsigned char *)(temp_v2 + 0xd55c);
    temp_v33 = (char *)(temp_v2 + 0xd554);
    temp_v4 = 0;
    do {
      temp_v8 = *(int *)(temp_v2 + temp_v4 * 4 + 0x35b4);
      if (temp_v8 == 0) {
        puVar12 = (unsigned char *)(temp_v2 + temp_v4 + 0xd517);
        temp_v8 = 1;
        *puVar12 = 1;
      }
      temp_v8 = gameGetSlotTable(temp_v8,puVar12);
      temp_v0 = *(char *)(temp_v8 + temp_v4 + 0x90f0);
      temp_v8 = (int)temp_v0;
      if (temp_v8 < 0) {
        puVar12 = (unsigned char *)(temp_v2 + temp_v4 + 0xd518);
        *puVar12 = 1;
      }
      else {
        temp_v17 = temp_v2 + temp_v8;
        temp_v38 = (unsigned char *)(temp_v17 + 0xd518);
        *temp_v38 = 0;
        temp_v24 = gameGetUnitRecord(temp_v8);
        puVar12 = (unsigned char *)((unsigned long long)temp_v24 >> 0x20);
        temp_v18 = (int)temp_v24;
        if (temp_v18 != 0) {
          if (*(char *)(temp_v17 + 0xd4ff) != '\0') {
            temp_v5 = temp_v2 + temp_v8 * 2;
            temp_v16 = devilCalculateRankCost(*(unsigned short *)(temp_v18 + 0x46),
                                  (int)*(short *)(temp_v5 + 0xd49c) + (unsigned int)*(unsigned char *)(temp_v18 + 0x48),
                                  (int)*(char *)(temp_v17 + 0xd531));
            temp_v18 = temp_v2 + temp_v8 * 8;
            *(unsigned int *)(temp_v18 + 0xd3a8) = temp_v16 << 0xc;
            *(unsigned int *)(temp_v18 + 0xd3ac) = temp_v16 >> 0x14;
            *(short *)(temp_v5 + 0xd4ce) = *(short *)(temp_v5 + 0xd4ce) + 1;
            FUN_002bf818(temp_v2 + temp_v8 * 0x8c + 0x2064);
            puVar12 = temp_v12;
            if (*(short *)(temp_v5 + 0xd4ce) >= 0x1f) {
              puVar12 = (unsigned char *)0x0;
              *(unsigned char *)(temp_v17 + 0xd4ff) = 0;
              *(unsigned int *)(temp_v18 + 0xd3a8) = 0;
              *(unsigned int *)(temp_v18 + 0xd3ac) = 0;
              *(unsigned short *)(temp_v5 + 0xd4ce) = 0;
              *temp_v33 = 0;
            }
          }
          else {
            temp_v5 = temp_v2 + temp_v8 * 8;
            temp_v39 = *(unsigned int *)(temp_v2 + temp_v8 * 4 + 0x35b8);
            temp_v7 = temp_v5 + 0xd000;
            puVar13 = (unsigned int *)(temp_v5 + 0xd2e0);
            temp_v20 = *puVar13;
            temp_v16 = *(unsigned int *)(temp_v5 + 0xd2e4);
            temp_v23 = *(long long *)puVar13;
            temp_v1 = *(long long *)puVar13;
            puVar12 = temp_v38;
            if (temp_v39 >> 0x14 < temp_v16 ||
                temp_v16 - (temp_v39 >> 0x14) < (unsigned int)(temp_v39 << 0xc <= temp_v20)) {
              *puVar12 = 1;
            }
            else {
              temp_v25 = FUN_002aa278(temp_v39 << 0xc,temp_v39 >> 0x14,0x3c,0);
              temp_v21 = (unsigned int)((unsigned long long)(temp_v25 + temp_v1) >> 0x20);
              if (temp_v39 >> 0x14 < temp_v21 ||
                  temp_v21 - (temp_v39 >> 0x14) < (unsigned int)(temp_v39 << 0xc <= (unsigned int)(temp_v25 + temp_v1))) {
                temp_v25 = romwright_piece_4_4((temp_v39 >> 0x14) - (temp_v16 + (temp_v39 * 0x1000 < temp_v20)),
                                  temp_v39 * 0x1000 - temp_v20);
              }
              *(long long *)(temp_v7 + 0x3a8) = temp_v25 + *(long long *)(temp_v7 + 0x3a8);
              *(long long *)(temp_v7 + 0x2e0) = temp_v25 + temp_v23;
              temp_v5 = temp_v2 + temp_v8 * 2;
              temp_v31 = temp_v5 + 0xd400;
              temp_v6 = (unsigned int)*(unsigned char *)(temp_v18 + 0x48) + (int)*(short *)(temp_v5 + 0xd49c);
              if (temp_v6 >= 99) {
                puVar12 = (unsigned char *)0x0;
                *(unsigned char *)(temp_v17 + 0xd4ff) = 0;
                *(unsigned int *)(temp_v7 + 0x3a8) = 0;
                *(unsigned int *)(temp_v7 + 0x3ac) = 0;
                *(unsigned short *)(temp_v5 + 0xd4ce) = 0;
                *temp_v38 = 1;
              }
              else {
                temp_v21 = devilCalculateRankCost(*(unsigned short *)(temp_v18 + 0x46),temp_v6,
                                      (int)*(char *)(temp_v17 + 0xd531));
                temp_v14 = *(unsigned int *)(temp_v7 + 0x3ac);
                temp_v16 = temp_v21 * 0x1000;
                temp_v20 = temp_v21 >> 0x14;
                temp_v22 = temp_v16 <= *(unsigned int *)(temp_v7 + 0x3a8);
                puVar12 = (unsigned char *)(temp_v14 - (temp_v20 + !temp_v22));
                if (temp_v20 < temp_v14 || temp_v14 - temp_v20 < (unsigned int)temp_v22) {
                  *(unsigned short *)(temp_v18 + 0x44) = 0;
                  temp_v21 = *(unsigned int *)(temp_v7 + 0x3a8) + temp_v21 * -0x1000;
                  temp_v14 = *(unsigned int *)(temp_v7 + 0x2e0);
                  *(unsigned int *)(temp_v7 + 0x2e0) = temp_v14 - temp_v21;
                  *(unsigned int *)(temp_v7 + 0x2e4) =
                       *(int *)(temp_v7 + 0x2e4) -
                       ((*(int *)(temp_v7 + 0x3ac) - (temp_v20 + (*(unsigned int *)(temp_v7 + 0x3a8) < temp_v16))) +
                       (unsigned int)(temp_v14 < temp_v21));
                  *(unsigned int *)(temp_v7 + 0x3a8) = temp_v16;
                  *(unsigned int *)(temp_v7 + 0x3ac) = temp_v20;
                  *(short *)(temp_v31 + 0x9c) = *(short *)(temp_v31 + 0x9c) + 1;
                  *(unsigned char *)(temp_v17 + 0xd4ff) = 1;
                  temp_v17 = temp_v2 + (short)(temp_v0 + 1) * 2;
                  if (*(short *)(temp_v17 + 0xcf96) < 0) {
                    *(unsigned short *)(temp_v17 + 0xcf96) = *(unsigned short *)((int)temp_v34 + 0xca);
                    *(short *)((int)temp_v34 + 0xca) = *(short *)((int)temp_v34 + 0xca) + 1;
                  }
                  if (*(char *)(temp_v35 + 0x54) == '\0') {
                    eventQueueAddUnique(0x100017e);
                    *temp_v36 = 1;
                  }
                  *temp_v33 = 1;
                  temp_v17 = FUN_00295d7c(temp_v18);
                  if (temp_v17 == 0) {
                    temp_v18 = 0;
                  }
                  temp_v5 = 0;
                  if (temp_v17 != 0) {
                    do {
                      temp_v18 = gameGetSlotTable();
                      if (*(char *)(temp_v18 + temp_v5 + 0x9108) == temp_v8) break;
                      temp_v5 = temp_v5 + 1;
                    } while (temp_v5 < 3);
                    temp_v17 = temp_v2 + temp_v8 * 0x8c + 0x2064;
                    spriteStartAnimationByIndex(temp_v17,2);
                    pairSetFirstResetSecond(temp_v17,0x1a);
                    FUN_00295eb0(temp_v17,0x28,0x2f);
                    temp_v8 = FUN_002bf4f8(0x28,temp_v5 + 0x31);
                    temp_v19 = *(short *)(temp_v8 + 10);
                    temp_v3 = *(short *)(temp_v8 + 8);
                  }
                  else {
                    do {
                      temp_v17 = gameGetSlotTable();
                      if (-1 < *(char *)(temp_v17 + temp_v5 + 0x90f0)) {
                        temp_v17 = gameGetSlotTable();
                        gameGetUnitRecord((int)*(char *)(temp_v17 + temp_v5 + 0x90f0));
                        temp_v17 = FUN_00295d7c();
                        if (temp_v17 == 0) {
                          temp_v17 = gameGetSlotTable();
                          if (*(char *)(temp_v17 + temp_v5 + 0x90f0) == temp_v8) break;
                          temp_v18 = temp_v18 + 1;
                        }
                      }
                      temp_v5 = temp_v5 + 1;
                    } while (temp_v5 < 0x18);
                    temp_v17 = temp_v2 + temp_v8 * 0x8c + 0x2064;
                    spriteStartAnimationByIndex(temp_v17,3);
                    pairSetFirstResetSecond(temp_v17,0x62);
                    FUN_00295eb0(temp_v17,0x28,0x67);
                    temp_v8 = FUN_002bf4f8(0x28,temp_v18 + 0x68);
                    temp_v19 = *(short *)(temp_v8 + 10);
                    temp_v3 = *(short *)(temp_v8 + 8);
                  }
                  FUN_002963ec(temp_v17,(int)temp_v3,(int)temp_v19);
                  puVar12 = temp_v13;
                }
              }
            }
          }
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    FUN_00296474(temp_v2);
    temp_v16 = 1;
    temp_v4 = 0x19;
    pcVar18 = temp_v32;
    do {
      if (*pcVar18 == '\0') {
        temp_v16 = 0;
      }
      temp_v4 = temp_v4 - 1;
      pcVar18 = pcVar18 + 1;
    } while (temp_v4 != 0);
    temp_v31 = temp_v2 + 0xd500;
    if (*(char *)(temp_v2 + 0xd55d) == '\0') {
      temp_v9 = FUN_002bf810(0x100017d);
      *(unsigned int *)(temp_v2 + 0xd558) = temp_v9;
      *(unsigned char *)(temp_v2 + 0xd55d) = 1;
    }
    temp_v4 = 0;
    FUN_002c1658(0,1);
    if (temp_v4 == 0) {
      temp_v4 = 1;
      FUN_002c1658();
      if (temp_v4 == 0) {
        if (temp_v16 != 0) {
LAB_0018d058:
          soundSlotStopById(*(unsigned int *)(temp_v2 + 0xd558));
        }
        if ((temp_v28 & temp_v16) != 0) {
          temp_v4 = gameGetPlayerData();
          temp_v17 = *(int *)(temp_v4 + 0x30) + *(int *)(temp_v2 + 0x35b4);
          *(int *)(temp_v4 + 0x30) = temp_v17;
          temp_v8 = FUN_003c1de8(*(unsigned char *)(temp_v4 + 0x76),temp_v4 + 0x30);
          temp_v18 = playerPadTestBit(1);
          if (((temp_v18 != 0) || (temp_v18 = playerPadTestBit(2), temp_v18 != 0)) ||
             (temp_v18 = playerPadTestBit(10), temp_v18 != 0)) {
            temp_v8 = 0;
            *(int *)(temp_v4 + 0x30) = temp_v17;
          }
          temp_v29 = (unsigned char *)(temp_v2 + 0x3654);
          memClear(temp_v2 + 0x3658,0x8c);
          *(unsigned int *)(temp_v2 + 0x3c5c) = 0;
          *(unsigned int *)(temp_v2 + 0x3c60) = 0;
          *(unsigned int *)(temp_v2 + 0x3c64) = 0;
          *(unsigned int *)(temp_v2 + 0x3c68) = 0;
          *(unsigned char *)(temp_v2 + 0x3c70) = 0;
          *(unsigned char *)(temp_v2 + 0x3c71) = 0;
          *(unsigned char *)(temp_v2 + 0x3c72) = 0;
          *(unsigned int *)(temp_v2 + 0x3c6c) = 0;
          *(unsigned char *)(temp_v2 + 0x3654) = 0x7f;
          __aeabi_memcpy4(temp_v2 + 0x3658,temp_v4,0x8c);
          temp_v18 = FUN_00295cec();
          *(int *)(temp_v2 + 0xd54c) = temp_v18;
          *(int *)(temp_v2 + 0xd550) = temp_v18 << 0xc;
          if (temp_v8 != 0) {
            *temp_v29 = 0xff;
            unitApplyLevelGrowth(temp_v4,(int)(char)temp_v8,0);
            *(int *)(temp_v2 + 0xcfcc) = temp_v8 * 5;
            *(int *)(temp_v2 + 0xcfd0) = temp_v8 * 5;
            *(unsigned short *)(temp_v2 + 0x36ca) = 0;
          }
          if (*(unsigned char *)(temp_v4 + 0x76) >= 0x63) {
            *(unsigned int *)(temp_v4 + 0x30) = 0;
          }
          temp_v30 = gameGetSlotTable();
          temp_v35 = temp_v2 + 0xcf7c;
          temp_v33 = (char *)(temp_v2 + 0xd641);
          temp_v34 = (char *)(temp_v2 + 0xd642);
          temp_v4 = 0;
          do {
            temp_v18 = temp_v2 + temp_v4 * 0x620;
            memClear(temp_v18 + 0x3c78,0x8c);
            *(unsigned int *)(temp_v18 + 0x427c) = 0;
            *(unsigned int *)(temp_v18 + 0x4280) = 0;
            *(unsigned int *)(temp_v18 + 0x4284) = 0;
            *(unsigned int *)(temp_v18 + 0x4288) = 0;
            *(unsigned char *)(temp_v18 + 0x4290) = 0;
            *(unsigned char *)(temp_v18 + 0x4291) = 0;
            *(unsigned char *)(temp_v18 + 0x4292) = 0;
            *(unsigned int *)(temp_v18 + 0x428c) = 0;
            *(unsigned char *)(temp_v18 + 0x3c74) = 0x7f;
            temp_v8 = temp_v30 + temp_v4;
            if (-1 < *(char *)(temp_v8 + 0x90f0)) {
              temp_v17 = gameGetUnitRecord((int)*(char *)(temp_v8 + 0x90f0));
              temp_v37 = (int *)(temp_v2 + *(char *)(temp_v8 + 0x90f0) * 4 + 0x35b8);
              temp_v5 = *temp_v37 + *(int *)(temp_v17 + 0x30);
              *(int *)(temp_v17 + 0x30) = temp_v5;
              temp_v6 = devilLevelUpsAffordable(*(unsigned short *)(temp_v17 + 0x46),*(unsigned char *)(temp_v17 + 0x48),
                                   temp_v17 + 0x30);
              temp_v7 = flagWordTestBit(temp_v17,1);
              if (((temp_v7 != 0) || (temp_v7 = flagWordTestBit(temp_v17,2), temp_v7 != 0)) ||
                 (temp_v7 = flagWordTestBit(temp_v17,10), temp_v7 != 0)) {
                temp_v6 = 0;
                *(int *)(temp_v17 + 0x30) = temp_v5;
              }
              if (temp_v6 == 0) {
                if ((*temp_v33 != '\0') || (*temp_v34 != '\0')) {
                  *(int *)(temp_v17 + 0x30) = *(int *)(temp_v17 + 0x30) - *temp_v37;
                  temp_v5 = FUN_00295c60(*(unsigned short *)(temp_v17 + 0x46),*(unsigned char *)(temp_v17 + 0x48)
                                      );
                  *(int *)(temp_v17 + 0x30) = *(int *)(temp_v17 + 0x30) + temp_v5;
                  temp_v6 = devilLevelUpsAffordable(*(unsigned short *)(temp_v17 + 0x46),*(unsigned char *)(temp_v17 + 0x48)
                                       ,temp_v17 + 0x30);
                }
              }
              __aeabi_memcpy4(temp_v18 + 0x3c78,temp_v17,0x604);
              if (temp_v6 != 0) {
                temp_v7 = (int)(char)temp_v6;
                *(unsigned char *)(temp_v18 + 0x3c74) = *(unsigned char *)(temp_v8 + 0x90f0);
                temp_v5 = devilCollectLevelGainSkills(reinterpret_cast<void*>(temp_v17),temp_v7,reinterpret_cast<unsigned short*>(temp_v18 + 0x427c));
                if (temp_v5 != 0) {
                  if (*(char *)(temp_v17 + 0x4b) != '\0') {
                    *(unsigned char *)(*(char *)(temp_v8 + 0x90f0) + temp_v35) = 1;
                  }
                  else {
                    *(unsigned char *)(temp_v18 + 0x4290) = 1;
                  }
                }
                demonApplyLevelGrowth(temp_v17,temp_v7);
                temp_v9 = partyClassifyDemonLevelRequirement(temp_v17);
                *(unsigned int *)(temp_v18 + 0x428c) = temp_v9;
                temp_v8 = FUN_0033b838(temp_v17,temp_v7,0);
                if (temp_v8 != 0) {
                  *(unsigned char *)(temp_v18 + 0x4291) = 1;
                }
                temp_v8 = FUN_0033b7a0(temp_v17,temp_v7,0);
                if (temp_v8 != 0) {
                  *(unsigned char *)(temp_v18 + 0x4292) = 1;
                }
                *(unsigned short *)(temp_v18 + 0x3cbc) = 0;
              }
              if ((*temp_v33 != '\0') && (temp_v8 = FUN_0033b838(temp_v17,1), temp_v8 != 0)) {
                *(unsigned char *)(temp_v18 + 0x4291) = 1;
              }
              if ((*temp_v34 != '\0') && (temp_v8 = FUN_0033b7a0(temp_v17,1), temp_v8 != 0)) {
                *(unsigned char *)(temp_v18 + 0x4292) = 1;
              }
              if (*(unsigned char *)(temp_v17 + 0x48) >= 0x63) {
                *(unsigned int *)(temp_v17 + 0x30) = 0;
              }
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
          gameMoneyAdd(*(unsigned int *)(temp_v2 + 0x3650));
          rt_memclr(temp_v2 + 0xd49a,0x32);
          temp_v4 = gameGetPlayerData();
          temp_v16 = *(unsigned int *)(temp_v4 + 0x30);
          *(unsigned int *)(temp_v2 + 0xd3a0) = temp_v16 << 0xc;
          temp_v4 = 0;
          *(unsigned int *)(temp_v2 + 0xd3a4) = temp_v16 >> 0x14;
          do {
            temp_v8 = gameGetSlotTable();
            temp_v8 = (int)*(char *)(temp_v8 + temp_v4 + 0x90f0);
            if (-1 < temp_v8) {
              temp_v18 = gameGetUnitRecord(temp_v8);
              if (temp_v18 != 0) {
                temp_v16 = *(unsigned int *)(temp_v18 + 0x30);
                temp_v8 = temp_v2 + temp_v8 * 8;
                *(unsigned int *)(temp_v8 + 0xd3a8) = temp_v16 << 0xc;
                *(unsigned int *)(temp_v8 + 0xd3ac) = temp_v16 >> 0x14;
              }
              else {
                temp_v8 = temp_v2 + temp_v8 * 8;
                *(unsigned int *)(temp_v8 + 0xd3a8) = 0;
                *(unsigned int *)(temp_v8 + 0xd3ac) = 0;
              }
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
          FUN_00296474(temp_v2);
          piVar17 = (int *)(temp_v2 + 0xcf74);
          *piVar17 = 0;
          *(unsigned int *)(temp_v2 + 0xcf78) = 0;
          FUN_002b7bca(temp_v29,0x19,0x620,partyCompareSlotOrder);
          temp_v4 = 0;
          do {
            if (*(char *)(temp_v2 + temp_v4 * 0x620 + 0x3654) == '\x7f') break;
            temp_v4 = temp_v4 + 1;
            *piVar17 = *piVar17 + 1;
          } while (temp_v4 < 0x19);
          if ((*(char *)(temp_v31 + 0x5c) == '\0') && (*piVar17 != 0)) {
            eventQueueAddUnique(0x100017e);
          }
          resultSetMenuState(temp_v2,6);
        }
        break;
      }
    }
    temp_v16 = 1;
    temp_v4 = 0;
    temp_v8 = 0x19;
    temp_v28 = 1;
    do {
      temp_v18 = temp_v2 + temp_v4 * 2;
      *(unsigned short *)(temp_v18 + 0xd49a) = 0;
      *(unsigned char *)(temp_v2 + temp_v4 + 0xd4fe) = 0;
      temp_v8 = temp_v8 - 1;
      temp_v4 = temp_v4 + 1;
      *(unsigned short *)(temp_v18 + 0xd4cc) = 0x1e;
      if (temp_v8 == 0) goto LAB_0018d058;
    } while( 1 );
  case 6:
    FUN_002960ec(temp_v2);
    FUN_00295f54(temp_v2);
    temp_v4 = 0;
    FUN_002c1658(0,1);
    if (temp_v4 != 0) {
      temp_v4 = dialogIsActive();
      if (temp_v4 != 0) {
        infoWinStartTimer(1);
      }
      temp_v4 = 0;
      do {
        temp_v8 = temp_v2 + temp_v4 * 4;
        temp_v18 = *(int *)(temp_v8 + 0x3618);
        if (temp_v18 != 0) {
          FUN_00295a18(temp_v18,*(unsigned int *)(temp_v8 + 0x3630));
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 6);
      resultSetMenuState(temp_v2,7);
      timerStart(temp_v2 + 0x20,1,0);
      temp_v4 = 0;
      do {
        timerStart(temp_v2 + temp_v4 * 0x8c + 0xac,1,0);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 6);
      FUN_0029cc44(1);
      eventQueueAddUniqueIfValid(0x100016d);
    }
    break;
  case 7:
    FUN_002bf818(temp_v2 + 0x20);
    temp_v4 = 0;
    do {
      FUN_002bf818(temp_v2 + temp_v4 * 0x8c + 0xac);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
    if (*(char *)(temp_v2 + 0xaa) != '\0') {
      temp_v4 = gameGetSlotTable();
      FUN_002958f8(0xffffffff,1);
      temp_v8 = 0;
      do {
        if (-1 < *(char *)(temp_v4 + temp_v8 + 0x9108)) {
          temp_v18 = gameGetUnitRecord();
          FUN_002958f8((int)*(short *)(temp_v18 + 0x46),1);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 3);
      if (*(int *)(temp_v2 + 0xcf74) != *(int *)(temp_v2 + 0xcf78)) {
        FUN_0029e874(1);
        FUN_0029e788();
        resultSetMenuState(temp_v2,9);
      }
      else {
        resultSetMenuState(temp_v2,0x14);
      }
    }
    break;
  case 9:
    temp_v4 = FUN_0029e0f8();
    if (temp_v4 != 0) {
      piVar17 = (int *)(temp_v2 + 0xcf78);
      if (*(unsigned char *)(temp_v2 + *piVar17 * 0x620 + 0x3654) != 0xff) {
        gameGlobalsSetSelected(6);
        FUN_0029c4c8(1);
        FUN_0029d8f4(temp_v2 + *piVar17 * 0x620 + 0x3658,0);
        temp_v9 = gameGetUnitRecord((int)*(char *)(temp_v2 + *piVar17 * 0x620 + 0x3654));
        FUN_0029c4e4(temp_v9,0);
        statusPanelSetOpen(1);
        resultSetMenuState(temp_v2,0xb);
      }
      else {
        gameGlobalsSetSelected(5);
        FUN_0029c4c8(1);
        FUN_0029a0e8(temp_v2 + *piVar17 * 0x620 + 0x3658);
        gameGetPlayerData();
        FUN_0029a0cc();
        statusPanelSetOpen(1);
        resultSetMenuState(temp_v2,10);
        FUN_0029f848(temp_v2 + 0xcfd4,5,5,1,0,1);
      }
    }
    break;
  case 10:
    FUN_00204358(temp_v2);
    break;
  case 0xb:
    temp_v8 = temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620;
    temp_v4 = gameGetUnitRecord((int)*(char *)(temp_v8 + 0x3654));
    switch(*(unsigned int *)(temp_v2 + 0x3534)) {
    case 0:
      btlTalkBustUpCreate();
      FUN_0029c424(1);
      FUN_002a0cc8(1);
      temp_v16 = (unsigned int)*(unsigned short *)(temp_v4 + 0x46);
      FUN_002bd06c(temp_v16);
      libc_strcpy(temp_v26,temp_v16);
      textEncodeFontSlot(8,temp_v26);
      temp_v9 = demonGetRaceLabel(*(unsigned short *)(temp_v4 + 0x46),1);
      libc_strcpy(temp_v26,temp_v9);
      textEncodeFontSlot(0x10,temp_v26);
      temp_v16 = (unsigned int)*(unsigned short *)(temp_v4 + 0x46);
      devilGetRecord();
      temp_v0 = *(char *)(temp_v16 + 0x30);
      temp_v9 = dataTableGet(0x25,0);
      pcVar18 = (char *)dataTableGetEntries();
      temp_v16 = dataTableGetCount(temp_v9);
      temp_v20 = 0;
      if (temp_v16 != 0) {
        do {
          if (*pcVar18 == temp_v0) goto LAB_0018da7c;
          temp_v20 = temp_v20 + 1;
          pcVar18 = pcVar18 + 0x20;
          if (temp_v20 >= temp_v16) break;
        } while( 1 );
      }
      pcVar18 = (char *)0x0;
LAB_0018da7c:
      textFormatBuffer(&temp_v35,&LAB_0018dd60,pcVar18 + 1);
      temp_v9 = asdLoadFileSyncDefault(&temp_v35);
      *(unsigned int *)(temp_v2 + 0x3578) = temp_v9;
      temp_v15 = *(unsigned int *)(temp_v2 + 0x3570);
      FUN_00297060(temp_v15,temp_v9);
      *(unsigned int *)(temp_v2 + 0x3574) = temp_v15;
      FUN_0029ede8(0x18,(unsigned int)*(unsigned char *)(temp_v4 + 0x48) - (unsigned int)*(unsigned char *)(temp_v8 + 0x36a0),0xffffffff,
                   0);
      *(int *)(temp_v2 + 0x3534) = *(int *)(temp_v2 + 0x3534) + 1;
    case 1:
      temp_v4 = FUN_0029563c();
      if ((temp_v4 != 0) && (temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3568),2), temp_v4 != 0)) {
        piVar20 = (int *)(temp_v2 + 0x3534);
        temp_v4 = *piVar20 + 1;
        *piVar20 = temp_v4;
      }
      break;
    case 2:
      temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3568));
      if (temp_v4 == 2) {
        FUN_002a0cc8(0);
        temp_v4 = 0;
        temp_v18 = 3;
        *(int *)(temp_v2 + 0x3534) = *(int *)(temp_v2 + 0x3534) + 1;
        temp_v19 = *(short *)(temp_v8 + 0x3c5c);
        if (temp_v19 != 0) {
          temp_v26[0] = temp_v19;
        }
        temp_v3 = *(short *)(temp_v8 + 0x3c5e);
        psVar9 = (short *)(temp_v8 + 0x3c5c);
        if (temp_v19 != 0) {
          temp_v4 = 1;
        }
        do {
          temp_v19 = psVar9[2];
          if (temp_v3 != 0) {
            psVar23 = temp_v26 + temp_v4;
            temp_v4 = (int)(char)((char)temp_v4 + '\x01');
            *psVar23 = temp_v3;
          }
          temp_v3 = psVar9[3];
          if (temp_v19 != 0) {
            psVar23 = temp_v26 + temp_v4;
            temp_v4 = (int)(char)((char)temp_v4 + '\x01');
            *psVar23 = temp_v19;
          }
          temp_v18 = temp_v18 - 1;
          psVar9 = psVar9 + 2;
        } while (temp_v18 != 0);
        if (*(short *)(temp_v8 + 0x3c6a) != 0) {
          psVar9 = temp_v26 + temp_v4;
          temp_v4 = (int)(char)((char)temp_v4 + '\x01');
          *psVar9 = *(short *)(temp_v8 + 0x3c6a);
        }
        statusDownSetEntries(temp_v26,temp_v4);
      }
      break;
    case 3:
      FUN_0029c4c8(0);
      FUN_0029d8f4(temp_v4,0);
      temp_v19 = *(short *)(temp_v8 + 0x3c5e);
      temp_v16 = (unsigned int)(*(short *)(temp_v8 + 0x3c5c) != 0);
      temp_v18 = 0;
      temp_v17 = 3;
      psVar9 = (short *)(temp_v8 + 0x3c5c);
      do {
        if (temp_v19 != 0) {
          temp_v16 = temp_v16 + 1;
        }
        temp_v19 = psVar9[3];
        if (psVar9[2] != 0) {
          temp_v18 = temp_v18 + 1;
        }
        temp_v17 = temp_v17 - 1;
        psVar9 = psVar9 + 2;
      } while (temp_v17 != 0);
      temp_v18 = temp_v16 + temp_v18;
      if (*(short *)(temp_v8 + 0x3c6a) != 0) {
        temp_v18 = temp_v18 + 1;
      }
      if (0 >= temp_v18) {
        FUN_0029ee6c(0,0x323232ff);
        if (*(char *)((int)*(char *)(temp_v8 + 0x3654) + temp_v2 + 0xcf7c) != '\0') {
          beginStatusPanelClose();
          piVar20 = (int *)(temp_v2 + 0x3534);
          temp_v4 = *piVar20 + 1;
          *piVar20 = temp_v4;
          break;
        }
        piVar20 = (int *)(temp_v2 + 0x3534);
        temp_v4 = 10;
        *piVar20 = temp_v4;
        break;
      }
      temp_v8 = 0;
      temp_v16 = flagCountUnlockedSlots(temp_v4);
      if (0 < (int)(temp_v16 - 1)) {
        psVar9 = (short *)(temp_v4 + 0x32);
        if (((temp_v16 & 1) == 0) && (psVar9 = (short *)(temp_v4 + 0x34), *psVar9 == 0)) {
          temp_v8 = 1;
        }
        temp_v19 = psVar9[1];
        temp_v17 = 0;
        for (temp_v18 = (int)(temp_v16 - 1) >> 1; temp_v18 != 0; temp_v18 = temp_v18 - 1) {
          if (temp_v19 == 0) {
            temp_v8 = temp_v8 + 1;
          }
          temp_v19 = psVar9[3];
          if (psVar9[2] == 0) {
            temp_v17 = temp_v17 + 1;
          }
          psVar9 = psVar9 + 2;
        }
        temp_v8 = temp_v8 + temp_v17;
      }
      if ((-1 < (int)(temp_v16 - 1)) && (*(short *)(temp_v4 + (temp_v16 - 1) * 2 + 0x34) == 0)) {
        temp_v8 = temp_v8 + 1;
      }
      if (temp_v8 >= 1) {
        resultSetMenuState(temp_v2,0xd);
      }
      else {
        resultSetMenuState(temp_v2,0xe);
      }
      break;
    case 4:
      temp_v8 = FUN_00295618();
      if (temp_v8 != 0) {
        temp_v8 = btlTalkBustUpGetValue();
        if (temp_v8 == 0) {
          FUN_002954f4(*(unsigned short *)(temp_v4 + 0x46),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),7);
        piVar20 = (int *)(temp_v2 + 0x3534);
        temp_v4 = *piVar20 + 1;
        *piVar20 = temp_v4;
      }
      break;
    case 5:
      temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
      if (temp_v4 == 2) {
        piVar20 = (int *)(temp_v2 + 0x3534);
        temp_v4 = 10;
        *piVar20 = temp_v4;
      }
      break;
    case 10:
      FUN_0029c424(0);
      if (*(char *)(temp_v8 + 0x3c71) == '\0') {
        if (*(char *)(temp_v8 + 0x3c70) == '\0') {
          if (*(int *)(temp_v8 + 0x3c6c) == 1) {
            temp_v0 = *(char *)(temp_v8 + 0x3c72);
joined_r0x0018edf0:
            if (temp_v0 != '\0') {
              resultSetMenuState(temp_v2,0x10);
            }
            else {
              FUN_0029bd4c();
              FUN_0029541c(temp_v2);
            }
          }
          else {
            resultSetMenuState(temp_v2,0xc);
          }
        }
        else {
          resultSetMenuState(temp_v2,0x11);
        }
      }
      else {
        resultSetMenuState(temp_v2,0xf);
      }
    }
    break;
  case 0xc:
    FUN_00216e64(temp_v2);
    break;
  case 0xd:
    piVar17 = (int *)(temp_v2 + 0xcf78);
    temp_v8 = temp_v2 + *piVar17 * 0x620;
    pcVar18 = (char *)(temp_v8 + 0x3654);
    temp_v4 = gameGetUnitRecord((int)*pcVar18);
    piVar20 = (int *)(temp_v2 + 0x3534);
    switch(*piVar20) {
    case 0:
      beginStatusPanelClose();
      *piVar20 = *piVar20 + 1;
    case 1:
      temp_v8 = FUN_00295618();
      if (temp_v8 != 0) {
        temp_v8 = btlTalkBustUpGetValue();
        if (temp_v8 == 0) {
          FUN_002954f4(*(unsigned short *)(temp_v4 + 0x46),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),5);
        temp_v4 = *piVar20 + 1;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 2:
      temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
      if (temp_v4 == 2) {
        statusDownEnterState4();
        FUN_002bf810(0x1000179);
        *piVar20 = *piVar20 + 1;
      }
      break;
    case 3:
      temp_v18 = FUN_002efe58();
      if (temp_v18 != 0) {
        temp_v18 = 0;
        temp_v16 = flagCountUnlockedSlots(temp_v4);
        if (0 < (int)temp_v16) {
          do {
            if (*(short *)(temp_v4 + temp_v18 * 2 + 0x34) == 0) {
              *(unsigned short *)(temp_v4 + temp_v18 * 2 + 0x34) = *(unsigned short *)(temp_v8 + 0x3c5c);
              break;
            }
            temp_v18 = temp_v18 + 1;
          } while (temp_v18 < (int)temp_v16);
        }
        temp_v18 = 0;
        *(unsigned short *)(temp_v8 + 0x3c5c) = 0;
        do {
          if (0 < 7 - temp_v18) {
            temp_v17 = 0;
            temp_v5 = 7 - temp_v18;
            do {
              temp_v7 = temp_v18 + temp_v17;
              if ((*(short *)(pcVar18 + temp_v7 * 2 + 0x608) == 0) &&
                 (*(short *)(pcVar18 + temp_v7 * 2 + 0x60a) != 0)) {
                *(short *)(pcVar18 + temp_v7 * 2 + 0x608) = *(short *)(pcVar18 + temp_v7 * 2 + 0x60a);
                (pcVar18 + temp_v7 * 2 + 0x60a)[0] = '\0';
                (pcVar18 + temp_v7 * 2 + 0x60a)[1] = '\0';
              }
              temp_v5 = temp_v5 - 1;
              temp_v17 = temp_v17 + 1;
            } while (temp_v5 != 0);
          }
          temp_v18 = temp_v18 + 1;
        } while (temp_v18 < 7);
        temp_v17 = 3;
        temp_v19 = *(short *)(temp_v8 + 0x3c5e);
        temp_v20 = (unsigned int)(*(short *)(temp_v8 + 0x3c5c) != 0);
        temp_v18 = 0;
        psVar9 = (short *)(temp_v8 + 0x3c5c);
        do {
          if (temp_v19 != 0) {
            temp_v20 = temp_v20 + 1;
          }
          temp_v19 = psVar9[3];
          if (psVar9[2] != 0) {
            temp_v18 = temp_v18 + 1;
          }
          temp_v17 = temp_v17 - 1;
          psVar9 = psVar9 + 2;
        } while (temp_v17 != 0);
        temp_v18 = temp_v20 + temp_v18;
        if (*(short *)(temp_v8 + 0x3c6a) != 0) {
          temp_v18 = temp_v18 + 1;
        }
        unitRecalculateEffectiveStats(temp_v4);
        FUN_002954bc(temp_v4);
        if (temp_v18 >= 1) {
          temp_v8 = 0;
          if (0 < (int)(temp_v16 - 1)) {
            psVar9 = (short *)(temp_v4 + 0x32);
            if (((temp_v16 & 1) == 0) && (psVar9 = (short *)(temp_v4 + 0x34), *psVar9 == 0)) {
              temp_v8 = 1;
            }
            temp_v19 = psVar9[1];
            temp_v17 = 0;
            for (temp_v18 = (int)(temp_v16 - 1) >> 1; temp_v18 != 0; temp_v18 = temp_v18 - 1) {
              if (temp_v19 == 0) {
                temp_v8 = temp_v8 + 1;
              }
              temp_v19 = psVar9[3];
              if (psVar9[2] == 0) {
                temp_v17 = temp_v17 + 1;
              }
              psVar9 = psVar9 + 2;
            }
            temp_v8 = temp_v8 + temp_v17;
          }
          if ((-1 < (int)(temp_v16 - 1)) && (*(short *)(temp_v4 + (temp_v16 - 1) * 2 + 0x34) == 0)) {
            temp_v8 = temp_v8 + 1;
          }
          if (temp_v8 >= 1) {
            *piVar20 = 2;
          }
          else {
            resultSetMenuState(temp_v2,0xe);
          }
        }
        else {
          FUN_002d9680();
          buttonHelpSetPreset(0xe0);
          *piVar20 = *piVar20 + 1;
          FUN_0029c424(0);
        }
        FUN_0029bde4(temp_v4);
      }
      break;
    case 4:
      temp_v4 = 0;
      FUN_002c1658(0,1);
      if (temp_v4 != 0) {
        FUN_0029ee6c(0,0x323232ff);
        if (*(char *)(temp_v8 + 0x3c71) != '\0') {
          resultSetMenuState(temp_v2,0xf);
        }
        else if (*(char *)(temp_v8 + 0x3c70) != '\0') {
          resultSetMenuState(temp_v2,0x11);
        }
        else if (*(int *)(temp_v8 + 0x3c6c) != 1) {
          resultSetMenuState(temp_v2,0xc);
        }
        else if (*(char *)(temp_v8 + 0x3c72) != '\0') {
          resultSetMenuState(temp_v2,0x10);
        }
        else {
          FUN_0029bd4c();
          temp_v4 = FUN_0029541c(temp_v2);
          if (temp_v4 != 0) {
            *piVar20 = *piVar20 + 1;
          }
        }
        temp_v9 = 0x100016d;
        eventQueueAddUniqueIfValid(temp_v9);
      }
      break;
    case 5:
      temp_v4 = FUN_0029e0f8();
      if (temp_v4 != 0) {
        FUN_0029c4c8(1);
        FUN_0029d8f4(temp_v2 + *piVar17 * 0x620 + 0x3658,0);
        temp_v9 = gameGetUnitRecord((int)*(char *)(temp_v2 + *piVar17 * 0x620 + 0x3654));
        FUN_0029c4e4(temp_v9,0);
        statusPanelSetOpen(1);
        resultSetMenuState(temp_v2,0xb);
      }
    }
    break;
  case 0xe:
    temp_v8 = temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620;
    pcVar18 = (char *)(temp_v8 + 0x3654);
    temp_v4 = gameGetUnitRecord((int)*pcVar18);
    piVar17 = (int *)(temp_v2 + 0x3534);
    switch(*piVar17) {
    case 0:
      beginStatusPanelClose();
      temp_v4 = *piVar17 + 1;
      *(int *)(temp_v2 + 0x3534) = temp_v4;
      break;
    case 1:
      temp_v8 = FUN_00295618();
      if (temp_v8 != 0) {
        temp_v8 = btlTalkBustUpGetValue();
        if (temp_v8 == 0) {
          FUN_002954f4(*(unsigned short *)(temp_v4 + 0x46),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),5);
        temp_v4 = *piVar17 + 1;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 2:
      temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
      if (temp_v4 == 2) {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),6);
        statusDownEnterRefreshState();
        FUN_0029c424(0);
        buttonHelpSetPreset(0x67);
        temp_v4 = 6;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 3:
      temp_v18 = FUN_0030ab14();
      if (temp_v18 != 0) {
        temp_v5 = 0;
        temp_v18 = flagCountUnlockedSlots(temp_v4);
        temp_v17 = FUN_00295408();
        if (temp_v17 < temp_v18) {
          *(unsigned short *)(temp_v4 + temp_v17 * 2 + 0x34) = *(unsigned short *)(temp_v8 + 0x3c5c);
        }
        *(unsigned short *)(temp_v8 + 0x3c5c) = 0;
        do {
          if (0 < 7 - temp_v5) {
            temp_v18 = 0;
            temp_v17 = 7 - temp_v5;
            do {
              temp_v7 = temp_v5 + temp_v18;
              if ((*(short *)(pcVar18 + temp_v7 * 2 + 0x608) == 0) &&
                 (*(short *)(pcVar18 + temp_v7 * 2 + 0x60a) != 0)) {
                *(short *)(pcVar18 + temp_v7 * 2 + 0x608) = *(short *)(pcVar18 + temp_v7 * 2 + 0x60a);
                (pcVar18 + temp_v7 * 2 + 0x60a)[0] = '\0';
                (pcVar18 + temp_v7 * 2 + 0x60a)[1] = '\0';
              }
              temp_v17 = temp_v17 - 1;
              temp_v18 = temp_v18 + 1;
            } while (temp_v17 != 0);
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 7);
        temp_v18 = 0;
        temp_v19 = *(short *)(temp_v8 + 0x3c5e);
        temp_v16 = (unsigned int)(*(short *)(temp_v8 + 0x3c5c) != 0);
        temp_v17 = 3;
        psVar9 = (short *)(temp_v8 + 0x3c5c);
        do {
          if (temp_v19 != 0) {
            temp_v16 = temp_v16 + 1;
          }
          temp_v19 = psVar9[3];
          if (psVar9[2] != 0) {
            temp_v18 = temp_v18 + 1;
          }
          temp_v17 = temp_v17 - 1;
          psVar9 = psVar9 + 2;
        } while (temp_v17 != 0);
        temp_v18 = temp_v16 + temp_v18;
        if (*(short *)(temp_v8 + 0x3c6a) != 0) {
          temp_v18 = temp_v18 + 1;
        }
        if (temp_v18 >= 1) {
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),6);
          statusDownEnterRefreshState();
          temp_v8 = 6;
        }
        else {
          FUN_002f6728();
          temp_v8 = *piVar17 + 1;
        }
        *piVar17 = temp_v8;
        FUN_0029c424(0);
        unitRecalculateEffectiveStats(temp_v4);
        FUN_002954bc(temp_v4);
        FUN_0029bde4(temp_v4);
      }
      break;
    case 4:
      temp_v18 = sys43e188GetState();
      if (temp_v18 != 0) {
        if (*(char *)(temp_v2 + 0xd640) != '\0') {
          FUN_0029bed8(*(unsigned short *)(temp_v4 + 0x46));
          *(unsigned char *)(temp_v2 + 0xd640) = 0;
        }
        FUN_0029ee6c(0,0x323232ff);
        if (*(int *)(temp_v2 + 0x3530) != 0xc) {
          if (*(char *)(temp_v8 + 0x3c71) != '\0') {
            resultSetMenuState(temp_v2,0xf);
            break;
          }
          if (*(char *)(temp_v8 + 0x3c70) != '\0') {
            resultSetMenuState(temp_v2,0x11);
            break;
          }
          if (*(int *)(temp_v8 + 0x3c6c) != 1) {
            resultSetMenuState(temp_v2,0xc);
            break;
          }
          if (*(char *)(temp_v8 + 0x3c72) != '\0') {
            resultSetMenuState(temp_v2,0x10);
            break;
          }
          FUN_0029bd4c();
          temp_v4 = FUN_0029541c(temp_v2);
        }
        else {
          FUN_0029bd4c();
          temp_v4 = FUN_0029541c(temp_v2);
        }
        if (temp_v4 != 0) {
          temp_v4 = *piVar17 + 1;
          *(int *)(temp_v2 + 0x3534) = temp_v4;
        }
      }
      break;
    case 5:
      temp_v4 = FUN_0029e0f8();
      if (temp_v4 != 0) {
        FUN_0029c4c8(1);
        FUN_0029d8f4(temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620 + 0x3658,0);
        temp_v9 = gameGetUnitRecord((int)*(char *)(temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620 + 0x3654));
        FUN_0029c4e4(temp_v9,0);
        statusPanelSetOpen(1);
        resultSetMenuState(temp_v2,0xb);
      }
      break;
    case 6:
      scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
      temp_v4 = FUN_002f6564();
      if (temp_v4 != 0) {
        messageMainFinishWindow();
        buttonHelpSetPreset(0x9a);
        temp_v4 = 7;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 7:
      temp_v4 = sys43e188GetState();
      if (temp_v4 != 0) {
        temp_v4 = FUN_00295408();
        temp_v8 = statusDownGetLastEntryIndex();
        if (temp_v4 == temp_v8) {
          temp_v9 = 10;
        }
        else {
          temp_v9 = 9;
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3568),temp_v9);
        temp_v4 = 8;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 8:
      temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3568));
      if (temp_v4 == 2) {
        FUN_0029c424(0);
        temp_v4 = messageMainGetChoiceResult();
        if (temp_v4 != 0) {
          *piVar17 = 6;
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),6);
          FUN_0030aacc();
          buttonHelpSetPreset(0x67);
        }
        else {
          FUN_00317e34();
          *piVar17 = 3;
          temp_v9 = 0x67;
          buttonHelpSetPreset(temp_v9);
        }
      }
    }
    break;
  case 0xf:
    temp_v18 = temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620;
    temp_v4 = gameGetUnitRecord((int)*(char *)(temp_v18 + 0x3654));
    piVar17 = (int *)(temp_v2 + 0x3534);
    temp_v8 = *piVar17;
    if (temp_v8 == 10) {
      temp_v4 = asdSoundSlotBIsPlaying(*(unsigned int *)(temp_v2 + 0xd048));
      if (temp_v4 == 0) {
        temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    }
    if (9 >= temp_v8) {
      switch(temp_v8) {
      case 0:
        temp_v8 = temp_v4 + 0x34;
        skillChooseRandomFlaggedSlot();
        *(int *)(temp_v2 + 0xd038) = temp_v8;
        temp_v18 = temp_v4 + 0x34;
        FUN_0033be90(temp_v18,temp_v8,*(unsigned short *)(temp_v4 + 0x46));
        *(int *)(temp_v2 + 0xd03c) = temp_v18;
        if (temp_v18 == 0) {
          temp_v4 = 100;
        }
        else {
          gameSavedFlagSet((int)(short)temp_v18);
          beginStatusPanelClose();
          temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
        }
        *(int *)(temp_v2 + 0x3534) = temp_v4;
        break;
      case 1:
        temp_v8 = FUN_00295618();
        if (temp_v8 != 0) {
          temp_v8 = btlTalkBustUpGetValue();
          if (temp_v8 == 0) {
            FUN_002954f4(*(unsigned short *)(temp_v4 + 0x46),1);
            btlTalkBustUpSetUnk2F4(1);
          }
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),8);
          FUN_002f6660(*(unsigned int *)(temp_v2 + 0xd038),*(unsigned int *)(temp_v2 + 0xd03c));
          temp_v4 = 0;
          piVar20 = (int *)(temp_v2 + 0x3544);
          *piVar17 = *piVar17 + 1;
          *piVar20 = temp_v4;
        }
        break;
      case 2:
        scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
        if (*(int *)(temp_v2 + 0x3544) >= 0x21) {
          temp_v4 = 0;
          FUN_002c1658(0,1);
          if ((temp_v4 != 0) || (temp_v4 = statusDownValueGet(), temp_v4 != 0)) {
            temp_v4 = statusDownGetCursorIndex();
            if ((temp_v4 != *(int *)(temp_v2 + 0xd038)) && (temp_v4 = FUN_002f6614(), temp_v4 == 0)) {
              temp_v9 = 0x100016e;
              eventQueueAddUniqueIfValid(temp_v9);
              break;
            }
            FUN_0029c424(1);
            messageMainFinishWindow();
            buttonHelpSetPreset(0x9a);
            scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3568),7);
            temp_v9 = FUN_002bf810(0x100016d);
            *(unsigned int *)(temp_v2 + 0xd048) = temp_v9;
            *piVar17 = 0x14;
          }
          else {
            temp_v4 = 10;
            FUN_002c1658(10,1);
            if (temp_v4 != 0) {
              FUN_0029c424(1);
              messageMainFinishWindow();
              buttonHelpSetPreset(0x9a);
              scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3568),8);
              temp_v9 = FUN_002bf810(0x100016e);
              *(unsigned int *)(temp_v2 + 0xd048) = temp_v9;
              *piVar17 = 0x15;
            }
          }
        }
        break;
      case 3:
        temp_v4 = asdSoundSlotBIsPlaying(*(unsigned int *)(temp_v2 + 0xd048));
        if (temp_v4 == 0) {
          temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
          *(int *)(temp_v2 + 0x3534) = temp_v4;
        }
        break;
      case 4:
        temp_v8 = sys43e188GetState();
        if (temp_v8 != 0) {
          FUN_0029c424(1);
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),10);
          devilCreateRaceEffect(*(unsigned short *)(temp_v4 + 0x46),0);
          temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
          *(int *)(temp_v2 + 0x3534) = temp_v4;
        }
        break;
      case 5:
        temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
        if (temp_v4 == 2) {
          FUN_0030ab34(1);
          eventQueueAddUnique(0x100017a);
          temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
          *(int *)(temp_v2 + 0x3534) = temp_v4;
        }
        break;
      case 6:
        temp_v8 = FUN_0030aaf4();
        if (temp_v8 != 0) {
          FUN_0029c424(0);
          *(short *)(temp_v4 + *(int *)(temp_v2 + 0xd038) * 2 + 0x34) =
               (short)*(unsigned int *)(temp_v2 + 0xd03c);
          statusReplaceSkillList(temp_v4 + 0x34);
          temp_v4 = 99;
          *(int *)(temp_v2 + 0x3534) = temp_v4;
        }
      }
    }
    else if (temp_v8 != 0x15) {
      if (0x14 >= temp_v8) {
        if (temp_v8 != 0xb) {
          if (temp_v8 != 0xc) {
            if ((temp_v8 == 0x14) &&
               (temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3568)), temp_v4 == 2)) {
              FUN_0029c424(0);
              temp_v4 = messageMainGetChoiceResult();
              if (temp_v4 == 0) {
                *piVar17 = 3;
                temp_v9 = 0x65;
              }
              else {
                *piVar17 = 10;
                temp_v9 = 0x65;
              }
              buttonHelpSetPreset(temp_v9);
            }
          }
          else {
            temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574));
            if ((temp_v4 == 2) && (temp_v4 = FUN_0030aaf4(), temp_v4 != 0)) {
              FUN_0029c424(0);
              temp_v4 = 100;
              *(int *)(temp_v2 + 0x3534) = temp_v4;
            }
          }
        }
        else {
          temp_v8 = sys43e188GetState();
          if (temp_v8 != 0) {
            FUN_0029c424(1);
            scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),0xb);
            devilCreateRaceEffect(*(unsigned short *)(temp_v4 + 0x46),3);
            FUN_0030ab34(0);
            temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
            *(int *)(temp_v2 + 0x3534) = temp_v4;
          }
        }
      }
      else if (temp_v8 != 0x16) {
        if (temp_v8 == 99) {
          *piVar17 = 100;
        }
        else if (temp_v8 == 100) {
          FUN_0029c424(0);
          unitRecalculateEffectiveStats(temp_v4);
          FUN_002954bc(temp_v4);
          if (*(char *)(temp_v18 + 0x3c70) != '\0') {
            resultSetMenuState(temp_v2,0x11);
            break;
          }
          if (*(int *)(temp_v18 + 0x3c6c) == 1) {
            temp_v0 = *(char *)(temp_v18 + 0x3c72);
            goto joined_r0x0018edf0;
          }
          FUN_00295214(0);
          resultSetMenuState(temp_v2,0xc);
        }
      }
    }
    else {
      temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3568));
      if (temp_v4 == 2) {
        FUN_0029c424(0);
        temp_v4 = messageMainGetChoiceResult();
        if (temp_v4 != 0) {
          *piVar17 = 2;
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),8);
          temp_v9 = 0x68;
          buttonHelpSetPreset(temp_v9);
          break;
        }
        *piVar17 = 10;
        temp_v9 = 0x65;
        buttonHelpSetPreset(temp_v9);
      }
    }
    break;
  case 0x10:
    temp_v4 = gameGetUnitRecord((int)*(char *)(temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620 + 0x3654));
    temp_v8 = *(int *)(temp_v2 + 0x3534);
    if (temp_v8 == 0) {
      temp_v9 = devilRollDropItem(temp_v4);
      *(unsigned int *)(temp_v2 + 0xd040) = temp_v9;
      beginStatusPanelClose();
      FUN_0029bd4c();
      temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
      *(int *)(temp_v2 + 0x3534) = temp_v4;
      break;
    }
    if (temp_v8 != 1) {
      if ((temp_v8 == 2) && (temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3574)), temp_v4 == 2)) {
        FUN_0029bd4c();
        FUN_0029541c(temp_v2);
      }
    }
    else {
      temp_v8 = FUN_00295618();
      if ((temp_v8 != 0) && (temp_v8 = FUN_0029c48c(), temp_v8 != 0)) {
        temp_v8 = btlTalkBustUpGetValue();
        if (temp_v8 == 0) {
          FUN_002954f4(*(unsigned short *)(temp_v4 + 0x46),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3574),0xd);
        temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
    }
    break;
  case 0x11:
    FUN_001cea8c(temp_v2);
    break;
  case 0x12:
    piVar17 = (int *)(temp_v2 + 0x3534);
    switch(*piVar17) {
    case 0:
      temp_v4 = gameGetPlayerData();
      FUN_0029ede8(0x18,((unsigned int)*(unsigned char *)(temp_v4 + 0x76) -
                        (unsigned int)*(unsigned char *)(temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620 + 0x36ce)) * 10,
                   0xffffffff,0);
      timerStart(temp_v2 + 0x598,0);
      *piVar17 = *piVar17 + 1;
    case 1:
      FUN_002b8ee0(temp_v2 + 0x598,0);
      if ((*(char *)(temp_v2 + 0x622) != '\0') &&
         (temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x3568),1), temp_v4 != 0)) {
        *piVar17 = *piVar17 + 1;
        temp_v9 = FUN_002bf810(0x100017d);
        *(unsigned int *)(temp_v2 + 0xd558) = temp_v9;
        *(unsigned char *)(temp_v2 + 0xd55d) = 1;
      }
      break;
    case 2:
      scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3568));
      temp_v4 = FUN_00295cec();
      temp_v16 = temp_v4 - *(int *)(temp_v2 + 0xd54c);
      temp_v4 = FUN_002aa278(temp_v16 * 0x1000,temp_v16 >> 0x14,0x14,0);
      puVar13 = (unsigned int *)(temp_v2 + 0xd550);
      *puVar13 = *puVar13 + temp_v4;
      temp_v16 = FUN_00295cec();
      temp_v22 = temp_v16 << 0xc <= *puVar13;
      if (-(temp_v16 >> 0x14) < (unsigned int)temp_v22) {
        temp_v4 = FUN_00295cec(-((temp_v16 >> 0x14) + (unsigned int)!temp_v22));
        *puVar13 = temp_v4 << 0xc;
        if (*(char *)(temp_v2 + 0xd55d) != '\0') {
          soundSlotStopById(*(unsigned int *)(temp_v2 + 0xd558));
          *(unsigned char *)(temp_v2 + 0xd55d) = 0;
        }
      }
      temp_v4 = sys43e188GetState();
      if (temp_v4 != 0) {
        if (*(char *)(temp_v2 + 0xd55d) != '\0') {
          soundSlotStopById(*(unsigned int *)(temp_v2 + 0xd558));
          *(unsigned char *)(temp_v2 + 0xd55d) = 0;
        }
        temp_v4 = FUN_00295cec();
        *puVar13 = temp_v4 << 0xc;
        timerStart(temp_v2 + 0x598,1,0);
        temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 3:
      temp_v4 = FUN_002bf818(temp_v2 + 0x598);
      if (temp_v4 != 0) {
        temp_v4 = *(int *)(temp_v2 + 0x3534) + 1;
        *(int *)(temp_v2 + 0x3534) = temp_v4;
      }
      break;
    case 4:
      temp_v4 = sys43e188GetState();
      if (temp_v4 != 0) {
        temp_v4 = *(int *)(temp_v2 + 0xcf78) + 1;
        *(int *)(temp_v2 + 0xcf78) = temp_v4;
        if (*(int *)(temp_v2 + 0xcf74) == temp_v4) {
          resultSetMenuState(temp_v2,0x14);
          break;
        }
        gameGlobalsSetSelected(6);
        FUN_0029c4c8(1);
        FUN_0029d8f4(temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620 + 0x3658,0);
        temp_v9 = gameGetUnitRecord((int)*(char *)(temp_v2 + *(int *)(temp_v2 + 0xcf78) * 0x620 + 0x3654));
        FUN_0029c4e4(temp_v9,0);
        statusPanelSetOpen(1);
        resultSetMenuState(temp_v2,0xb);
      }
    }
    break;
  case 0x13:
    temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x3568));
    if (temp_v4 == 2) {
      FUN_00295214(0);
      FUN_002b827c(3);
      *(unsigned int *)(temp_v2 + 0x352c) = 0x14;
    }
  }
  *(int *)(temp_v2 + 0x3544) = *(int *)(temp_v2 + 0x3544) + 1;
  return 0;
}

} /* extern "C" */
