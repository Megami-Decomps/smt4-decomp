/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00204098` (_code @ 0x204098, 0x459c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f490(...);
int FUN_0016432c(...);
int FUN_00168980(...);
int FUN_0023acdc(...);
int FUN_0026c3c4(...);
int FUN_0026cbb8(...);
int FUN_002a5e7c(...);
int FUN_002f01e0(...);
int FUN_0037dfb0(...);
int FUN_0037e078(void);
int FUN_00387ac4(...);
int stateHolderEnterState7(void);
int statusDownEnterState11(...);
int FUN_003b0744(void);
int FUN_003c16e0(...);
int FUN_003e40b8(...);
int FUN_003f36a4(...);
int FUN_003f391c(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);

int sysPlaySe(...);
int FUN_0019de98(...);
int FUN_0022e774(void);
int scrScriptProcessStartEntry(...);
int FUN_002a6894(...);
int FUN_002a7288(void);
int FUN_002f5064(...);
int FUN_00336de4(...);
int FUN_0034a968(void);
int FUN_00359974(...);
int btlTalkBustUpSetUnk2F4(...);
int FUN_00371e54(...);
int FUN_00371ef4(void);
int FUN_0039c448(void);
int FUN_003a62e8(...);
int roundObjFinish(...);
int FUN_004bcd90(...);
int getUnlockedSlotCount(...);
int FUN_004bd6b0(...);

int FUN_00100388(...);
int FUN_00180118(...);
int FUN_00184310(void);
int FUN_0020214c(void);
int FUN_00203b40(...);
int FUN_00215bd0(void);
int FUN_00275bc8(...);
int FUN_002a7324(...);
int FUN_002c8538(...);
int FUN_002c85b0(...);
int FUN_002c9a8c(...);
int btlTalkBustUpCreate(void);
int libc_strcpy(...);
int FUN_003180c4(...);
int FUN_00333dc8(...);
int FUN_00334214(...);
int FUN_003343f0(...);
int objBInitBlock19D0(...);
int FUN_0033449c(...);
int FUN_003720a0(...);
int FUN_00372100(...);
int FUN_0037e0d0(...);
int FUN_0037e12c(...);
int soundChannelStopAll(...);

int qsort(...);
int eventQueueAddUniqueIfValid(...);
int uiSpriteSetKeyframe(...);
int dialogClose(...);
int FUN_0021b968(...);
int FUN_00224880(...);
int FUN_002818a0(...);
int obj04Finish(void);
int FUN_0035ac58(...);
int FUN_0037c6ac(...);
int FUN_00388758(...);
int FUN_0038b3f8(...);
int FUN_003f2fb0(...);
int FUN_003f3048(...);
int flagValueAdd(...);
int FUN_004a0ef8(...);
int bitsAt60Test(...);
int FUN_004cd0c8(...);
int FUN_004cd4b8(...);

int FUN_00167458(...);
int eventQueueAddUnique(...);
int uiSpriteSelectAnim(...);
int uiSpriteSetImageKeyframe(...);
int FUN_00203b1c(void);
int FUN_00217358(...);
int FUN_0023c384(...);
int mapDepartAdvanceState(void);
int FUN_002e5c2c(...);
int sysMemClear(...);
int panelSetMode3(...);
int FUN_00340a94(...);
int FUN_00387240(...);
int FUN_003d2150(...);
int FUN_003d2158(...);
int gameFlagSetValue(...);
int itemResetOverLimitStates(...);
int FUN_004cc6d4(...);
int FUN_004ccbf0(...);
int FUN_004ccc7c(...);
int FUN_004cd238(...);
int rt_memcpy_w(...);

int FUN_001517b4(...);
int saveSlotFindSelected(void);
int FUN_00163aa4(...);
int gameGetPlayerData(void);
int FUN_001834a4(...);
int pairSetFirstResetSecond(...);
int FUN_00184c40(...);
int gameGetSlotRecord(...);
int gameGetSlotTable(void);
int FUN_0020b490(...);
int FUN_00240674(...);
int FUN_0034aae4(void);
int FUN_00358e94(...);
int panelSetTarget(unsigned int, int);
int FUN_0037c8e4(int, int);
int FUN_003982f4(void);
int lmapMainCallIfActive2(void);
int soundChannelRequestIfEnabled(...);
int FUN_003e4940(void);
int FUN_003e503c(...);
int __aeabi_idivmod(...);

/* stack frame of void: 17 slot(s), 66 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned short spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern unsigned char LAB_0020658c; /* 0x20658c */
extern int FUN_002f8ba4(...); /* 0x2f8ba4 */
extern signed char DAT_00588c40; /* 0x588c40 */
extern signed char DAT_00588c41; /* 0x588c41 */
extern int DAT_00588c44; /* 0x588c44 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: qsort. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: saveSlotFindSelected. */
/* Supplied declaration required: FUN_0015f490. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_0016432c. */
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_00184c40. */
extern int FUN_00187168(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern char *dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: gameGetSlotTable. */
extern float FUN_001b4874(int, unsigned int);
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00203b1c. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: FUN_0020b490. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_00217358. */
/* Supplied declaration required: FUN_0021b968. */
/* Supplied declaration required: FUN_00224880. */
extern int FUN_0022e750(void);
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_0023acdc. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023c384. */
/* Supplied declaration required: FUN_00240674. */
extern int *FUN_0025e684(int);
extern int dialogIsActive(void);
extern int FUN_0026272c(void);
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_0026c3c4. */
/* Supplied declaration required: FUN_0026cbb8. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_002818a0. */
/* Supplied declaration required: mapDepartAdvanceState. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: FUN_002a6894. */
/* Supplied declaration required: FUN_002a7288. */
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
extern int FUN_002c8748(void);
/* Supplied declaration required: FUN_002c9a8c. */
/* Supplied declaration required: btlTalkBustUpCreate. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002e5c2c. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_002effbc(void);
/* Supplied declaration required: FUN_002f01e0. */
/* Supplied declaration required: FUN_002f5064. */
extern long long FUN_002ffa9c(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: panelSetMode3. */
extern int FUN_0032169c(void);
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_00340a94. */
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: FUN_0034a968. */
/* Supplied declaration required: FUN_0034aae4. */
/* Supplied declaration required: FUN_00358e94. */
extern int FUN_0035988c(unsigned int);
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_0035ac58. */
extern int FUN_0035fd00(unsigned short);
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
extern int stateHolderCountMinus1(void);
extern int stateHolderStateIsNot4(void);
extern int FUN_00371e38(void);
/* Supplied declaration required: FUN_00371e54. */
/* Supplied declaration required: FUN_00371ef4. */
/* Supplied declaration required: FUN_003720a0. */
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_0037c6ac. */
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037c8e4. */
extern unsigned int dataTable0aSub0GetValueById(unsigned short);
extern int stateHolderStateIs8Or10(void);
extern int FUN_0037df64(void);
/* Supplied declaration required: FUN_0037dfb0. */
/* Supplied declaration required: FUN_0037e078. */
/* Supplied declaration required: FUN_0037e0d0. */
/* Supplied declaration required: FUN_0037e12c. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_00387ac4. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_0038b3f8. */
extern int FUN_0038b568(void);
/* Supplied declaration required: FUN_003982f4. */
/* Supplied declaration required: stateHolderEnterState7. */
extern int stateHolderStateIs0x12(void);
extern int stateHolderStateIs0xD(void);
/* Supplied declaration required: statusDownEnterState11. */
/* Supplied declaration required: FUN_0039c448. */
/* Supplied declaration required: lmapMainCallIfActive2. */
/* Supplied declaration required: FUN_003a62e8. */
extern int FUN_003a7b74(void);
/* Supplied declaration required: FUN_003b0744. */
extern int statusDownGetCursorPosition(void);
/* Supplied declaration required: FUN_003c16e0. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: roundObjFinish. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
extern int playerHasFlagBit(unsigned int);
/* Supplied declaration required: FUN_003e40b8. */
/* Supplied declaration required: FUN_003e4940. */
extern int FUN_003e4cb4(unsigned int);
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_003f2fb0. */
/* Supplied declaration required: FUN_003f3048. */
extern unsigned int FUN_003f3104(int);
extern unsigned int FUN_003f3654(int);
/* Supplied declaration required: FUN_003f36a4. */
/* Supplied declaration required: FUN_003f391c. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: FUN_004a0ef8. */
extern int FUN_004b6b1c(int);
/* Supplied declaration required: itemResetOverLimitStates. */
extern int FUN_004bca68(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: getUnlockedSlotCount. */
/* Supplied declaration required: bitsAt60Test. */
/* Supplied declaration required: FUN_004bd6b0. */
/* Supplied declaration required: FUN_004cc6d4. */
extern int FUN_004cc8d8(unsigned short, unsigned short);
extern int FUN_004cc9dc(unsigned short, unsigned short, int);
/* Supplied declaration required: FUN_004ccbf0. */
/* Supplied declaration required: FUN_004ccc7c. */
/* Supplied declaration required: FUN_004cd0c8. */
/* Supplied declaration required: FUN_004cd238. */
/* Supplied declaration required: FUN_004cd4b8. */
/* Supplied declaration required: __aeabi_idivmod. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00204098(void)

{
/* irregular: 55 unstructured edge(s); 9 goto(s); irregular input(s): in_fpscr; 131 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  long long temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  short *psVar12;
  unsigned int temp_v11;
  float temp_v12;
  char **ppcVar15;
  short *psVar16;
  unsigned int temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  short temp_v23;
  short temp_v24;
  unsigned int temp_v25;
  int *piVar25;
  char *pcVar26;
  unsigned int *puVar27;
  unsigned int temp_v26;
  unsigned int *puVar29;
  int temp_v27;
  short *psVar31;
  int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned short *puVar36;
  unsigned char temp_v32;
  unsigned int in_fpscr;
  float temp_v33;
  float temp_v34;
  unsigned long long temp_v35;
  long long temp_v36;
  unsigned long long temp_v37;
  unsigned int temp_v38;
  short temp_v39 [2];
  int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  char *temp_v43;
  int temp_v44;
  int *temp_v45;
  int temp_v46;
  unsigned char *temp_v47;
  int temp_v48;
  char *temp_v49;
  unsigned char *temp_v50;
  unsigned int temp_v51;
  int temp_v52;
  
  temp_v6 = DAT_00588c44;
  if (DAT_00588c44 == 0) {
    return 0;
  }
  temp_v7 = FUN_004b6b1c(DAT_00588c44);
  if (temp_v7 == 0) {
    return 0;
  }
  temp_v34 = 1.0f;
  FUN_00163aa4(temp_v6 + 0x50c);
  FUN_00163aa4(temp_v6 + 0x598);
  *(unsigned char *)(temp_v6 + 0x7f51) = *(unsigned char *)(temp_v6 + 0x7f50);
  temp_v7 = 9;
  FUN_001517b4(9,0);
  temp_v16 = *(int *)(temp_v6 + 0x7f54) - 1;
  *(int *)(temp_v6 + 0x7f54) = temp_v16;
  if ((temp_v16 < 1) && (temp_v7 != 0)) {
    *(unsigned char *)(temp_v6 + 0x7f50) = 1;
  }
  else {
    *(unsigned char *)(temp_v6 + 0x7f50) = 0;
  }
  switch(*(unsigned int *)(temp_v6 + 0x4364)) {
  case 0:
    temp_v7 = FUN_002c8748();
    if (temp_v7 != 0) {
      FUN_003982f4();
      lmapMainCallIfActive2();
      FUN_0034aae4();
      FUN_0020b490(temp_v6,1);
    }
    break;
  case 1:
    temp_v7 = gameGetPlayerData();
    temp_v13 = *(unsigned int *)(temp_v7 + 0x30);
    *(unsigned int *)(temp_v6 + 0x7884) = temp_v13 >> 0x14;
    temp_v7 = 0;
    *(unsigned int *)(temp_v6 + 0x7880) = temp_v13 << 0xc;
    do {
      temp_v16 = gameGetSlotTable();
      temp_v16 = (int)*(char *)(temp_v16 + temp_v7 + 0x1c88);
      if (-1 < temp_v16) {
        temp_v27 = gameGetSlotRecord(temp_v16);
        if (temp_v27 != 0) {
          temp_v13 = *(unsigned int *)(temp_v27 + 0x30);
          temp_v16 = temp_v6 + temp_v16 * 0x28;
          *(unsigned int *)(temp_v16 + 0x78ac) = temp_v13 >> 0x14;
          *(unsigned int *)(temp_v16 + 0x78a8) = temp_v13 << 0xc;
        }
        else {
          temp_v16 = temp_v6 + temp_v16 * 0x28;
          *(unsigned int *)(temp_v16 + 0x78a8) = 0;
          *(unsigned int *)(temp_v16 + 0x78ac) = 0;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x18);
    temp_v13 = 0;
    do {
      temp_v26 = temp_v13 & 0xffff;
      FUN_003e503c();
      temp_v7 = temp_v13 + 0x19;
      if (temp_v7 >= 0x25) {
        temp_v7 = 0x24;
      }
      temp_v16 = FUN_00187168();
      if (temp_v16 != 0) {
        temp_v29 = *(unsigned int *)(temp_v26 + 0x30) >> 0x14;
        temp_v16 = *(unsigned int *)(temp_v26 + 0x30) << 0xc;
      }
      else {
        temp_v16 = 0;
        temp_v29 = 0;
      }
      temp_v7 = temp_v6 + temp_v7 * 0x28;
      temp_v13 = temp_v13 + 1;
      *(int *)(temp_v7 + 0x7880) = temp_v16;
      *(unsigned int *)(temp_v7 + 0x7884) = temp_v29;
    } while ((int)temp_v13 < 0xc);
    temp_v7 = gameGetPlayerData();
    temp_v16 = 0;
    *(unsigned short *)(temp_v6 + 0x7890) = *(unsigned short *)(temp_v7 + 0x62);
    do {
      temp_v7 = gameGetSlotTable();
      temp_v7 = (int)*(char *)(temp_v7 + temp_v16 + 0x1c88);
      if ((-1 < temp_v7) && (temp_v27 = gameGetSlotRecord(temp_v7), temp_v27 != 0)) {
        *(unsigned short *)(temp_v6 + temp_v7 * 0x28 + 0x78b8) = *(unsigned short *)(temp_v27 + 100);
      }
      temp_v16 = temp_v16 + 1;
    } while (temp_v16 < 0x18);
    temp_v13 = 0;
    do {
      temp_v26 = temp_v13 & 0xffff;
      FUN_003e503c();
      temp_v7 = FUN_00187168();
      if (temp_v7 != 0) {
        temp_v7 = temp_v13 + 0x19;
        if (temp_v7 >= 0x25) {
          temp_v7 = 0x24;
        }
        *(unsigned short *)(temp_v6 + temp_v7 * 0x28 + 0x7890) = *(unsigned short *)(temp_v26 + 100);
      }
      temp_v13 = temp_v13 + 1;
    } while ((int)temp_v13 < 0xc);
    FUN_00240674(temp_v6);
    FUN_0020b490(temp_v6,2);
    FUN_0037c8e4(1,0);
    panelSetTarget(*(unsigned int *)(temp_v6 + 0x4428),1);
    temp_v16 = 0;
    temp_v7 = 0;
LAB_0020448c:
    do {
      temp_v13 = 1000000;
      temp_v9 = 0;
      temp_v8 = *(int *)(temp_v6 + temp_v7 * 0x28 + 0x7870);
      temp_v7 = 1;
      temp_v27 = temp_v8;
      if (temp_v8 >= 1000000) {
        temp_v8 = 999999;
        temp_v27 = 999999;
      }
      do {
        if (temp_v7 <= temp_v27) {
          temp_v9 = temp_v9 + 1;
        }
        temp_v7 = temp_v7 * 10;
      } while (temp_v7 < 1000000);
      temp_v7 = FUN_001834a4(0x1d,0x2e);
      temp_v24 = *(short *)(temp_v7 + 8);
      temp_v7 = FUN_001834a4(0x1d,0x28);
      temp_v23 = *(short *)(temp_v7 + 8);
      temp_v1 = **(short **)(temp_v7 + 0xc);
      temp_v9 = FUN_001834a4(0x1d,temp_v9 + 0x27);
      temp_v10 = 0;
      temp_v46 = -(((((int)temp_v23 + (int)temp_v1) - (int)temp_v24) -
                   (((int)**(short **)(temp_v7 + 0xc) + (int)*(short *)(temp_v7 + 8)) -
                   (int)*(short *)(temp_v9 + 8))) / 2);
      temp_v40 = temp_v16 * 7;
      do {
        if ((int)temp_v13 <= temp_v27) {
          temp_v7 = temp_v40 - temp_v10;
          temp_v9 = __aeabi_idivmod(temp_v8,temp_v13);
          temp_v28 = temp_v6 + (temp_v7 + 0x26) * 0x8c;
          pairSetFirstResetSecond(temp_v28 + 0x20,temp_v9 + 0x80c);
          temp_v8 = temp_v8 - temp_v9 * temp_v13;
          temp_v7 = FUN_001834a4(0x1d,temp_v16 + 0x30);
          FUN_00184c40(temp_v28 + 0x20,(int)*(short *)(temp_v7 + 8),(int)*(short *)(temp_v7 + 10));
          temp_v7 = FUN_001834a4(0x1d,0x2e - temp_v10);
          temp_v9 = __aeabi_idivmod(temp_v8,temp_v13);
          temp_v9 = FUN_001834a4(7,temp_v9 + 0x80c);
          FUN_00358e94(temp_v28 + 0x20,
                       (int)(short)((*(short *)(temp_v7 + 8) + (short)temp_v46) -
                                   *(short *)(temp_v9 + 8)),
                       (int)(short)(*(short *)(temp_v7 + 10) - *(short *)(temp_v9 + 10)));
        }
        temp_v10 = temp_v10 + 1;
        temp_v13 = temp_v13 / 10;
      } while (temp_v13 != 0);
      do {
        temp_v16 = temp_v16 + 1;
        if (temp_v16 >= 4) {
          saveSlotFindSelected();
          temp_v7 = FUN_003e4940();
          if (temp_v7 != 0) {
            temp_v7 = 999999;
            temp_v27 = 0;
            temp_v16 = *(int *)(temp_v6 + 0x7c58);
            if (temp_v16 < 1000000) {
              temp_v8 = 1;
              temp_v7 = temp_v16;
              goto LAB_00204688;
            }
            temp_v8 = 1;
            temp_v16 = temp_v7;
            temp_v27 = temp_v27 + 1;
            while( 1 ) {
              temp_v13 = 1000000;
              temp_v8 = temp_v8 * 10;
              if (temp_v8 >= 1000000) break;
LAB_00204688:
              if (temp_v16 != 0) {
                temp_v27 = temp_v27 + 1;
              }
            }
            temp_v8 = FUN_001834a4(0x1d,0x17e);
            temp_v24 = *(short *)(temp_v8 + 8);
            temp_v8 = FUN_001834a4(0x1d,0x178);
            temp_v23 = *(short *)(temp_v8 + 8);
            temp_v1 = **(short **)(temp_v8 + 0xc);
            temp_v27 = FUN_001834a4(0x1d,temp_v27 + 0x177);
            temp_v2 = *(short *)(temp_v8 + 8);
            temp_v3 = *(short *)(temp_v27 + 8);
            temp_v27 = 0;
            temp_v4 = **(short **)(temp_v8 + 0xc);
            do {
              if ((int)temp_v13 <= temp_v16) {
                temp_v43 = (char *)__aeabi_idivmod(temp_v7,temp_v13);
                temp_v10 = temp_v6 + (0x42 - temp_v27) * 0x8c;
                pairSetFirstResetSecond(temp_v10 + 0x20,(int)temp_v43 + 0x80c);
                temp_v7 = temp_v7 - (int)temp_v43 * temp_v13;
                temp_v8 = FUN_001834a4(0x1d,0x17e - temp_v27);
                temp_v9 = __aeabi_idivmod(temp_v7,temp_v13);
                temp_v9 = FUN_001834a4(7,temp_v9 + 0x80c);
                FUN_00184c40(temp_v10 + 0x20,
                             (int)(short)((*(short *)(temp_v8 + 8) -
                                          (short)(((((int)temp_v23 + (int)temp_v1) - (int)temp_v24) -
                                                  (((int)temp_v4 + (int)temp_v2) - (int)temp_v3)) / 2)) -
                                         *(short *)(temp_v9 + 8)),
                             (int)(short)(*(short *)(temp_v8 + 10) - *(short *)(temp_v9 + 10)));
              }
              temp_v27 = temp_v27 + 1;
              temp_v13 = temp_v13 / 10;
            } while (temp_v13 != 0);
          }
          temp_v0 = *(char *)(temp_v6 + 0x4398);
          if (temp_v0 != '\0') {
            if ((temp_v0 != '\x01') && (temp_v0 == '\x02')) {
              soundChannelRequestIfEnabled(0x1000076,0,0x3c);
            }
          }
          else {
            temp_v11 = 0x1000076;
            soundChannelRequestIfEnabled(temp_v11,0,0x3c);
          }
          *(int *)(temp_v6 + 0x437c) = *(int *)(temp_v6 + 0x437c) + 1;
          return 0;
        }
        temp_v7 = 0;
        if (temp_v16 < 1) goto LAB_0020448c;
        temp_v7 = gameGetSlotTable();
      } while (*(char *)(temp_v7 + temp_v16 + 0x1c9f) < '\0');
      temp_v7 = gameGetSlotTable();
      temp_v7 = *(char *)(temp_v7 + temp_v16 + 0x1c9f) + 1;
    } while( 1 );
  case 2:
    FUN_00340a94(temp_v6 + 0x20,0);
    temp_v7 = 0;
    do {
      if (temp_v7 < *(int *)(temp_v6 + 0x437c)) {
        FUN_00167458(temp_v6 + temp_v7 * 0x8c + 0xac,0);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    if ((((((*(char *)(temp_v6 + 0xaa) != '\0') && (*(char *)(temp_v6 + 0x136) != '\0')) &&
          (*(char *)(temp_v6 + 0x1c2) != '\0')) &&
         ((*(char *)(temp_v6 + 0x24e) != '\0' && (*(char *)(temp_v6 + 0x2da) != '\0')))) &&
        ((*(char *)(temp_v6 + 0x366) != '\0' &&
         ((*(char *)(temp_v6 + 0x3f2) != '\0' && (*(char *)(temp_v6 + 0x47e) != '\0')))))) &&
       (*(char *)(temp_v6 + 0x50a) != '\0')) {
      FUN_0020b490(temp_v6,3);
    }
    break;
  case 3:
    FUN_00217358(temp_v6);
    temp_v7 = 0;
    do {
      temp_v16 = 0;
      do {
        FUN_00163aa4(temp_v6 + (temp_v7 * 7 + temp_v16 + 0x20) * 0x8c + 0x20);
        temp_v16 = temp_v16 + 1;
      } while (temp_v16 < 7);
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    if ((*(char *)(temp_v6 + 0x122a) != '\0') && (*(int *)(temp_v6 + 0x437c) >= 0x18)) {
      temp_v7 = 0;
      do {
        temp_v16 = 0;
        do {
          uiSpriteSetImageKeyframe(temp_v6 + (temp_v7 * 7 + temp_v16 + 0x20) * 0x8c + 0x20,2,0);
          temp_v16 = temp_v16 + 1;
        } while (temp_v16 < 7);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 5);
      panelSetMode3(*(unsigned int *)(temp_v6 + 0x4428),1);
      FUN_0020b490(temp_v6,4);
    }
    break;
  case 4:
    FUN_00217358(temp_v6);
    temp_v7 = 0;
    do {
      temp_v16 = 0;
      do {
        FUN_00163aa4(temp_v6 + (temp_v7 * 7 + temp_v16 + 0x20) * 0x8c + 0x20);
        temp_v16 = temp_v16 + 1;
      } while (temp_v16 < 7);
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    if (*(char *)(temp_v6 + 0x122a) != '\0') {
      FUN_0020b490(temp_v6,5);
      *(unsigned int *)(temp_v6 + 0x7e44) = 0;
      *(unsigned char *)(temp_v6 + 0x7e48) = 0;
      *(unsigned char *)(temp_v6 + 0x7e49) = 0;
      if (*(char *)(temp_v6 + 0x4398) == '\0') {
        mapDepartAdvanceState();
      }
    }
    break;
  case 5:
    temp_v38 = FUN_00217358(temp_v6);
    temp_v45 = (int *)gameGetPlayerData();
    temp_v43 = (char *)(temp_v6 + 0x788f);
    temp_v46 = temp_v6 + 0x7800;
    *temp_v43 = '\0';
    if (*(char *)(temp_v6 + 0x788e) != '\0') {
      *(short *)(temp_v6 + 0x788c) = *(short *)(temp_v6 + 0x788c) + 1;
      FUN_00163aa4(temp_v6 + 0x24c4);
      temp_v7 = temp_v17;
      if (*(short *)(temp_v6 + 0x788c) >= 0x1f) {
        temp_v7 = 0x7e40;
        *(unsigned char *)(temp_v6 + 0x788e) = 0;
        *(unsigned int *)(temp_v6 + 0x7880) = 0;
        *(unsigned int *)(temp_v6 + 0x7884) = 0;
        *(unsigned short *)(temp_v6 + 0x788c) = 0;
        *(unsigned char *)(temp_v6 + 0x7e40) = 0;
      }
    }
    else {
      puVar29 = (unsigned int *)(temp_v6 + 0x7878);
      temp_v29 = *(unsigned int *)(temp_v6 + 0x7870);
      temp_v13 = *puVar29;
      temp_v26 = *(unsigned int *)(temp_v6 + 0x787c);
      temp_v5 = *(long long *)puVar29;
      temp_v7 = temp_v13 + temp_v29 * -0x1000;
      if (temp_v29 >> 0x14 < temp_v26 || temp_v26 - (temp_v29 >> 0x14) < (unsigned int)(temp_v29 * 0x1000 <= temp_v13))
      {
        *temp_v43 = '\x01';
      }
      else {
        temp_v36 = FUN_002ffa9c(temp_v29 << 0xc,temp_v29 >> 0x14,0x2d,0);
        temp_v30 = (unsigned int)((unsigned long long)(temp_v36 + temp_v5) >> 0x20);
        if (temp_v29 >> 0x14 < temp_v30 ||
            temp_v30 - (temp_v29 >> 0x14) < (unsigned int)(temp_v29 << 0xc <= (unsigned int)(temp_v36 + temp_v5))) {
          temp_v36 = romwright_piece_4_4((temp_v29 >> 0x14) - (temp_v26 + (temp_v29 * 0x1000 < temp_v13)),
                            temp_v29 * 0x1000 - temp_v13);
        }
        puVar27 = (unsigned int *)(temp_v6 + 0x7880);
        *(long long *)puVar27 = temp_v36 + *(long long *)puVar27;
        *(long long *)puVar29 = temp_v36 + *(long long *)puVar29;
        temp_v16 = FUN_004ccbf0((unsigned int)*(unsigned short *)((int)temp_v45 + 0x62) +
                              (int)*(short *)(temp_v6 + 0x788a));
        temp_v13 = temp_v16 * 0x1000;
        temp_v7 = FUN_00203b1c();
        if ((int)((unsigned int)*(unsigned short *)((int)temp_v45 + 0x62) + (int)*(short *)(temp_v6 + 0x788a)) >=
            temp_v7) {
          temp_v7 = 0x788e;
          *(unsigned char *)(temp_v6 + 0x788e) = 0;
          *puVar27 = 0;
          *(unsigned int *)(temp_v6 + 0x7884) = 0;
          *(unsigned short *)(temp_v6 + 0x788c) = 0;
          *temp_v43 = '\x01';
        }
        else {
          temp_v7 = *puVar27 + temp_v16 * -0x1000;
          if (*(unsigned int *)(temp_v6 + 0x7884) != 0 ||
              *(unsigned int *)(temp_v6 + 0x7884) < (unsigned int)(temp_v13 <= *puVar27)) {
            *(unsigned short *)((int)temp_v45 + 0x5e) = 0;
            temp_v26 = *puVar27 + temp_v16 * -0x1000;
            *(unsigned int *)(temp_v6 + 0x787c) =
                 *(int *)(temp_v6 + 0x787c) -
                 ((*(int *)(temp_v6 + 0x7884) - (unsigned int)(*puVar27 < temp_v13)) + (unsigned int)(*puVar29 < temp_v26)
                 );
            *puVar29 = *puVar29 - temp_v26;
            *(unsigned int *)(temp_v6 + 0x7884) = 0;
            *puVar27 = temp_v13;
            *(short *)(temp_v6 + 0x788a) = *(short *)(temp_v6 + 0x788a) + 1;
            *(unsigned char *)(temp_v6 + 0x788e) = 1;
            *(unsigned char *)(temp_v6 + 0x7892) = 1;
            if (*(short *)(temp_v6 + 0x74ea) < 0) {
              *(unsigned short *)(temp_v6 + 0x74ea) = *(unsigned short *)(temp_v6 + 0x7536);
              *(short *)(temp_v6 + 0x7536) = *(short *)(temp_v6 + 0x7536) + 1;
            }
            if (*(char *)(temp_v6 + 0x7e40) == '\0') {
              eventQueueAddUnique(0x100021e);
              *(unsigned char *)(temp_v6 + 0x7e48) = 1;
            }
            *(unsigned char *)(temp_v6 + 0x7e40) = 1;
            temp_v7 = temp_v6 + 0x24c4;
            uiSpriteSelectAnim(temp_v7,2);
            pairSetFirstResetSecond(temp_v7,0x1a);
            FUN_00387240(temp_v7,0x1d,0x2f);
            temp_v16 = FUN_001834a4(0x1d,0x30);
            FUN_00358e94(temp_v7,(int)*(short *)(temp_v16 + 8),(int)*(short *)(temp_v16 + 10));
            temp_v7 = temp_v18;
          }
        }
      }
    }
    FUN_0023c384(temp_v6,temp_v7);
    temp_v45 = (int *)0x0;
    temp_v48 = temp_v6 + 0x7500;
    temp_v49 = (char *)(temp_v6 + 0x7e00);
    temp_v50 = (unsigned char *)(temp_v6 + 0x7e48);
    temp_v47 = (unsigned char *)(temp_v6 + 0x7e40);
    temp_v7 = 0x19;
    do {
      temp_v16 = temp_v6 + temp_v7 * 0x28;
      temp_v13 = temp_v7 - 0x19;
      if (*(unsigned int *)(temp_v16 + 0x7870) == 0) {
        *(unsigned char *)(temp_v16 + 0x788f) = 1;
      }
      if ((int)temp_v13 < 0) {
        temp_v13 = 0;
      }
      temp_v13 = temp_v13 & 0xffff;
      FUN_003e503c();
      temp_v51 = temp_v13;
      temp_v35 = FUN_003e4940();
      temp_v13 = (unsigned int)((unsigned long long)temp_v35 >> 0x20);
      if ((int)temp_v35 != 0) {
        *(unsigned char *)(temp_v16 + 0x788f) = 0;
        if (*(char *)(temp_v16 + 0x788e) != '\0') {
          *(short *)(temp_v16 + 0x788c) = *(short *)(temp_v16 + 0x788c) + 1;
          FUN_00163aa4(temp_v6 + temp_v7 * 0x8c + 0x24c4);
          temp_v13 = temp_v19;
          if (*(short *)(temp_v16 + 0x788c) >= 0x1f) {
            temp_v13 = 0;
            *(unsigned char *)(temp_v16 + 0x788e) = 0;
            *(unsigned int *)(temp_v16 + 0x7880) = 0;
            *(unsigned int *)(temp_v16 + 0x7884) = 0;
            *(unsigned short *)(temp_v16 + 0x788c) = 0;
            *temp_v47 = 0;
          }
        }
        else {
          temp_v26 = *(unsigned int *)(temp_v16 + 0x7870);
          temp_v29 = *(unsigned int *)(temp_v16 + 0x7878);
          temp_v30 = *(unsigned int *)(temp_v16 + 0x787c);
          temp_v5 = *(long long *)(temp_v16 + 0x7878);
          temp_v13 = temp_v29 + temp_v26 * -0x1000;
          if (temp_v26 >> 0x14 < temp_v30 ||
              temp_v30 - (temp_v26 >> 0x14) < (unsigned int)(temp_v26 * 0x1000 <= temp_v29)) {
            *(unsigned char *)(temp_v16 + 0x788f) = 1;
          }
          else {
            temp_v36 = FUN_002ffa9c(temp_v26 << 0xc,temp_v26 >> 0x14,0x2d,0);
            temp_v5 = temp_v36 + temp_v5;
            temp_v13 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
            if (temp_v26 >> 0x14 < temp_v13 ||
                temp_v13 - (temp_v26 >> 0x14) < (unsigned int)(temp_v26 << 0xc <= (unsigned int)temp_v5)) {
              temp_v36 = romwright_piece_4_4((temp_v26 >> 0x14) - (temp_v30 + (temp_v26 * 0x1000 < temp_v29)),
                                temp_v26 * 0x1000 - temp_v29);
            }
            *(long long *)(temp_v16 + 0x7880) = temp_v36 + *(long long *)(temp_v16 + 0x7880);
            *(long long *)(temp_v16 + 0x7878) = temp_v36 + *(long long *)(temp_v16 + 0x7878);
            temp_v27 = FUN_00203b1c();
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v51 + 100) + (int)*(short *)(temp_v16 + 0x788a);
            if (temp_v8 >= temp_v27) {
              *(unsigned char *)(temp_v16 + 0x788e) = 0;
              temp_v13 = 0;
              *(unsigned char *)(temp_v16 + 0x788f) = 1;
              *(unsigned int *)(temp_v16 + 0x7880) = 0;
              *(unsigned int *)(temp_v16 + 0x7884) = 0;
              *(unsigned short *)(temp_v16 + 0x788c) = 0;
            }
            else {
              temp_v29 = FUN_004ccbf0(temp_v8);
              temp_v13 = temp_v29 >> 0x14;
              temp_v26 = temp_v29 * 0x1000;
              if (temp_v13 < *(unsigned int *)(temp_v16 + 0x7884) ||
                  *(unsigned int *)(temp_v16 + 0x7884) - temp_v13 < (unsigned int)(temp_v26 <= *(unsigned int *)(temp_v16 + 0x7880))
                 ) {
                *(unsigned short *)(temp_v51 + 0x60) = 0;
                temp_v30 = *(unsigned int *)(temp_v16 + 0x7880);
                temp_v27 = *(int *)(temp_v16 + 0x7884);
                temp_v31 = temp_v30 + temp_v29 * -0x1000;
                temp_v29 = *(unsigned int *)(temp_v16 + 0x7878);
                *(unsigned int *)(temp_v16 + 0x7880) = temp_v26;
                *(unsigned int *)(temp_v16 + 0x7884) = temp_v13;
                *(unsigned int *)(temp_v16 + 0x7878) = temp_v29 - temp_v31;
                *(unsigned int *)(temp_v16 + 0x787c) =
                     *(int *)(temp_v16 + 0x787c) -
                     ((temp_v27 - (temp_v13 + (temp_v30 < temp_v26))) + (unsigned int)(temp_v29 < temp_v31));
                *(short *)(temp_v16 + 0x788a) = *(short *)(temp_v16 + 0x788a) + 1;
                *(unsigned char *)(temp_v16 + 0x788e) = 1;
                temp_v27 = temp_v6 + (short)temp_v7 * 2;
                *(unsigned char *)(temp_v16 + 0x7892) = 1;
                if (*(short *)(temp_v27 + 0x74ea) < 0) {
                  *(unsigned short *)(temp_v27 + 0x74ea) = *(unsigned short *)(temp_v48 + 0x36);
                  *(short *)(temp_v48 + 0x36) = *(short *)(temp_v48 + 0x36) + 1;
                }
                if (temp_v49[0x40] == '\0') {
                  eventQueueAddUnique(0x100021e);
                  *temp_v50 = 1;
                }
                *temp_v47 = 1;
                temp_v16 = FUN_003e4cb4(temp_v51);
                temp_v27 = temp_v6 + temp_v7 * 0x8c;
                if (temp_v16 != 0) {
                  temp_v27 = temp_v27 + 0x24c4;
                  uiSpriteSelectAnim(temp_v27,4);
                  pairSetFirstResetSecond(temp_v27,0x15c);
                  FUN_00387240(temp_v27,0x1d,0x14e);
                  temp_v16 = FUN_001834a4(0x1d,0x14e);
                  temp_v8 = FUN_001834a4(0x1d,0x137);
                  FUN_00358e94(temp_v27,(int)(short)(*(short *)(temp_v8 + 8) - *(short *)(temp_v16 + 8)),
                               (int)(short)(*(short *)(temp_v8 + 10) - *(short *)(temp_v16 + 10)));
                  temp_v13 = temp_v20;
                }
                else {
                  temp_v27 = temp_v27 + 0x24c4;
                  uiSpriteSelectAnim(temp_v27,3);
                  pairSetFirstResetSecond(temp_v27,0x62);
                  FUN_00387240(temp_v27,0x1d,0x67);
                  temp_v16 = FUN_001834a4(0x1d,(int)temp_v45 + 0x152);
                  FUN_00358e94(temp_v27,(int)*(short *)(temp_v16 + 8),(int)*(short *)(temp_v16 + 10));
                  temp_v45 = (int *)((int)temp_v45 + 1);
                  temp_v13 = temp_v21;
                }
              }
            }
          }
        }
      }
      else {
        *(unsigned char *)(temp_v16 + 0x788f) = 1;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x25);
    FUN_00240674(temp_v6,temp_v13);
    temp_v13 = 1;
    temp_v7 = 0x25;
    pcVar26 = temp_v43;
    do {
      temp_v0 = *pcVar26;
      pcVar26 = pcVar26 + 0x28;
      if (temp_v0 == '\0') {
        temp_v13 = 0;
      }
      temp_v7 = temp_v7 - 1;
    } while (temp_v7 != 0);
    temp_v48 = temp_v6 + 0x7e00;
    if (*(char *)(temp_v6 + 0x7e49) == '\0') {
      temp_v11 = FUN_003d2150(0x100021d);
      *(unsigned int *)(temp_v6 + 0x7e44) = temp_v11;
      *(unsigned char *)(temp_v6 + 0x7e49) = 1;
    }
    temp_v7 = 0;
    FUN_001517b4(0,1);
    if (temp_v7 == 0) {
      temp_v7 = 1;
      FUN_001517b4();
      if ((temp_v7 == 0) && (*(char *)(temp_v6 + 0x7f50) == '\0')) {
        if (temp_v13 != 0) {
LAB_0020524c:
          FUN_003d2158(*(unsigned int *)(temp_v6 + 0x7e44),0);
        }
        if ((temp_v38 & temp_v13) != 0) {
          temp_v7 = gameGetPlayerData();
          temp_v27 = *(int *)(temp_v7 + 0x30) + *(int *)(temp_v6 + 0x7870);
          *(int *)(temp_v7 + 0x30) = temp_v27;
          temp_v13 = FUN_004ccc7c(*(unsigned short *)(temp_v7 + 0x62),temp_v7 + 0x30);
          temp_v16 = playerHasFlagBit(1);
          if ((temp_v16 != 0) || (temp_v16 = playerHasFlagBit(10), temp_v16 != 0)) {
            temp_v13 = 0;
            *(int *)(temp_v7 + 0x30) = temp_v27;
          }
          temp_v42 = (unsigned int)(temp_v6 + 0x442c);
          sysMemClear(temp_v6 + 0x4430,100);
          *(unsigned int *)(temp_v6 + 0x4564) = 0;
          *(unsigned int *)(temp_v6 + 0x4568) = 0;
          *(unsigned int *)(temp_v6 + 0x456c) = 0;
          *(unsigned int *)(temp_v6 + 0x4570) = 0;
          *(unsigned char *)(temp_v6 + 0x4578) = 0;
          *(unsigned char *)(temp_v6 + 0x4579) = 0;
          *(unsigned char *)(temp_v6 + 0x457a) = 0;
          *(unsigned int *)(temp_v6 + 0x4574) = 0;
          *(unsigned char *)(temp_v6 + 0x442c) = 0x7f;
          rt_memcpy_w(temp_v6 + 0x4430,temp_v7,100);
          temp_v16 = FUN_002e5c2c();
          *(int *)(temp_v6 + 0x7e38) = temp_v16;
          *(int *)(temp_v6 + 0x7e3c) = temp_v16 << 0xc;
          if (temp_v13 != 0) {
            *(int *)temp_v42 = 0xff;
            temp_v26 = (unsigned int)*(unsigned short *)(temp_v7 + 0x62);
            FUN_004cc6d4(temp_v7,(int)(short)temp_v13,0);
            FUN_004cd238(temp_v26,temp_v13 & 0xffff);
            *(unsigned int *)(temp_v6 + 0x7558) = temp_v26;
            *(unsigned int *)(temp_v6 + 0x755c) = temp_v26;
            *(unsigned int *)(temp_v6 + 0x75c4) = *(unsigned int *)(temp_v6 + 0x7558);
            *(unsigned short *)(temp_v6 + 0x448e) = 0;
            *(unsigned char *)(temp_v6 + 0x7892) = 1;
            itemResetOverLimitStates(temp_v13);
          }
          temp_v13 = FUN_00203b1c();
          if (temp_v13 <= *(unsigned short *)(temp_v7 + 0x62)) {
            *(unsigned int *)(temp_v7 + 0x30) = 0;
          }
          if ((*(unsigned short *)(temp_v7 + 0x62) >= 10) && (temp_v7 = gameFlagIsSet(0x4d7), temp_v7 == 0)) {
            gameFlagSetValue(0x4d7,1);
          }
          temp_v43 = (char *)gameGetSlotTable();
          temp_v50 = (unsigned char *)(temp_v6 + 0x74c4);
          temp_v49 = (char *)(temp_v6 + 0x7f2d);
          temp_v47 = (unsigned char *)(temp_v6 + 0x7f00);
          temp_v7 = 0;
          do {
            temp_v27 = temp_v6 + temp_v7 * 0x150;
            sysMemClear(temp_v27 + 0x4580,100);
            *(unsigned int *)(temp_v27 + 0x46b4) = 0;
            *(unsigned int *)(temp_v27 + 0x46b8) = 0;
            *(unsigned int *)(temp_v27 + 0x46bc) = 0;
            *(unsigned int *)(temp_v27 + 0x46c0) = 0;
            *(unsigned char *)(temp_v27 + 0x46c8) = 0;
            *(unsigned char *)(temp_v27 + 0x46c9) = 0;
            *(unsigned char *)(temp_v27 + 0x46ca) = 0;
            *(unsigned int *)(temp_v27 + 0x46c4) = 0;
            *(unsigned char *)(temp_v27 + 0x457c) = 0x7f;
            temp_v16 = (int)temp_v43 + temp_v7;
            if (-1 < *(char *)(temp_v16 + 0x1c88)) {
              temp_v8 = gameGetSlotRecord((int)*(char *)(temp_v16 + 0x1c88));
              temp_v52 = temp_v6 + *(char *)(temp_v16 + 0x1c88) * 0x28;
              temp_v45 = (int *)(temp_v52 + 0x7898);
              temp_v9 = *(int *)(temp_v8 + 0x30) + *temp_v45;
              *(int *)(temp_v8 + 0x30) = temp_v9;
              temp_v44 = FUN_004cc9dc(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100),
                                      temp_v8 + 0x30);
              temp_v10 = bitsAt60Test(temp_v8,1);
              if ((temp_v10 != 0) || (temp_v10 = bitsAt60Test(temp_v8,10), temp_v10 != 0)) {
                temp_v44 = 0;
                *(int *)(temp_v8 + 0x30) = temp_v9;
                goto LAB_00205528;
              }
              if (temp_v44 == 0) {
LAB_00205528:
                if ((*temp_v49 != '\0') || (*(short *)((int)temp_v47 + 0x2e) != 0)) {
                  *(int *)(temp_v8 + 0x30) = *(int *)(temp_v8 + 0x30) - *temp_v45;
                  temp_v9 = FUN_004cc8d8(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100));
                  *(int *)(temp_v8 + 0x30) = temp_v9 + *(int *)(temp_v8 + 0x30);
                  temp_v44 = FUN_004cc9dc(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100)
                                          ,temp_v8 + 0x30);
                }
              }
              rt_memcpy_w(temp_v27 + 0x4580,temp_v8,300);
              temp_v45 = (int *)FUN_0025e684(temp_v8);
              if (temp_v45 != (int *)0x0) {
                FUN_0021b968(temp_v6,temp_v7,*(unsigned short *)(temp_v8 + 0x62),0);
              }
              if (temp_v44 != 0) {
                *(unsigned char *)(temp_v27 + 0x457c) = *(unsigned char *)(temp_v16 + 0x1c88);
                *(unsigned char *)(temp_v52 + 0x78ba) = 1;
                temp_v10 = (int)(short)temp_v44;
                temp_v9 = temp_v8;
                FUN_004cd0c8(temp_v8,temp_v10,temp_v27 + 0x46b4);
                if (temp_v9 != 0) {
                  if (*(char *)(temp_v8 + 0x67) != '\0') {
                    *(unsigned char *)((int)*(char *)(temp_v16 + 0x1c88) + (int)temp_v50) = 1;
                  }
                  else {
                    *(unsigned char *)(temp_v27 + 0x46c8) = 1;
                  }
                }
                FUN_004cd4b8(temp_v8,temp_v10);
                temp_v11 = FUN_003f3654(temp_v8);
                *(unsigned int *)(temp_v27 + 0x46c4) = temp_v11;
                temp_v14 = (unsigned short)*(unsigned char *)(temp_v27 + 0x46c8);
                temp_v32 = temp_v14 != 1;
                if (!temp_v32) {
                  temp_v14 = *(unsigned short *)(temp_v8 + 0x62);
                }
                if ((temp_v32 || temp_v14 != 0x114) || (temp_v16 = gameFlagIsSet(0x4d7), temp_v16 != 0)) {
                  temp_v16 = FUN_003f3048(temp_v8,temp_v10,0);
                  if ((temp_v16 != 0) && (temp_v16 = FUN_0035ac58(temp_v8), temp_v16 != 0)) {
                    FUN_0021b968(temp_v6,temp_v7,*(unsigned short *)(temp_v8 + 0x62),(unsigned int)temp_v45 ^ 1);
                  }
                }
                else {
                  FUN_0037c6ac(temp_v8,0x41,0x51);
                  FUN_0021b968(temp_v6,temp_v7,*(unsigned short *)(temp_v8 + 0x62),(unsigned int)temp_v45 ^ 1);
                }
                temp_v16 = FUN_003f2fb0(temp_v8,temp_v10,0);
                if ((temp_v16 != 0) && (temp_v16 = FUN_002818a0(temp_v8), temp_v16 != 0)) {
                  FUN_0021b968(temp_v6,temp_v7,*(unsigned short *)(temp_v8 + 0x62),(unsigned int)temp_v45 ^ 1);
                }
                temp_v37 = bitsAt60Test(temp_v27 + 0x4580,2);
                temp_v15 = (unsigned short)((unsigned long long)temp_v37 >> 0x20);
                temp_v32 = (int)temp_v37 != 0;
                if (temp_v32) {
                  temp_v15 = 4;
                }
                *(unsigned short *)(temp_v27 + 0x45e0) = 0;
                if (temp_v32) {
                  *(unsigned short *)(temp_v27 + 0x45e0) = temp_v15;
                }
              }
              if ((*temp_v49 != '\0') && (temp_v16 = FUN_003f3048(temp_v8,1), temp_v16 != 0)) {
                FUN_0021b968(temp_v6,temp_v7,*(unsigned short *)(temp_v8 + 0x62),(unsigned int)temp_v45 ^ 1);
                FUN_0035ac58(temp_v8);
              }
              if ((*(short *)((int)temp_v47 + 0x2e) != 0) &&
                 (temp_v16 = FUN_003f2fb0(temp_v8,1), temp_v16 != 0)) {
                FUN_0021b968(temp_v6,temp_v7,*(unsigned short *)(temp_v8 + 0x62),(unsigned int)temp_v45 ^ 1);
                FUN_002818a0(temp_v8);
              }
              temp_v13 = FUN_00203b1c();
              if (temp_v13 <= *(unsigned short *)(temp_v8 + 100)) {
                *(unsigned int *)(temp_v8 + 0x30) = 0;
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 0x18);
          temp_v7 = 0x19;
          do {
            temp_v27 = temp_v6 + temp_v7 * 0x150;
            sysMemClear(temp_v27 + 0x4430,100);
            *(unsigned int *)(temp_v27 + 0x4564) = 0;
            *(unsigned int *)(temp_v27 + 0x4568) = 0;
            *(unsigned int *)(temp_v27 + 0x456c) = 0;
            *(unsigned int *)(temp_v27 + 0x4570) = 0;
            *(unsigned char *)(temp_v27 + 0x4578) = 0;
            *(unsigned char *)(temp_v27 + 0x4579) = 0;
            *(unsigned char *)(temp_v27 + 0x457a) = 0;
            *(unsigned int *)(temp_v27 + 0x4574) = 0;
            *(unsigned char *)(temp_v27 + 0x442c) = 0x7f;
            temp_v16 = temp_v6 + temp_v7 * 0x28;
            temp_v13 = temp_v7 - 0x19;
            if ((int)temp_v13 < 0) {
              temp_v13 = 0;
            }
            temp_v13 = temp_v13 & 0xffff;
            FUN_003e503c();
            temp_v8 = FUN_003e4940();
            if (temp_v8 != 0) {
              *(int *)(temp_v13 + 0x30) = *(int *)(temp_v16 + 0x7870) + *(int *)(temp_v13 + 0x30);
              temp_v8 = FUN_004ccc7c(*(unsigned short *)(temp_v13 + 100),temp_v13 + 0x30);
              rt_memcpy_w(temp_v27 + 0x4430,temp_v13,0x134);
              if (temp_v8 != 0) {
                *(unsigned char *)(temp_v16 + 0x7892) = 1;
                *(char *)(temp_v27 + 0x442c) = (char)temp_v7;
                FUN_004cd0c8(temp_v13,(int)(short)temp_v8,temp_v27 + 0x4564);
                FUN_004cd4b8(temp_v13,(int)(short)temp_v8);
                *(unsigned short *)(temp_v27 + 0x4490) = 0;
              }
              temp_v26 = FUN_00203b1c();
              if (temp_v26 <= *(unsigned short *)(temp_v13 + 100)) {
                *(unsigned int *)(temp_v13 + 0x30) = 0;
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 0x25);
          FUN_004a0ef8(*(unsigned int *)(temp_v6 + 0x4428));
          temp_v7 = 1;
          temp_v16 = 1;
          *(unsigned short *)(temp_v46 + 0x8a) = 0;
          do {
            temp_v27 = temp_v7 + 1;
            temp_v16 = temp_v16 + 2;
            *(unsigned short *)(temp_v6 + temp_v7 * 0x28 + 0x788a) = 0;
            temp_v7 = temp_v7 + 2;
            *(unsigned short *)(temp_v6 + temp_v27 * 0x28 + 0x788a) = 0;
          } while (temp_v16 < 0x25);
          temp_v7 = gameGetPlayerData();
          temp_v13 = *(unsigned int *)(temp_v7 + 0x30);
          *(unsigned int *)(temp_v6 + 0x7884) = temp_v13 >> 0x14;
          temp_v7 = 0;
          *(unsigned int *)(temp_v6 + 0x7880) = temp_v13 << 0xc;
          do {
            temp_v16 = gameGetSlotTable();
            temp_v16 = (int)*(char *)(temp_v16 + temp_v7 + 0x1c88);
            if (-1 < temp_v16) {
              temp_v27 = gameGetSlotRecord(temp_v16);
              if (temp_v27 != 0) {
                temp_v13 = *(unsigned int *)(temp_v27 + 0x30);
                temp_v16 = temp_v6 + temp_v16 * 0x28;
                *(unsigned int *)(temp_v16 + 0x78ac) = temp_v13 >> 0x14;
                *(unsigned int *)(temp_v16 + 0x78a8) = temp_v13 << 0xc;
              }
              else {
                temp_v16 = temp_v6 + temp_v16 * 0x28;
                *(unsigned int *)(temp_v16 + 0x78a8) = 0;
                *(unsigned int *)(temp_v16 + 0x78ac) = 0;
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 0x18);
          temp_v13 = 0;
          do {
            temp_v26 = temp_v13 & 0xffff;
            FUN_003e503c();
            temp_v7 = temp_v13 + 0x19;
            if (temp_v7 >= 0x25) {
              temp_v7 = 0x24;
            }
            temp_v16 = FUN_00187168();
            if (temp_v16 != 0) {
              temp_v26 = *(unsigned int *)(temp_v26 + 0x30);
              temp_v7 = temp_v6 + temp_v7 * 0x28;
              *(unsigned int *)(temp_v7 + 0x7884) = temp_v26 >> 0x14;
              *(unsigned int *)(temp_v7 + 0x7880) = temp_v26 << 0xc;
            }
            else {
              temp_v7 = temp_v6 + temp_v7 * 0x28;
              *(unsigned int *)(temp_v7 + 0x7880) = 0;
              *(unsigned int *)(temp_v7 + 0x7884) = 0;
            }
            temp_v13 = temp_v13 + 1;
          } while ((int)temp_v13 < 0xc);
          FUN_00240674(temp_v6);
          piVar25 = (int *)(temp_v6 + 0x74bc);
          *piVar25 = 0;
          *(unsigned int *)(temp_v6 + 0x74c0) = 0;
          qsort(temp_v42,0x25,0x150,FUN_002f8ba4);
          temp_v7 = 0;
          do {
            if (*(char *)(temp_v6 + temp_v7 * 0x150 + 0x442c) == '\x7f') break;
            temp_v7 = temp_v7 + 1;
            *piVar25 = *piVar25 + 1;
          } while (temp_v7 < 0x25);
          if ((*(char *)(temp_v48 + 0x48) == '\0') && (*piVar25 != 0)) {
            eventQueueAddUnique(0x100021e);
          }
          FUN_0020b490(temp_v6,7);
        }
        break;
      }
    }
    temp_v13 = 1;
    temp_v7 = 0;
    temp_v16 = 0x25;
    temp_v38 = 1;
    do {
      temp_v16 = temp_v16 - 1;
      temp_v27 = temp_v6 + temp_v7 * 0x28;
      *(unsigned short *)(temp_v27 + 0x788a) = 0;
      *(unsigned char *)(temp_v27 + 0x788e) = 0;
      temp_v7 = temp_v7 + 1;
      *(unsigned short *)(temp_v27 + 0x788c) = 0x1e;
      if (temp_v16 == 0) goto LAB_0020524c;
    } while( 1 );
  case 6:
    FUN_00163aa4();
    FUN_00163aa4(temp_v6 + 0x4134);
    if (*(char *)(temp_v6 + 0x4132) != '\0') {
      temp_v7 = 0;
      do {
        if (temp_v7 * 3 < *(int *)(temp_v6 + 0x43ec)) {
          FUN_00163aa4(temp_v6 + temp_v7 * 0x8c + 0x41c0);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      *(int *)(temp_v6 + 0x43ec) = *(int *)(temp_v6 + 0x43ec) + 1;
    }
    FUN_00224880(*(unsigned int *)(temp_v6 + 0x43a0));
    temp_v7 = 9;
    FUN_001517b4(9,1);
    if (temp_v7 == 0) {
      temp_v7 = 0;
      FUN_001517b4(0,1);
      if (temp_v7 == 0) break;
    }
    obj04Finish();
    FUN_0020b490(temp_v6,7);
    break;
  case 7:
    FUN_00217358(temp_v6);
    FUN_00163aa4();
    FUN_00163aa4(temp_v6 + 0x4134);
    if (*(char *)(temp_v6 + 0x4132) != '\0') {
      temp_v7 = 0;
      do {
        if (temp_v7 * 3 < *(int *)(temp_v6 + 0x43ec)) {
          FUN_00163aa4(temp_v6 + temp_v7 * 0x8c + 0x41c0);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      *(int *)(temp_v6 + 0x43ec) = *(int *)(temp_v6 + 0x43ec) + 1;
    }
    temp_v7 = 0;
    FUN_001517b4(0,1);
    if (((temp_v7 != 0) || ((*(char *)(temp_v6 + 0x7f50) != '\0' && (*(int *)(temp_v6 + 0x4368) == 6))))
       || ((*(char *)(temp_v6 + 0x7f50) != '\0' && (*(int *)(temp_v6 + 0x437c) >= 0x1f)))) {
      temp_v7 = dialogIsActive();
      if (temp_v7 != 0) {
        dialogClose(1);
      }
      temp_v7 = 0;
      do {
        temp_v16 = temp_v6 + temp_v7 * 4;
        temp_v27 = *(int *)(temp_v16 + 0x43f0);
        if (temp_v27 != 0) {
          flagValueAdd(temp_v27,*(unsigned int *)(temp_v16 + 0x4408));
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 6);
      FUN_0020b490(temp_v6,8);
      uiSpriteSetKeyframe(temp_v6 + 0x20,1,0);
      temp_v7 = 0;
      do {
        uiSpriteSetKeyframe(temp_v6 + temp_v7 * 0x8c + 0xac,1,0);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 8);
      FUN_00388758(1);
      eventQueueAddUniqueIfValid(0x100020e);
    }
    break;
  case 8:
    FUN_00163aa4(temp_v6 + 0x20);
    temp_v7 = 0;
    do {
      FUN_00163aa4(temp_v6 + temp_v7 * 0x8c + 0xac);
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    if (*(char *)(temp_v6 + 0xaa) != '\0') {
      temp_v7 = gameGetSlotTable();
      FUN_0038b3f8(0xffffffff,1);
      temp_v16 = 0;
      do {
        if (-1 < *(char *)(temp_v7 + temp_v16 + 0x1ca0)) {
          temp_v27 = gameGetSlotRecord();
          FUN_0038b3f8((int)*(short *)(temp_v27 + 0x62),1);
        }
        temp_v16 = temp_v16 + 1;
      } while (temp_v16 < 3);
      if (*(int *)(temp_v6 + 0x74bc) != *(int *)(temp_v6 + 0x74c0)) {
        FUN_002c8538(1);
        FUN_00215bd0();
        FUN_0020b490(temp_v6,10);
        soundChannelStopAll(0xf);
        temp_v11 = 0x1000078;
        soundChannelRequestIfEnabled(temp_v11,0,0x3c);
        break;
      }
      FUN_0020b490(temp_v6,0x17);
    }
    break;
  case 10:
    temp_v7 = FUN_0023b3d0();
    if (temp_v7 != 0) {
      piVar25 = (int *)(temp_v6 + 0x74c0);
      temp_v7 = (int)*(char *)(temp_v6 + *piVar25 * 0x150 + 0x442c);
      if (temp_v7 != -1) {
        if (temp_v7 >= 0x19) {
          temp_v13 = temp_v7 - 0x19;
          if ((int)temp_v13 < 0) {
            temp_v13 = 0;
          }
          temp_v13 = temp_v13 & 0xffff;
          FUN_003e503c(temp_v13);
          FUN_002c85b0(7);
          FUN_0033449c(1);
          FUN_0037e0d0(temp_v6 + *piVar25 * 0x150 + 0x4430,0);
          FUN_0037e12c(temp_v13,0);
          FUN_002a7324(1);
          FUN_0020b490(temp_v6,0x14);
        }
        else {
          FUN_002c85b0(6);
          FUN_0033449c(1);
          FUN_00334214(temp_v6 + *piVar25 * 0x150 + 0x4430,0,0);
          temp_v11 = gameGetSlotRecord(temp_v7);
          objBInitBlock19D0(temp_v11,0);
          FUN_002a7324(1);
          FUN_0020b490(temp_v6,0xc);
        }
      }
      else {
        FUN_002c85b0(5);
        FUN_0033449c(1);
        FUN_003720a0(temp_v6 + *piVar25 * 0x150 + 0x4430,0);
        temp_v11 = gameGetPlayerData();
        FUN_00372100(temp_v11,0);
        FUN_002a7324(1);
        FUN_0020b490(temp_v6,0xb);
        FUN_00203b40(temp_v6 + 0x7560,5,5,1,0,1);
      }
    }
    break;
  case 0xb:
    FUN_002c9a8c(temp_v6);
    break;
  case 0xc:
    temp_v16 = temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150;
    temp_v7 = gameGetSlotRecord((int)*(char *)(temp_v16 + 0x442c));
    switch(*(unsigned int *)(temp_v6 + 0x436c)) {
    case 0:
      btlTalkBustUpCreate();
      FUN_00333dc8(1);
      FUN_003343f0(1);
      temp_v13 = (unsigned int)*(unsigned short *)(temp_v7 + 0x62);
      FUN_00180118(temp_v13);
      libc_strcpy(temp_v39,temp_v13);
      FUN_003180c4(8,temp_v39);
      temp_v11 = FUN_0014bf3c(*(unsigned short *)(temp_v7 + 0x62),0);
      libc_strcpy(temp_v39,temp_v11);
      FUN_003180c4(0x10,temp_v39);
      temp_v13 = (unsigned int)*(unsigned short *)(temp_v7 + 0x62);
      FUN_00184310();
      temp_v0 = *(char *)(temp_v13 + 0x38);
      temp_v11 = dataTableGet(0x25,0);
      pcVar26 = (char *)dataTableGetEntries();
      temp_v13 = dataTableGetCount(temp_v11);
      temp_v26 = 0;
      if (temp_v13 != 0) {
        do {
          if (*pcVar26 == temp_v0) goto LAB_00206230;
          temp_v26 = temp_v26 + 1;
          pcVar26 = pcVar26 + 0x20;
          if (temp_v26 >= temp_v13) break;
        } while( 1 );
      }
      pcVar26 = (char *)0x0;
LAB_00206230:
      FUN_00100388(&temp_v49,&LAB_0020658c,pcVar26 + 1);
      ppcVar15 = &temp_v49;
      FUN_0020214c();
      *(char ***)(temp_v6 + 0x43b0) = ppcVar15;
      temp_v11 = *(unsigned int *)(temp_v6 + 0x43a8);
      FUN_00275bc8(temp_v11,ppcVar15);
      *(unsigned int *)(temp_v6 + 0x43ac) = temp_v11;
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v7 + 100) - (unsigned int)*(unsigned short *)(temp_v16 + 0x4494);
      *(int *)(temp_v6 + 0x7538) = temp_v7;
      FUN_00359974(0x18,temp_v7,0xffffffff,0);
      *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      DAT_00588c40 = '\0';
      temp_v24 = *(short *)(temp_v16 + 0x4566);
      temp_v13 = (unsigned int)(*(short *)(temp_v16 + 0x4564) != 0);
      temp_v7 = 0;
      temp_v27 = 3;
      psVar12 = (short *)(temp_v16 + 0x4564);
      do {
        if (temp_v24 != 0) {
          temp_v13 = temp_v13 + 1;
        }
        temp_v24 = psVar12[3];
        if (psVar12[2] != 0) {
          temp_v7 = temp_v7 + 1;
        }
        temp_v27 = temp_v27 - 1;
        psVar12 = psVar12 + 2;
      } while (temp_v27 != 0);
      temp_v7 = temp_v13 + temp_v7;
      if (*(short *)(temp_v16 + 0x4572) != 0) {
        temp_v7 = temp_v7 + 1;
      }
      if (0 < temp_v7) {
        DAT_00588c40 = '\x01';
      }
    case 1:
      temp_v7 = FUN_0022e750();
      if ((temp_v7 != 0) && (temp_v7 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43a0),2), temp_v7 != 0)) {
        if (DAT_00588c40 == '\0') {
          temp_v11 = 2;
        }
        else {
          temp_v11 = 0;
        }
        *(unsigned int *)(temp_v6 + 0x7f54) = temp_v11;
        FUN_00333dc8(0);
        *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      }
      break;
    case 2:
      if (*(char *)(temp_v6 + 0x7f50) == '\0') {
        temp_v7 = 0;
        FUN_001517b4(0,1);
        if (temp_v7 == 0) break;
      }
      FUN_00333dc8(1);
      FUN_003343f0(0);
      temp_v13 = 0;
      temp_v7 = 3;
      psVar12 = temp_v39;
      *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      temp_v24 = *(short *)(temp_v16 + 0x4564);
      if (temp_v24 != 0) {
        temp_v39[0] = temp_v24;
      }
      temp_v23 = *(short *)(temp_v16 + 0x4566);
      psVar16 = (short *)(temp_v16 + 0x4564);
      if (temp_v24 != 0) {
        temp_v13 = 1;
      }
      do {
        temp_v24 = psVar16[2];
        if (temp_v23 != 0) {
          psVar31 = psVar12 + temp_v13;
          temp_v13 = (unsigned int)(char)((char)temp_v13 + '\x01');
          *psVar31 = temp_v23;
        }
        temp_v23 = psVar16[3];
        if (temp_v24 != 0) {
          psVar31 = psVar12 + temp_v13;
          temp_v13 = (unsigned int)(char)((char)temp_v13 + '\x01');
          *psVar31 = temp_v24;
        }
        temp_v7 = temp_v7 - 1;
        psVar16 = psVar16 + 2;
      } while (temp_v7 != 0);
      temp_v24 = *(short *)(temp_v16 + 0x4572);
      if (temp_v24 != 0) {
        psVar16 = psVar12 + temp_v13;
        temp_v13 = (unsigned int)(char)((char)temp_v13 + '\x01');
        *psVar16 = temp_v24;
      }
      FUN_00371e54(psVar12,temp_v13);
      break;
    case 3:
      FUN_0033449c(0);
      FUN_00334214(temp_v7,0,0);
      temp_v8 = 0;
      temp_v24 = *(short *)(temp_v16 + 0x4566);
      temp_v13 = (unsigned int)(*(short *)(temp_v16 + 0x4564) != 0);
      temp_v27 = 3;
      psVar12 = (short *)(temp_v16 + 0x4564);
      do {
        if (temp_v24 != 0) {
          temp_v13 = temp_v13 + 1;
        }
        temp_v24 = psVar12[3];
        if (psVar12[2] != 0) {
          temp_v8 = temp_v8 + 1;
        }
        temp_v27 = temp_v27 - 1;
        psVar12 = psVar12 + 2;
      } while (temp_v27 != 0);
      temp_v8 = temp_v13 + temp_v8;
      if (*(short *)(temp_v16 + 0x4572) != 0) {
        temp_v8 = temp_v8 + 1;
      }
      if (0 < temp_v8) {
        temp_v16 = 0;
        temp_v13 = getUnlockedSlotCount(temp_v7);
        if (0 < (int)(temp_v13 - 1)) {
          psVar12 = (short *)(temp_v7 + 0x32);
          if (((temp_v13 & 1) == 0) && (psVar12 = (short *)(temp_v7 + 0x34), *psVar12 == 0)) {
            temp_v16 = 1;
          }
          temp_v24 = psVar12[1];
          temp_v8 = 0;
          for (temp_v27 = (int)(temp_v13 - 1) >> 1; temp_v27 != 0; temp_v27 = temp_v27 - 1) {
            if (temp_v24 == 0) {
              temp_v16 = temp_v16 + 1;
            }
            temp_v24 = psVar12[3];
            if (psVar12[2] == 0) {
              temp_v8 = temp_v8 + 1;
            }
            psVar12 = psVar12 + 2;
          }
          temp_v16 = temp_v16 + temp_v8;
        }
        if ((-1 < (int)(temp_v13 - 1)) && (*(short *)(temp_v7 + (temp_v13 - 1) * 2 + 0x34) == 0)) {
          temp_v16 = temp_v16 + 1;
        }
        if (temp_v16 >= 1) {
          FUN_0020b490(temp_v6,0xe);
        }
        else {
          FUN_0020b490(temp_v6,0xf);
        }
      }
      else {
        FUN_0019de98(0,0xf4f4f4ff);
        temp_v0 = *(char *)((int)*(char *)(temp_v16 + 0x442c) + temp_v6 + 0x74c4);
        if (temp_v0 != '\0') {
          FUN_0022e774();
          *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
        }
        else {
          *(unsigned int *)(temp_v6 + 0x436c) = 10;
        }
      }
      break;
    case 4:
      temp_v16 = FUN_0026c3a0();
      if (temp_v16 != 0) {
        temp_v16 = FUN_0032169c();
        if (temp_v16 == 0) {
          FUN_00336de4(*(unsigned short *)(temp_v7 + 0x62),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),7);
        *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      }
      break;
    case 5:
      temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
joined_r0x002080f4:
      if (temp_v7 == 2) {
        temp_v7 = 10;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
      break;
    case 10:
      FUN_00333dc8(0);
      FUN_003a62e8(temp_v7);
      if (*(char *)(temp_v16 + 0x4579) == '\0') {
        if (*(char *)(temp_v16 + 0x4578) == '\0') {
          if (*(int *)(temp_v16 + 0x4574) == 1) {
            temp_v0 = *(char *)(temp_v16 + 0x457a);
joined_r0x002075ac:
            if (temp_v0 != '\0') {
              FUN_0020b490(temp_v6,0x11);
            }
            else {
              FUN_002a7288();
              roundObjFinish(temp_v6);
            }
          }
          else {
            FUN_0020b490(temp_v6,0xd);
          }
        }
        else {
          FUN_0020b490(temp_v6,0x12);
        }
      }
      else {
        FUN_0020b490(temp_v6,0x10);
      }
    }
    break;
  case 0xd:
    FUN_002f5064(temp_v6);
    break;
  case 0xe:
    piVar25 = (int *)(temp_v6 + 0x74c0);
    temp_v16 = temp_v6 + *piVar25 * 0x150;
    pcVar26 = (char *)(temp_v16 + 0x442c);
    temp_v7 = gameGetSlotRecord((int)*pcVar26);
    switch(*(unsigned int *)(temp_v6 + 0x436c)) {
    case 0:
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),5);
      temp_v16 = FUN_0035fd00(*(unsigned short *)(temp_v7 + 0x62));
      if (temp_v16 == 0) {
        FUN_00336de4(*(unsigned short *)(temp_v7 + 0x62),1);
      }
      btlTalkBustUpSetUnk2F4(0);
      temp_v7 = 2;
      *(int *)(temp_v6 + 0x436c) = temp_v7;
      break;
    case 2:
      FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
      FUN_00371ef4();
      FUN_003d2150(0x1000219);
      *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      break;
    case 3:
      FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
      temp_v27 = stateHolderStateIsNot4();
      if (temp_v27 != 0) {
        temp_v27 = 0;
        temp_v13 = getUnlockedSlotCount(temp_v7);
        if (0 < (int)temp_v13) {
          do {
            if (*(short *)(temp_v7 + temp_v27 * 2 + 0x34) == 0) {
              FUN_004bd6b0(temp_v7,*(unsigned short *)(temp_v16 + 0x4564),temp_v27);
              break;
            }
            temp_v27 = temp_v27 + 1;
          } while (temp_v27 < (int)temp_v13);
        }
        temp_v27 = 0;
        *(unsigned short *)(temp_v16 + 0x4564) = 0;
        do {
          if (0 < 7 - temp_v27) {
            temp_v8 = 0;
            temp_v9 = 7 - temp_v27;
            do {
              temp_v10 = temp_v27 + temp_v8;
              if ((*(short *)(pcVar26 + temp_v10 * 2 + 0x138) == 0) &&
                 (*(short *)(pcVar26 + temp_v10 * 2 + 0x13a) != 0)) {
                *(short *)(pcVar26 + temp_v10 * 2 + 0x138) = *(short *)(pcVar26 + temp_v10 * 2 + 0x13a);
                (pcVar26 + temp_v10 * 2 + 0x13a)[0] = '\0';
                (pcVar26 + temp_v10 * 2 + 0x13a)[1] = '\0';
              }
              temp_v9 = temp_v9 - 1;
              temp_v8 = temp_v8 + 1;
            } while (temp_v9 != 0);
          }
          temp_v27 = temp_v27 + 1;
        } while (temp_v27 < 7);
        temp_v8 = 3;
        temp_v24 = *(short *)(temp_v16 + 0x4566);
        temp_v26 = (unsigned int)(*(short *)(temp_v16 + 0x4564) != 0);
        temp_v27 = 0;
        psVar12 = (short *)(temp_v16 + 0x4564);
        do {
          if (temp_v24 != 0) {
            temp_v26 = temp_v26 + 1;
          }
          temp_v24 = psVar12[3];
          if (psVar12[2] != 0) {
            temp_v27 = temp_v27 + 1;
          }
          temp_v8 = temp_v8 - 1;
          psVar12 = psVar12 + 2;
        } while (temp_v8 != 0);
        temp_v27 = temp_v26 + temp_v27;
        if (*(short *)(temp_v16 + 0x4572) != 0) {
          temp_v27 = temp_v27 + 1;
        }
        FUN_004bcd90(temp_v7);
        if (temp_v27 >= 1) {
          temp_v16 = 0;
          if (0 < (int)(temp_v13 - 1)) {
            psVar12 = (short *)(temp_v7 + 0x32);
            if (((temp_v13 & 1) == 0) && (psVar12 = (short *)(temp_v7 + 0x34), *psVar12 == 0)) {
              temp_v16 = 1;
            }
            temp_v24 = psVar12[1];
            temp_v8 = 0;
            for (temp_v27 = (int)(temp_v13 - 1) >> 1; temp_v27 != 0; temp_v27 = temp_v27 - 1) {
              if (temp_v24 == 0) {
                temp_v16 = temp_v16 + 1;
              }
              temp_v24 = psVar12[3];
              if (psVar12[2] == 0) {
                temp_v8 = temp_v8 + 1;
              }
              psVar12 = psVar12 + 2;
            }
            temp_v16 = temp_v16 + temp_v8;
          }
          if ((-1 < (int)(temp_v13 - 1)) && (*(short *)(temp_v7 + (temp_v13 - 1) * 2 + 0x34) == 0)) {
            temp_v16 = temp_v16 + 1;
          }
          if (temp_v16 >= 1) {
            *(unsigned int *)(temp_v6 + 0x436c) = 2;
          }
          else {
            FUN_0020b490(temp_v6,0xf);
          }
        }
        else {
          FUN_0034a968();
          sysPlaySe(0xe2);
          *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
          *(unsigned int *)(temp_v6 + 0x7f54) = 2;
          FUN_00333dc8(0);
        }
        FUN_002a6894(temp_v7);
      }
      break;
    case 4:
      if (*(char *)(temp_v6 + 0x7f50) == '\0') {
        temp_v27 = 0;
        FUN_001517b4(0,1);
        if (temp_v27 == 0) break;
      }
      obj04Finish();
      FUN_0019de98(0,0xf4f4f4ff);
      FUN_003a62e8(temp_v7);
      if (*(char *)(temp_v16 + 0x4579) != '\0') {
        FUN_0020b490(temp_v6,0x10);
      }
      else if (*(char *)(temp_v16 + 0x4578) != '\0') {
        FUN_0020b490(temp_v6,0x12);
      }
      else if (*(int *)(temp_v16 + 0x4574) != 1) {
        FUN_0020b490(temp_v6,0xd);
      }
      else if (*(char *)(temp_v16 + 0x457a) != '\0') {
        FUN_0020b490(temp_v6,0x11);
      }
      else {
        FUN_002a7288();
        temp_v7 = roundObjFinish(temp_v6);
        if (temp_v7 != 0) {
          *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
        }
      }
      eventQueueAddUniqueIfValid(0x100020e);
      break;
    case 5:
      temp_v7 = FUN_0023b3d0();
      if (temp_v7 != 0) {
        FUN_0033449c(1);
        FUN_00334214(temp_v6 + *piVar25 * 0x150 + 0x4430,0,0);
        temp_v11 = gameGetSlotRecord((int)*(char *)(temp_v6 + *piVar25 * 0x150 + 0x442c));
        objBInitBlock19D0(temp_v11,0);
        FUN_002a7324(1);
        FUN_0020b490(temp_v6,0xc);
      }
    }
    break;
  case 0xf:
    piVar25 = (int *)(temp_v6 + 0x74c0);
    temp_v7 = temp_v6 + *piVar25 * 0x150;
    pcVar26 = (char *)(temp_v7 + 0x442c);
    temp_v13 = gameGetSlotRecord((int)*pcVar26);
    switch(*(unsigned int *)(temp_v6 + 0x436c)) {
    case 0:
    case 1:
    case 2:
      temp_v7 = FUN_0035fd00(*(unsigned short *)(temp_v13 + 0x62));
      if (temp_v7 == 0) {
        FUN_00336de4(*(unsigned short *)(temp_v13 + 0x62),1);
      }
      btlTalkBustUpSetUnk2F4(*(int *)(temp_v6 + 0x4368) == 0xd);
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),6);
      FUN_0039c448();
      FUN_00333dc8(0);
      sysPlaySe(0x69);
      temp_v7 = 6;
      *(int *)(temp_v6 + 0x436c) = temp_v7;
      break;
    case 3:
      temp_v16 = stateHolderStateIs0xD();
      if (temp_v16 != 0) {
        temp_v9 = 0;
        temp_v8 = 0;
        temp_v16 = getUnlockedSlotCount(temp_v13);
        temp_v27 = FUN_003a7b74();
        if (temp_v27 < temp_v16) {
          FUN_004bd6b0(temp_v13,*(unsigned short *)(temp_v7 + 0x4564));
        }
        *(unsigned short *)(temp_v7 + 0x4564) = 0;
        do {
          if (0 < 7 - temp_v9) {
            temp_v16 = 0;
            temp_v27 = 7 - temp_v9;
            do {
              temp_v10 = temp_v9 + temp_v16;
              if ((*(short *)(pcVar26 + temp_v10 * 2 + 0x138) == 0) &&
                 (*(short *)(pcVar26 + temp_v10 * 2 + 0x13a) != 0)) {
                *(short *)(pcVar26 + temp_v10 * 2 + 0x138) = *(short *)(pcVar26 + temp_v10 * 2 + 0x13a);
                (pcVar26 + temp_v10 * 2 + 0x13a)[0] = '\0';
                (pcVar26 + temp_v10 * 2 + 0x13a)[1] = '\0';
              }
              temp_v27 = temp_v27 - 1;
              temp_v16 = temp_v16 + 1;
            } while (temp_v27 != 0);
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 7);
        temp_v16 = 0;
        temp_v27 = 3;
        temp_v24 = *(short *)(temp_v7 + 0x4566);
        psVar12 = (short *)(temp_v7 + 0x4564);
        if (*(short *)(temp_v7 + 0x4564) != 0) {
          temp_v8 = 1;
        }
        do {
          if (temp_v24 != 0) {
            temp_v8 = temp_v8 + 1;
          }
          temp_v24 = psVar12[3];
          if (psVar12[2] != 0) {
            temp_v16 = temp_v16 + 1;
          }
          temp_v27 = temp_v27 - 1;
          psVar12 = psVar12 + 2;
        } while (temp_v27 != 0);
        temp_v8 = temp_v8 + temp_v16;
        if (*(short *)(temp_v7 + 0x4572) != 0) {
          temp_v8 = temp_v8 + 1;
        }
        if (temp_v8 >= 1) {
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),6);
          FUN_0039c448();
          temp_v7 = 6;
        }
        else {
          FUN_0037e078();
          temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
        }
        *(int *)(temp_v6 + 0x436c) = temp_v7;
        FUN_00333dc8(0);
        FUN_004bcd90(temp_v13);
        FUN_002a6894(temp_v13);
      }
      break;
    case 4:
      temp_v16 = FUN_0026272c();
      if (temp_v16 != 0) {
        if (*(char *)(temp_v6 + 0x7f2c) != '\0') {
          FUN_002a5e7c(*(unsigned short *)(temp_v13 + 0x62));
          *(unsigned char *)(temp_v6 + 0x7f2c) = 0;
        }
        FUN_0019de98(0,0xf4f4f4ff);
        if (*(int *)(temp_v6 + 0x4368) != 0xd) {
          FUN_003a62e8(temp_v13);
          if (*(char *)(temp_v7 + 0x4579) != '\0') {
            FUN_0020b490(temp_v6,0x10);
            break;
          }
          if (*(char *)(temp_v7 + 0x4578) != '\0') {
            FUN_0020b490(temp_v6,0x12);
            break;
          }
          if (*(int *)(temp_v7 + 0x4574) != 1) {
            FUN_0020b490(temp_v6,0xd);
            break;
          }
          if (*(char *)(temp_v7 + 0x457a) != '\0') {
            FUN_0020b490(temp_v6,0x11);
            break;
          }
          FUN_002a7288();
          temp_v7 = roundObjFinish(temp_v6);
        }
        else {
          FUN_002a7288();
          temp_v7 = roundObjFinish(temp_v6);
        }
        if (temp_v7 != 0) {
          temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
        }
      }
      break;
    case 5:
      temp_v7 = FUN_0023b3d0();
      if (temp_v7 != 0) {
        FUN_0033449c(1);
        FUN_00334214(temp_v6 + *piVar25 * 0x150 + 0x4430,0,0);
        temp_v11 = gameGetSlotRecord((int)*(char *)(temp_v6 + *piVar25 * 0x150 + 0x442c));
        objBInitBlock19D0(temp_v11,0);
        FUN_002a7324(1);
        FUN_003a62e8(temp_v13);
        FUN_0020b490(temp_v6,0xc);
      }
      break;
    case 6:
      FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
      temp_v7 = stateHolderStateIs8Or10();
      if (temp_v7 != 0) {
        obj04Finish();
        sysPlaySe(0x9c);
        temp_v7 = 7;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
      break;
    case 7:
      temp_v7 = FUN_0026272c();
      if (temp_v7 != 0) {
        temp_v7 = FUN_003a7b74();
        temp_v16 = stateHolderCountMinus1();
        if (temp_v7 == temp_v16) {
          temp_v11 = 10;
        }
        else {
          temp_v11 = 9;
        }
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43a0),temp_v11);
        temp_v7 = 8;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
      break;
    case 8:
      temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43a0));
      if (temp_v7 == 2) {
        FUN_00333dc8(0);
        temp_v7 = FUN_002a4b74();
        if (temp_v7 != 0) {
          *(unsigned int *)(temp_v6 + 0x436c) = 6;
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),6);
          stateHolderEnterState7();
          sysPlaySe(0x69);
        }
        else {
          FUN_003b0744();
          *(unsigned int *)(temp_v6 + 0x436c) = 3;
          temp_v11 = 0x69;
          sysPlaySe(temp_v11);
        }
      }
    }
    break;
  case 0x10:
    temp_v27 = temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150;
    temp_v7 = gameGetSlotRecord((int)*(char *)(temp_v27 + 0x442c));
    temp_v16 = *(int *)(temp_v6 + 0x436c);
    if (temp_v16 == 10) {
      temp_v7 = FUN_0035988c(*(unsigned int *)(temp_v6 + 0x75d8));
      goto joined_r0x002073c8;
    }
    if (9 >= temp_v16) {
      switch(temp_v16) {
      case 0:
        temp_v16 = temp_v7 + 0x34;
        FUN_003f391c();
        *(int *)(temp_v6 + 0x75c8) = temp_v16;
        temp_v27 = temp_v7 + 0x34;
        FUN_003f36a4(temp_v27,temp_v16,*(unsigned short *)(temp_v7 + 0x62));
        *(int *)(temp_v6 + 0x75cc) = temp_v27;
        if (temp_v27 == 0) {
          temp_v7 = 100;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
          break;
        }
        FUN_0023acdc((int)(short)temp_v27);
        FUN_0022e774();
        temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
        break;
      case 1:
        temp_v16 = FUN_0026c3a0();
        if (temp_v16 != 0) {
          temp_v16 = FUN_0032169c();
          if (temp_v16 == 0) {
            FUN_00336de4(*(unsigned short *)(temp_v7 + 0x62),1);
            btlTalkBustUpSetUnk2F4(1);
          }
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),8);
          FUN_0037dfb0(*(unsigned int *)(temp_v6 + 0x75c8),*(unsigned int *)(temp_v6 + 0x75cc));
          *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
          *(unsigned int *)(temp_v6 + 0x437c) = 0;
        }
        break;
      case 2:
        FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
        if (*(int *)(temp_v6 + 0x437c) >= 0x21) {
          temp_v7 = 0;
          FUN_001517b4(0,1);
          if ((temp_v7 != 0) || (temp_v7 = FUN_00371e38(), temp_v7 != 0)) {
            temp_v7 = statusDownGetCursorPosition();
            if ((temp_v7 != *(int *)(temp_v6 + 0x75c8)) && (temp_v7 = FUN_0037df64(), temp_v7 == 0)) {
              temp_v11 = 0x100020f;
              eventQueueAddUniqueIfValid(temp_v11);
            }
            else {
              FUN_00333dc8(1);
              obj04Finish();
              sysPlaySe(0x9c);
              scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43a0),7);
              temp_v11 = FUN_003d2150(0x100020e);
              *(unsigned int *)(temp_v6 + 0x75d8) = temp_v11;
              *(unsigned int *)(temp_v6 + 0x436c) = 0x14;
            }
          }
          else {
            temp_v7 = 10;
            FUN_001517b4(10,1);
            if (temp_v7 != 0) {
              FUN_00333dc8(1);
              obj04Finish();
              sysPlaySe(0x9c);
              scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43a0),8);
              temp_v11 = FUN_003d2150(0x100020f);
              *(unsigned int *)(temp_v6 + 0x75d8) = temp_v11;
              *(unsigned int *)(temp_v6 + 0x436c) = 0x15;
            }
          }
        }
        break;
      case 3:
        temp_v7 = FUN_0035988c(*(unsigned int *)(temp_v6 + 0x75d8));
joined_r0x002073c8:
        if (temp_v7 == 0) {
          temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
        }
        break;
      case 4:
        temp_v16 = FUN_0026272c();
        if (temp_v16 != 0) {
          FUN_00333dc8(1);
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),10);
          FUN_0015f490(*(unsigned short *)(temp_v7 + 0x62),9,1,0);
          temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
        }
        break;
      case 5:
        temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
        if (temp_v7 == 2) {
          statusDownEnterState11(1);
          eventQueueAddUnique(0x100021a);
          temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
        }
        break;
      case 6:
        temp_v16 = stateHolderStateIs0x12();
        if (temp_v16 != 0) {
          FUN_00333dc8(0);
          *(short *)(temp_v7 + *(int *)(temp_v6 + 0x75c8) * 2 + 0x34) =
               (short)*(unsigned int *)(temp_v6 + 0x75cc);
          FUN_0026c3c4(temp_v7 + 0x34);
          temp_v7 = 99;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
        }
      }
    }
    else if (temp_v16 != 0x15) {
      if (temp_v16 < 0x15) {
        if (temp_v16 != 0xb) {
          if (temp_v16 != 0xc) {
            if ((temp_v16 == 0x14) &&
               (temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43a0)), temp_v7 == 2)) {
              FUN_00333dc8(0);
              temp_v7 = FUN_002a4b74();
              if (temp_v7 == 0) {
                *(unsigned int *)(temp_v6 + 0x436c) = 3;
                temp_v11 = 0x67;
              }
              else {
                *(unsigned int *)(temp_v6 + 0x436c) = 10;
                temp_v11 = 0x67;
              }
              sysPlaySe(temp_v11);
            }
          }
          else {
            temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
            if ((temp_v7 == 2) && (temp_v7 = stateHolderStateIs0x12(), temp_v7 != 0)) {
              FUN_00333dc8(0);
              temp_v7 = 100;
              *(int *)(temp_v6 + 0x436c) = temp_v7;
            }
          }
        }
        else {
          temp_v16 = FUN_0026272c();
          if (temp_v16 != 0) {
            FUN_00333dc8(1);
            scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),0xb);
            FUN_0015f490(*(unsigned short *)(temp_v7 + 0x62),1,1,0);
            statusDownEnterState11(0);
            temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
            *(int *)(temp_v6 + 0x436c) = temp_v7;
          }
        }
      }
      else if (temp_v16 != 0x16) {
        if (temp_v16 == 99) {
          temp_v7 = 100;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
          break;
        }
        if (temp_v16 == 100) {
          FUN_00333dc8(0);
          FUN_004bcd90(temp_v7);
          if (*(char *)(temp_v27 + 0x4578) != '\0') {
            FUN_0020b490(temp_v6,0x12);
            break;
          }
          if (*(int *)(temp_v27 + 0x4574) == 1) {
            temp_v0 = *(char *)(temp_v27 + 0x457a);
            goto joined_r0x002075ac;
          }
          FUN_00387ac4(0);
          FUN_0020b490(temp_v6,0xd);
        }
      }
    }
    else {
      temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43a0));
      if (temp_v7 == 2) {
        FUN_00333dc8(0);
        temp_v7 = FUN_002a4b74();
        if (temp_v7 != 0) {
          *(unsigned int *)(temp_v6 + 0x436c) = 2;
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),8);
          temp_v11 = 0x6a;
          sysPlaySe(temp_v11);
          break;
        }
        *(unsigned int *)(temp_v6 + 0x436c) = 10;
        temp_v11 = 0x67;
        sysPlaySe(temp_v11);
      }
    }
    break;
  case 0x11:
    temp_v7 = gameGetSlotRecord((int)*(char *)(temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150 + 0x442c));
    temp_v16 = *(int *)(temp_v6 + 0x436c);
    if (temp_v16 == 0) {
      temp_v11 = FUN_003f3104(temp_v7);
      *(unsigned int *)(temp_v6 + 0x75d0) = temp_v11;
      FUN_0022e774();
      FUN_002a7288();
      temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
      *(int *)(temp_v6 + 0x436c) = temp_v7;
      break;
    }
    if (temp_v16 != 1) {
      if ((temp_v16 == 2) && (temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac)), temp_v7 == 2)) {
        FUN_002a7288();
        roundObjFinish(temp_v6);
      }
    }
    else {
      temp_v16 = FUN_0026c3a0();
      if ((temp_v16 != 0) && (temp_v16 = FUN_002effbc(), temp_v16 != 0)) {
        temp_v16 = FUN_0032169c();
        if (temp_v16 == 0) {
          FUN_00336de4(*(unsigned short *)(temp_v7 + 0x62),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        temp_v11 = *(unsigned int *)(temp_v6 + 0x43ac);
        temp_v22 = 0xd;
        scrScriptProcessStartEntry(temp_v11,temp_v22);
        temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
    }
    break;
  case 0x12:
    FUN_0026cbb8(temp_v6);
    break;
  case 0x13:
    switch(*(unsigned int *)(temp_v6 + 0x436c)) {
    case 0:
      temp_v7 = gameFlagIsSet(0x408);
      if (temp_v7 == 0) {
        temp_v7 = 4;
      }
      else {
        temp_v7 = gameGetPlayerData();
        FUN_00359974(0x18,((unsigned int)*(unsigned short *)(temp_v7 + 0x62) -
                          (unsigned int)*(unsigned short *)(temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150 + 0x4492)) * 10
                     ,0xffffffff,0);
        uiSpriteSetKeyframe(temp_v6 + 0x6b0,0);
        temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
      }
      *(int *)(temp_v6 + 0x436c) = temp_v7;
    case 1:
      if (*(char *)(temp_v6 + 0x7f50) != '\0') {
        FUN_003e40b8(temp_v6 + 0x7f40,0);
      }
      FUN_00163aa4(temp_v6 + 0x6b0);
      if (*(char *)(temp_v6 + 0x73a) != '\0') {
        *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
        temp_v11 = FUN_003d2150(0x100021d);
        *(unsigned int *)(temp_v6 + 0x7e44) = temp_v11;
        *(unsigned char *)(temp_v6 + 0x7e49) = 1;
      }
      break;
    case 2:
      temp_v7 = FUN_002e5c2c();
      temp_v13 = temp_v7 - *(int *)(temp_v6 + 0x7e38);
      temp_v12 = (float)FUN_001b4874(temp_v13 * 0x1000,temp_v13 >> 0x14);
      if (*(char *)(temp_v6 + 0x7f50) == '\0') {
        temp_v34 = 1.0f;
      }
      else {
        FUN_003e40b8(temp_v6 + 0x7f40,0);
      }
      puVar29 = (unsigned int *)(temp_v6 + 0x7e3c);
      temp_v33 = (float)VectorUnsignedToFloat(*puVar29,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = VectorFloatToUnsigned(temp_v12 / (20.0f / temp_v34) + temp_v33,3);
      *puVar29 = temp_v13;
      temp_v13 = FUN_002e5c2c();
      temp_v26 = *puVar29;
      temp_v32 = temp_v13 * 0x1000 <= temp_v26;
      if (-(temp_v13 >> 0x14) < (unsigned int)temp_v32) {
        temp_v7 = FUN_002e5c2c(-((temp_v13 >> 0x14) + (unsigned int)!temp_v32),temp_v26 + temp_v13 * -0x1000);
        *puVar29 = temp_v7 << 0xc;
        if (*(char *)(temp_v6 + 0x7e49) != '\0') {
          FUN_003d2158(*(unsigned int *)(temp_v6 + 0x7e44),0);
          *(unsigned char *)(temp_v6 + 0x7e49) = 0;
        }
      }
      if (*(char *)(temp_v6 + 0x7f50) != '\0') {
        *(unsigned int *)(temp_v6 + 0x436c) = 5;
        FUN_003d2158(*(unsigned int *)(temp_v6 + 0x7e44),0);
        temp_v7 = FUN_002e5c2c();
        *puVar29 = temp_v7 << 0xc;
      }
      else {
        temp_v7 = 0;
        FUN_001517b4(0,1);
        if (temp_v7 != 0) {
          if (*(char *)(temp_v6 + 0x7e49) != '\0') {
            FUN_003d2158(*(unsigned int *)(temp_v6 + 0x7e44),0);
            *(unsigned char *)(temp_v6 + 0x7e49) = 0;
          }
          temp_v7 = FUN_002e5c2c();
          *puVar29 = temp_v7 << 0xc;
          uiSpriteSetKeyframe(temp_v6 + 0x6b0,1,0);
          temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
          *(int *)(temp_v6 + 0x436c) = temp_v7;
        }
      }
      break;
    case 3:
      if (*(char *)(temp_v6 + 0x7f50) != '\0') {
        FUN_003e40b8(temp_v6 + 0x7f40,0);
      }
      temp_v7 = FUN_00163aa4(temp_v6 + 0x6b0);
      if (temp_v7 != 0) {
        temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
      break;
    case 4:
      temp_v7 = FUN_0026272c();
      if (temp_v7 != 0) {
        piVar25 = (int *)(temp_v6 + 0x74c0);
        temp_v7 = *piVar25;
        *piVar25 = temp_v7 + 1;
        if (*(int *)(temp_v6 + 0x74bc) == temp_v7 + 1) {
          FUN_0020b490(temp_v6,0x17);
          break;
        }
        temp_v7 = gameGetSlotTable();
        temp_v27 = 0;
        temp_v16 = 0x19;
        pcVar26 = (char *)(temp_v7 + 0x1c88);
        do {
          if ((-1 < *pcVar26) && (*(char *)(temp_v6 + *pcVar26 * 0x28 + 0x78ba) != '\0')) {
            temp_v27 = temp_v27 + 1;
          }
          temp_v16 = temp_v16 - 1;
          pcVar26 = pcVar26 + 1;
        } while (temp_v16 != 0);
        if (temp_v27 >= 1) {
          FUN_002c85b0(6);
          FUN_0033449c(1);
          FUN_00334214(temp_v6 + *piVar25 * 0x150 + 0x4430,0,0);
          temp_v11 = gameGetSlotRecord((int)*(char *)(temp_v6 + *piVar25 * 0x150 + 0x442c));
          objBInitBlock19D0(temp_v11,0);
          FUN_002a7324(1);
          FUN_0020b490(temp_v6,0xc);
        }
        else {
          temp_v13 = (int)*(char *)(temp_v6 + *piVar25 * 0x150 + 0x442c) - 0x19;
          if ((int)temp_v13 < 0) {
            temp_v13 = 0;
          }
          temp_v13 = temp_v13 & 0xffff;
          FUN_003e503c(temp_v13);
          FUN_002c85b0(7);
          FUN_0033449c(1);
          FUN_0037e0d0(temp_v6 + *piVar25 * 0x150 + 0x4430,0);
          FUN_0037e12c(temp_v13,0);
          FUN_002a7324(1);
          FUN_0020b490(temp_v6,0x14);
        }
      }
      break;
    case 5:
      temp_v7 = 0;
      FUN_001517b4(0,1);
      if ((temp_v7 != 0) || (*(int *)(temp_v6 + 0x437c) >= 0xb)) {
        temp_v7 = 3;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
    }
    break;
  case 0x14:
    temp_v7 = temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150;
    temp_v13 = (int)*(char *)(temp_v7 + 0x442c) - 0x19;
    if ((int)temp_v13 < 0) {
      temp_v13 = 0;
    }
    temp_v13 = temp_v13 & 0xffff;
    FUN_003e503c();
    switch(*(unsigned int *)(temp_v6 + 0x436c)) {
    case 0:
      btlTalkBustUpCreate();
      FUN_00333dc8(1);
      FUN_003343f0(1);
      temp_v26 = (unsigned int)*(unsigned short *)(temp_v13 + 300);
      FUN_0016432c(temp_v26);
      libc_strcpy(&temp_v41,temp_v26);
      FUN_003180c4(8,&temp_v41);
      temp_v11 = FUN_0014bf3c(*(unsigned short *)(temp_v13 + 0x62),0);
      libc_strcpy(&temp_v41,temp_v11);
      FUN_003180c4(0x10,&temp_v41);
      temp_v26 = (unsigned int)*(unsigned short *)(temp_v13 + 0x62);
      FUN_00184310();
      temp_v0 = *(char *)(temp_v26 + 0x38);
      temp_v11 = dataTableGet(0x25,0);
      pcVar26 = (char *)dataTableGetEntries();
      temp_v26 = dataTableGetCount(temp_v11);
      temp_v29 = 0;
      if (temp_v26 != 0) {
        do {
          if (*pcVar26 == temp_v0) goto LAB_00207d0c;
          temp_v29 = temp_v29 + 1;
          pcVar26 = pcVar26 + 0x20;
          if (temp_v29 >= temp_v26) break;
        } while( 1 );
      }
      pcVar26 = (char *)0x0;
LAB_00207d0c:
      FUN_00100388(&temp_v49,&LAB_0020658c,pcVar26 + 1);
      ppcVar15 = &temp_v49;
      FUN_0020214c();
      *(char ***)(temp_v6 + 0x43b0) = ppcVar15;
      temp_v11 = *(unsigned int *)(temp_v6 + 0x43a8);
      FUN_00275bc8(temp_v11,ppcVar15);
      *(unsigned int *)(temp_v6 + 0x43ac) = temp_v11;
      temp_v16 = (unsigned int)*(unsigned short *)(temp_v13 + 100) - (unsigned int)*(unsigned short *)(temp_v7 + 0x4494);
      *(int *)(temp_v6 + 0x7538) = temp_v16;
      FUN_00359974(0x18,temp_v16,0xffffffff,0);
      temp_v16 = 0;
      temp_v27 = 0;
      *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      temp_v8 = 3;
      DAT_00588c41 = '\0';
      temp_v24 = *(short *)(temp_v7 + 0x4566);
      psVar12 = (short *)(temp_v7 + 0x4564);
      if (*(short *)(temp_v7 + 0x4564) != 0) {
        temp_v16 = 1;
      }
      do {
        if (temp_v24 != 0) {
          temp_v16 = temp_v16 + 1;
        }
        temp_v24 = psVar12[3];
        if (psVar12[2] != 0) {
          temp_v27 = temp_v27 + 1;
        }
        temp_v8 = temp_v8 - 1;
        psVar12 = psVar12 + 2;
      } while (temp_v8 != 0);
      temp_v16 = temp_v16 + temp_v27;
      if (*(short *)(temp_v7 + 0x4572) != 0) {
        temp_v16 = temp_v16 + 1;
      }
      if (0 < temp_v16) {
        DAT_00588c41 = '\x01';
      }
    case 1:
      temp_v7 = FUN_0022e750();
      if ((temp_v7 != 0) && (temp_v7 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43a0),2), temp_v7 != 0)) {
        if (DAT_00588c41 == '\0') {
          *(unsigned int *)(temp_v6 + 0x7f54) = 2;
        }
        else {
          *(unsigned int *)(temp_v6 + 0x7f54) = 0;
        }
        FUN_00333dc8(0);
        temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
      break;
    case 2:
      if (*(char *)(temp_v6 + 0x7f50) == '\0') {
        temp_v16 = 0;
        FUN_001517b4(0,1);
        if (temp_v16 == 0) break;
      }
      FUN_00333dc8(1);
      FUN_003343f0(0);
      temp_v16 = 3;
      psVar12 = (short *)&temp_v41;
      *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      temp_v24 = *(short *)(temp_v7 + 0x4564);
      if (temp_v24 != 0) {
        temp_v41 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v41 + 2)),temp_v24);
      }
      temp_v23 = *(short *)(temp_v7 + 0x4566);
      temp_v13 = (unsigned int)(temp_v24 != 0);
      psVar16 = (short *)(temp_v7 + 0x4564);
      do {
        temp_v24 = psVar16[2];
        if (temp_v23 != 0) {
          psVar31 = psVar12 + temp_v13;
          temp_v13 = (unsigned int)(char)((char)temp_v13 + '\x01');
          *psVar31 = temp_v23;
        }
        temp_v23 = psVar16[3];
        if (temp_v24 != 0) {
          psVar31 = psVar12 + temp_v13;
          temp_v13 = (unsigned int)(char)((char)temp_v13 + '\x01');
          *psVar31 = temp_v24;
        }
        temp_v16 = temp_v16 - 1;
        psVar16 = psVar16 + 2;
      } while (temp_v16 != 0);
      temp_v24 = *(short *)(temp_v7 + 0x4572);
      if (temp_v24 != 0) {
        psVar16 = psVar12 + temp_v13;
        temp_v13 = (unsigned int)(char)((char)temp_v13 + '\x01');
        *psVar16 = temp_v24;
      }
      FUN_00371e54(psVar12,temp_v13);
      break;
    case 3:
      FUN_0033449c(0);
      FUN_0037e0d0(temp_v13,0);
      temp_v16 = 0;
      temp_v24 = *(short *)(temp_v7 + 0x4566);
      temp_v26 = (unsigned int)(*(short *)(temp_v7 + 0x4564) != 0);
      temp_v27 = 3;
      psVar12 = (short *)(temp_v7 + 0x4564);
      do {
        if (temp_v24 != 0) {
          temp_v26 = temp_v26 + 1;
        }
        temp_v24 = psVar12[3];
        if (psVar12[2] != 0) {
          temp_v16 = temp_v16 + 1;
        }
        temp_v27 = temp_v27 - 1;
        psVar12 = psVar12 + 2;
      } while (temp_v27 != 0);
      temp_v16 = temp_v26 + temp_v16;
      if (*(short *)(temp_v7 + 0x4572) != 0) {
        temp_v16 = temp_v16 + 1;
      }
      if (0 >= temp_v16) {
        FUN_0019de98(0,0xf4f4f4ff);
        temp_v0 = *(char *)((int)*(char *)(temp_v7 + 0x442c) + temp_v6 + 0x74c4);
        if (temp_v0 != '\0') {
          FUN_0022e774();
          *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
        }
        else {
          *(unsigned int *)(temp_v6 + 0x436c) = 10;
        }
        break;
      }
      temp_v26 = (unsigned int)(*(short *)(temp_v13 + 0x34) == 0);
      temp_v7 = 3;
      temp_v24 = *(short *)(temp_v13 + 0x36);
      temp_v16 = 0;
      psVar12 = (short *)(temp_v13 + 0x34);
      do {
        if (temp_v24 == 0) {
          temp_v26 = temp_v26 + 1;
        }
        temp_v24 = psVar12[3];
        if (psVar12[2] == 0) {
          temp_v16 = temp_v16 + 1;
        }
        temp_v7 = temp_v7 - 1;
        psVar12 = psVar12 + 2;
      } while (temp_v7 != 0);
      temp_v16 = temp_v26 + temp_v16;
      if (*(short *)(temp_v13 + 0x42) == 0) {
        temp_v16 = temp_v16 + 1;
      }
      if (0 < temp_v16) {
        FUN_0020b490(temp_v6,0x15);
      }
      break;
    case 4:
      temp_v7 = FUN_0026c3a0();
      if (temp_v7 != 0) {
        temp_v7 = FUN_0032169c();
        if (temp_v7 == 0) {
          FUN_00336de4(*(unsigned short *)(temp_v13 + 0x62),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        temp_v22 = 7;
        temp_v11 = *(unsigned int *)(temp_v6 + 0x43ac);
        scrScriptProcessStartEntry(temp_v11,temp_v22);
        temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
        *(int *)(temp_v6 + 0x436c) = temp_v7;
      }
      break;
    case 5:
      temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
      goto joined_r0x002080f4;
    case 10:
      FUN_00333dc8(0);
      FUN_002a7288();
      roundObjFinish(temp_v6);
    }
    break;
  case 0x15:
    temp_v7 = temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150;
    pcVar26 = (char *)(temp_v7 + 0x442c);
    temp_v13 = (int)*pcVar26 - 0x19;
    if ((int)temp_v13 < 0) {
      temp_v13 = 0;
    }
    temp_v13 = temp_v13 & 0xffff;
    FUN_003e503c();
    switch(*(unsigned int *)(temp_v6 + 0x436c)) {
    case 0:
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x43ac),5);
      temp_v7 = 2;
      *(int *)(temp_v6 + 0x436c) = temp_v7;
      break;
    case 2:
      FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
      FUN_00371ef4();
      FUN_003d2150(0x1000219);
      temp_v7 = *(int *)(temp_v6 + 0x436c) + 1;
      *(int *)(temp_v6 + 0x436c) = temp_v7;
      break;
    case 3:
      FUN_00224880(*(unsigned int *)(temp_v6 + 0x43ac));
      temp_v16 = stateHolderStateIsNot4();
      if (temp_v16 != 0) {
        temp_v16 = 0;
        temp_v27 = 0;
        do {
          if (*(short *)(temp_v13 + temp_v16 * 2 + 0x34) == 0) {
            *(unsigned short *)(temp_v13 + temp_v16 * 2 + 0x34) = *(unsigned short *)(temp_v7 + 0x4564);
            break;
          }
          temp_v16 = temp_v16 + 1;
        } while (temp_v16 < 8);
        temp_v16 = 0;
        *(unsigned short *)(temp_v7 + 0x4564) = 0;
        do {
          if (0 < 7 - temp_v16) {
            temp_v8 = 0;
            temp_v9 = 7 - temp_v16;
            do {
              temp_v10 = temp_v16 + temp_v8;
              if ((*(short *)(pcVar26 + temp_v10 * 2 + 0x138) == 0) &&
                 (*(short *)(pcVar26 + temp_v10 * 2 + 0x13a) != 0)) {
                *(short *)(pcVar26 + temp_v10 * 2 + 0x138) = *(short *)(pcVar26 + temp_v10 * 2 + 0x13a);
                (pcVar26 + temp_v10 * 2 + 0x13a)[0] = '\0';
                (pcVar26 + temp_v10 * 2 + 0x13a)[1] = '\0';
              }
              temp_v9 = temp_v9 - 1;
              temp_v8 = temp_v8 + 1;
            } while (temp_v9 != 0);
          }
          temp_v16 = temp_v16 + 1;
        } while (temp_v16 < 7);
        temp_v16 = 0;
        temp_v8 = 3;
        temp_v24 = *(short *)(temp_v7 + 0x4566);
        psVar12 = (short *)(temp_v7 + 0x4564);
        if (*(short *)(temp_v7 + 0x4564) != 0) {
          temp_v27 = 1;
        }
        do {
          if (temp_v24 != 0) {
            temp_v27 = temp_v27 + 1;
          }
          temp_v24 = psVar12[3];
          if (psVar12[2] != 0) {
            temp_v16 = temp_v16 + 1;
          }
          temp_v8 = temp_v8 - 1;
          psVar12 = psVar12 + 2;
        } while (temp_v8 != 0);
        temp_v27 = temp_v27 + temp_v16;
        if (*(short *)(temp_v7 + 0x4572) != 0) {
          temp_v27 = temp_v27 + 1;
        }
        FUN_004bcd90(temp_v13);
        if (temp_v27 >= 1) {
          temp_v26 = (unsigned int)(*(short *)(temp_v13 + 0x34) == 0);
          temp_v24 = *(short *)(temp_v13 + 0x36);
          temp_v7 = 3;
          temp_v16 = 0;
          psVar12 = (short *)(temp_v13 + 0x34);
          do {
            if (temp_v24 == 0) {
              temp_v26 = temp_v26 + 1;
            }
            temp_v24 = psVar12[3];
            if (psVar12[2] == 0) {
              temp_v16 = temp_v16 + 1;
            }
            temp_v7 = temp_v7 - 1;
            psVar12 = psVar12 + 2;
          } while (temp_v7 != 0);
          temp_v16 = temp_v26 + temp_v16;
          if (*(short *)(temp_v13 + 0x42) == 0) {
            temp_v16 = temp_v16 + 1;
          }
          if (0 >= temp_v16) {
            FUN_002a6894(temp_v13);
            break;
          }
          *(unsigned int *)(temp_v6 + 0x436c) = 2;
          FUN_002a6894(temp_v13);
          break;
        }
        FUN_0034a968();
        sysPlaySe(0xe2);
        *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
        *(unsigned int *)(temp_v6 + 0x7f54) = 2;
        temp_v26 = dataTable0aSub0GetValueById(*(unsigned short *)(temp_v13 + 300));
        if ((temp_v26 != 0) && (temp_v16 = FUN_004bca68(temp_v13,temp_v26), temp_v16 != 0)) {
          temp_v44 = *(int *)(temp_v13 + 0x40);
          temp_v30 = *(unsigned int *)(temp_v13 + 0x34);
          temp_v16 = temp_v44;
          temp_v42 = (unsigned int)*(unsigned char **)(temp_v13 + 0x38);
          temp_v43 = (char *)*(int *)(temp_v13 + 0x3c);
          *(unsigned int *)(temp_v13 + 0x34) = 0;
          *(unsigned int *)(temp_v13 + 0x38) = 0;
          *(unsigned int *)(temp_v13 + 0x3c) = 0;
          *(unsigned int *)(temp_v13 + 0x40) = 0;
          (*(unsigned short *)((unsigned char *)&temp_v41 + 0)) = (unsigned short)temp_v30;
          temp_v29 = temp_v30 & 0xffff;
          if (temp_v29 != temp_v26 && temp_v29 != 0) {
            *(unsigned short *)(temp_v13 + 0x34) = (unsigned short)temp_v41;
          }
          (*(unsigned short *)((unsigned char *)&temp_v41 + 2)) = (unsigned short)(temp_v30 >> 0x10);
          temp_v29 = (unsigned int)(temp_v29 != temp_v26 && temp_v29 != 0);
          temp_v27 = 3;
          puVar36 = (unsigned short *)&temp_v41;
          do {
            temp_v14 = puVar36[2];
            if (temp_v26 != (*(unsigned short *)((unsigned char *)&temp_v41 + 2)) && (*(unsigned short *)((unsigned char *)&temp_v41 + 2)) != 0) {
              temp_v8 = temp_v29 * 2;
              temp_v29 = temp_v29 + 1;
              *(unsigned short *)(temp_v13 + temp_v8 + 0x34) = (*(unsigned short *)((unsigned char *)&temp_v41 + 2));
            }
            (*(unsigned short *)((unsigned char *)&temp_v41 + 2)) = puVar36[3];
            if (temp_v26 != temp_v14 && temp_v14 != 0) {
              temp_v8 = temp_v29 * 2;
              temp_v29 = temp_v29 + 1;
              *(unsigned short *)(temp_v13 + temp_v8 + 0x34) = temp_v14;
            }
            temp_v27 = temp_v27 - 1;
            puVar36 = puVar36 + 2;
          } while (temp_v27 != 0);
          (*(unsigned short *)((unsigned char *)&temp_v44 + 2)) = (unsigned short)((unsigned int)temp_v44 >> 0x10);
          if (((*(unsigned short *)((unsigned char *)&temp_v44 + 2)) != temp_v26) && ((*(unsigned short *)((unsigned char *)&temp_v44 + 2)) != 0)) {
            temp_v27 = temp_v29 * 2;
            temp_v29 = temp_v29 + 1;
            *(unsigned short *)(temp_v13 + temp_v27 + 0x34) = (*(unsigned short *)((unsigned char *)&temp_v44 + 2));
          }
          *(short *)(temp_v13 + temp_v29 * 2 + 0x34) = (short)temp_v26;
          temp_v41 = temp_v30;
          temp_v44 = temp_v16;
          temp_v16 = statusDownGetCursorPosition();
          FUN_002f01e0(temp_v13 + 0x34,8);
          FUN_003c16e0(temp_v16 - 1);
        }
        temp_v11 = *(unsigned int *)(temp_v13 + 0x38);
        temp_v22 = *(unsigned int *)(temp_v13 + 0x3c);
        temp_v25 = *(unsigned int *)(temp_v13 + 0x40);
        *(unsigned int *)(temp_v7 + 0x4564) = *(unsigned int *)(temp_v13 + 0x34);
        *(unsigned int *)(temp_v7 + 0x4568) = temp_v11;
        *(unsigned int *)(temp_v7 + 0x456c) = temp_v22;
        *(unsigned int *)(temp_v7 + 0x4570) = temp_v25;
        FUN_00333dc8(0);
        FUN_002a6894(temp_v13);
      }
      break;
    case 4:
      if (*(char *)(temp_v6 + 0x7f50) == '\0') {
        temp_v7 = 0;
        FUN_001517b4(0,1);
        if (temp_v7 == 0) break;
      }
      obj04Finish();
      FUN_0019de98(0,0xf4f4f4ff);
      FUN_002a7288();
      temp_v7 = roundObjFinish(temp_v6);
      if (temp_v7 != 0) {
        *(int *)(temp_v6 + 0x436c) = *(int *)(temp_v6 + 0x436c) + 1;
      }
      temp_v11 = 0x100020e;
      eventQueueAddUniqueIfValid(temp_v11);
      break;
    case 5:
      temp_v7 = FUN_0023b3d0();
      if (temp_v7 != 0) {
        FUN_0033449c(1);
        FUN_0037e0d0(temp_v6 + *(int *)(temp_v6 + 0x74c0) * 0x150 + 0x4430,0);
        FUN_0037e12c(temp_v13,0);
        FUN_002a7324(1);
        FUN_0020b490(temp_v6,0x14);
      }
    }
    break;
  case 0x16:
    temp_v7 = FUN_00224880(*(unsigned int *)(temp_v6 + 0x43a0));
    if (temp_v7 == 2) {
      FUN_00387ac4(0);
      FUN_00168980(3);
      *(unsigned int *)(temp_v6 + 0x4364) = 0x17;
    }
    break;
  case 0x18:
    temp_v7 = FUN_0038b568();
    if (temp_v7 != 0) {
      FUN_0020b490(temp_v6,0x17);
    }
  }
  *(int *)(temp_v6 + 0x437c) = *(int *)(temp_v6 + 0x437c) + 1;
  return 0;
}

} /* extern "C" */
