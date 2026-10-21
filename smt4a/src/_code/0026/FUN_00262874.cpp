/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262874` (_code @ 0x262874, 0x534c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c7cd4(...);
int FUN_0031f688(void);
int FUN_0035dfc0(...);

int eventQueueAddUnique(...);
int uiSpriteSelectAnim(...);
int FUN_001ba514(...);
int FUN_0023f900(void);
int FUN_002a5e7c(...);
int FUN_002cb84c(void);
int FUN_002cc0c0(void);
int sysMemClear(...);
int FUN_002f8288(void);
int FUN_0031d890(void);
int FUN_0035ab40(...);
int FUN_0035d8a4(void);
int FUN_00387240(...);
int FUN_003d1d6c(void);
int FUN_00408184(...);
int countersAddSaturating(...);
int FUN_004a9ca0(...);
int FUN_004bcd90(...);
int dispatchIfFound(...);
int bitsAt60Clear(...);
int FUN_004bd6b0(...);
int FUN_004d0d70(void);

int FUN_00184310(void);
int FUN_0019de98(...);
int slotRecordFindById(...);
int menuStateStartConfirm(void);
int FUN_00224880(...);
int FUN_0023fc38(void);
int FUN_002a690c(...);
int FUN_002a6a24(...);
int FUN_002a7288(void);
int FUN_002c39dc(...);
int FUN_002c85b0(...);
int panelSetMode3(...);
int FUN_003343c0(...);
int FUN_0033449c(...);
int buttonHelpGetValue(void);
int FUN_0035deb0(void);
int FUN_0047fa90(...);
int FUN_004fd508(...);

int sysPlaySe(...);
int FUN_0020d934(void);
int FUN_00227af0(...);
int FUN_0022e774(void);
int FUN_00270498(void);
int scrScriptProcessStartEntry(...);
int FUN_002a3258(void);
int FUN_002ade88(void);
int FUN_002f707c(...);
int FUN_00333694(...);
int objBInitBlock19D0(...);
int FUN_003344b4(...);
int FUN_00372100(...);
int menuStateStartSelect(...);
int obj48Arm(...);
int FUN_00480140(...);
int FUN_004ab734(...);
int rt_memcpy_w(...);

int FUN_0020aba0(...);
int FUN_002a4964(...);
int FUN_002c8550(...);
int FUN_002cbca8(...);
int FUN_002cf5bc(void);
int FUN_0037e1b0(...);
int FUN_003f5220(...);
int pair40Set(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int gameGetSlotRecord(...);
int FUN_00228b04(...);
int FUN_0026e848(...);
int FUN_002707d8(...);
int FUN_00272310(...);
int FUN_002884c8(...);
int FUN_0028c2ec(...);
int FUN_002a4914(...);
int FUN_002a5cf4(void);
int FUN_002a7324(...);
int FUN_0031f718(...);
int FUN_00334214(...);
int FUN_0038b548(...);

int FUN_00163aa4(...);
int ifTouchRegionRemove(void);
int uiSpriteSetKeyframe(int, int, int);
int gameGetSlotTable(...);
int __aeabi_memset4(...);
int FUN_0020a760(...);
int FUN_0020b718(...);
int FUN_0021c1e0(void);
int FUN_00230ac0(...);
int FUN_0023b45c(...);
int FUN_0023e908(void);
int FUN_0026fa30(void);
int FUN_00275bc8(unsigned int, unsigned int);
int FUN_00285800(void);
int FUN_002a4878(...);
int FUN_002c2c88(int);
int FUN_002c7e24(void);
int statusDownGetActive(int);
int mapBlockSetRequest(void);
int FUN_003343f0(...);
int obj04Finish(void);
int FUN_0034cda0(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_00264bbc; /* 0x264bbc */
extern int g_btlUiBlock; /* 0x57a9c8 */
extern int g_partyPanel; /* 0x57f268 */
extern unsigned int DAT_0057f270; /* 0x57f270 */
extern unsigned int DAT_0057f274; /* 0x57f274 */

extern int btlGetMainState(void);
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int btlMainIsRunning(void);
extern int FUN_001643a0(void);
extern int FUN_00167458(int, unsigned int);
extern int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: eventQueueAddUnique. */
extern unsigned short FUN_0017760c(int);
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: slotRecordFindById. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: gameGetSlotTable. */
extern int gameSlotTableFindFree(void);
/* Supplied declaration required: __aeabi_memset4. */
extern int FUN_001ba3d4(unsigned short);
/* Supplied declaration required: FUN_001ba514. */
/* Supplied declaration required: menuStateStartConfirm. */
/* Supplied declaration required: FUN_0020a760. */
/* Supplied declaration required: FUN_0020aba0. */
/* Supplied declaration required: FUN_0020b718. */
/* Supplied declaration required: FUN_0020d934. */
/* Supplied declaration required: FUN_0021c1e0. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00227af0. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0022a030(int, unsigned short);
extern int FUN_0022e714(void);
extern int FUN_0022e750(void);
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00230ac0. */
extern int FUN_00237608(void);
extern int useCounterIsFinished(void);
extern int FUN_0023b3b8(void);
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_0023e908. */
/* Supplied declaration required: FUN_0023f900. */
/* Supplied declaration required: FUN_0023fc38. */
extern int FUN_0026272c(void);
/* Supplied declaration required: FUN_0026e848. */
/* Supplied declaration required: FUN_0026fa30. */
/* Supplied declaration required: FUN_00270498. */
/* Supplied declaration required: FUN_002707d8. */
/* Supplied declaration required: FUN_00272310. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_00285800. */
/* Supplied declaration required: FUN_002884c8. */
/* Supplied declaration required: FUN_0028c2ec. */
extern int btlMainGetUnk14(void);
/* Supplied declaration required: FUN_002a3258. */
/* Supplied declaration required: FUN_002a4878. */
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
extern int FUN_002a4b28(unsigned short);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a5cf4. */
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: FUN_002a690c. */
/* Supplied declaration required: FUN_002a6a24. */
/* Supplied declaration required: FUN_002a7288. */
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002a73f8(void);
extern int FUN_002a7410(void);
/* Supplied declaration required: FUN_002ade88. */
extern int FUN_002c0854(void);
extern int FUN_002c08ec(void);
extern unsigned int computeCountLimit(void);
/* Supplied declaration required: FUN_002c2c88. */
extern int FUN_002c2c98(void);
/* Supplied declaration required: FUN_002c39dc. */
extern int FUN_002c7c54(void);
extern int FUN_002c7ca0(void);
extern int FUN_002c7cb4(void);
/* Supplied declaration required: FUN_002c7cd4. */
/* Supplied declaration required: FUN_002c7e24. */
/* Supplied declaration required: FUN_002c8550. */
/* Supplied declaration required: FUN_002c85b0. */
extern unsigned short FUN_002cab18(void);
extern unsigned char FUN_002cad18(void);
/* Supplied declaration required: FUN_002cb84c. */
/* Supplied declaration required: FUN_002cbca8. */
/* Supplied declaration required: FUN_002cc0c0. */
/* Supplied declaration required: FUN_002cf5bc. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_002effbc(void);
extern int FUN_002f036c(void);
/* Supplied declaration required: FUN_002f707c. */
/* Supplied declaration required: FUN_002f8288. */
extern int holderKindIsActive(void);
/* Supplied declaration required: panelSetMode3. */
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0031f688. */
/* Supplied declaration required: FUN_0031f718. */
extern int FUN_0032fb18(void);
/* Supplied declaration required: FUN_00333694. */
/* Supplied declaration required: statusDownGetActive. */
extern int gameGlobalsGetState(void);
/* Supplied declaration required: mapBlockSetRequest. */
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: buttonHelpGetValue. */
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: FUN_0034cda0. */
/* Supplied declaration required: FUN_0035ab40. */
/* Supplied declaration required: FUN_0035d8a4. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0035deb0. */
/* Supplied declaration required: FUN_0035dfc0. */
/* Supplied declaration required: FUN_00372100. */
extern unsigned long long FUN_00372570(unsigned int);
extern int panelStateIs0(void);
/* Supplied declaration required: FUN_0037e1b0. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_0038b548. */
extern int FUN_0038b568(void);
extern int FUN_003a7bac(void);
/* Supplied declaration required: FUN_003d1d6c. */
/* Supplied declaration required: menuStateStartSelect. */
/* Supplied declaration required: obj48Arm. */
/* Supplied declaration required: FUN_003f5220. */
/* Supplied declaration required: pair40Set. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: countersAddSaturating. */
/* Supplied declaration required: FUN_0047fa90. */
/* Supplied declaration required: FUN_00480140. */
extern int FUN_0049f628(unsigned int, unsigned short);
extern int FUN_0049fbb8(unsigned int, int, unsigned short);
/* Supplied declaration required: FUN_004a9ca0. */
/* Supplied declaration required: FUN_004ab734. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: dispatchIfFound. */
/* Supplied declaration required: bitsAt60Clear. */
/* Supplied declaration required: FUN_004bd6b0. */
extern unsigned int FUN_004d0cd4(void);
/* Supplied declaration required: FUN_004d0d70. */
/* Supplied declaration required: FUN_004fd508. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_00262874(void)

{
/* irregular: 42 goto(s); 107 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  short *psVar11;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int *piVar20;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20;
  unsigned long long temp_v21;
  int temp_v22;
  
  temp_v1 = g_partyPanel;
  puVar5 = (unsigned int *)&g_partyPanel;
  if (g_partyPanel != 0) {
    puVar5 = *(unsigned int **)(g_partyPanel + 0x1c);
  }
  if (g_partyPanel == 0 || puVar5 == (unsigned int *)0x1b) {
    return 0;
  }
  temp_v4 = gameGetSlotTable(puVar5);
  temp_v22 = 0;
  FUN_00163aa4(temp_v1 + 0x68);
  FUN_00163aa4(temp_v1 + 0xf4);
  FUN_00163aa4(temp_v1 + 0x20c);
  FUN_00163aa4(temp_v1 + 0x4c8);
  temp_v14 = 0;
  do {
    if (temp_v14 * 3 < *(int *)(temp_v1 + 0x1214)) {
      FUN_00163aa4(temp_v1 + temp_v14 * 0x8c + 0x784);
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 3);
  *(int *)(temp_v1 + 0x1214) = *(int *)(temp_v1 + 0x1214) + 1;
  FUN_0021c1e0();
  mapBlockSetRequest();
  temp_v5 = *(unsigned int *)(temp_v1 + 0x1c);
  if (((!(temp_v5 == 0 || temp_v5 == 0x17)) && (!(temp_v5 == 0xe || temp_v5 == 0xd))) &&
     (!(temp_v5 == 0x12 || temp_v5 == 0x18))) {
    temp_v20 = temp_v5 == 0x1a;
    if (!temp_v20) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v1 + 0x9b4);
    }
    if ((!(temp_v20 || temp_v5 == 0xb)) && (temp_v14 = FUN_002c7ca0(), temp_v14 != 6)) {
      if (*(int *)(temp_v1 + 0x1c) == 0x19) {
        statusDownGetActive(0x19);
      }
      FUN_003343f0();
    }
    else {
      FUN_003343f0(1);
    }
  }
  else {
    FUN_003343f0(1);
  }
  temp_v14 = *(int *)(temp_v1 + 0x1c);
  if (((temp_v14 != 0 && temp_v14 != 0x17) && ((temp_v14 != 0x1b && temp_v14 != 0xb) && temp_v14 != 0xd)) &&
     ((*(char *)(temp_v1 + 0x43) == '\0' &&
      ((temp_v14 = FUN_002a7410(), temp_v14 != 0 &&
       (temp_v6 = useCounterIsFinished(), temp_v14 = g_partyPanel, temp_v6 != 0)))))) {
    temp_v6 = 0;
    if (0 < *(int *)(g_partyPanel + 0xa00)) {
      do {
        ifTouchRegionRemove();
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(temp_v14 + 0xa00));
    }
    *(unsigned int *)(temp_v14 + 0xa00) = 0;
    __aeabi_memset4(temp_v14 + 0x9c4,0x3c,0xffffffff);
    FUN_002c7e24();
    temp_v14 = FUN_0035db94();
    if (temp_v14 < 0) {
      temp_v10 = 8;
      FUN_00230ac0(temp_v10,0xffffffff,0);
    }
    else {
      temp_v14 = FUN_0035db94();
      if (0 < temp_v14) {
        temp_v10 = 7;
        FUN_00230ac0(temp_v10,0xffffffff,0);
      }
    }
    if (*(char *)(temp_v1 + 0x9b4) == '\v') {
      obj04Finish();
    }
    *(unsigned int *)(temp_v1 + 0x20) = 0x10;
    FUN_0020b718(0x17,1);
  }
  temp_v5 = 0;
  do {
    temp_v14 = FUN_00284140((int)*(short *)(temp_v1 + temp_v5 * 2 + 0x9c4));
    temp_v8 = temp_v5;
    if ((temp_v14 == 1 || temp_v14 == 2) || temp_v14 == 6) break;
    temp_v5 = temp_v5 + 1;
    temp_v8 = 0xffffffff;
  } while ((int)temp_v5 < 0x1c);
  temp_v3 = FUN_002cab18();
  *(unsigned short *)(temp_v1 + 0x3a) = temp_v3;
  temp_v2 = FUN_002cad18();
  *(unsigned char *)(temp_v1 + 0x44) = temp_v2;
  temp_v6 = g_partyPanel;
  switch(*(unsigned int *)(temp_v1 + 0x1c)) {
  case 0:
    temp_v20 = 0;
    temp_v4 = 0;
    do {
      FUN_00163aa4(temp_v6 + temp_v4 * 0x8c + 0x298);
      if (temp_v4 == 3) {
        temp_v20 = *(char *)(temp_v6 + 0x4c6) != '\0';
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    FUN_00163aa4(temp_v6 + 0x928);
    if ((temp_v20) && ((temp_v4 = FUN_002a73f8(), temp_v4 == 0 || (temp_v4 = FUN_0023b3d0(), temp_v4 != 0))))
    {
      temp_v20 = *(int *)(temp_v1 + 0x10) != 0;
      temp_v4 = 0;
      if (temp_v20) {
        temp_v4 = *(int *)(temp_v1 + 0xc);
      }
      if (temp_v20 && temp_v4 != 0) {
        FUN_0026fa30();
        FUN_002c2c88(temp_v1 + 0xc88);
        FUN_002c2c88(temp_v1 + 0xd50);
        if (*(int *)(temp_v1 + 0x20) != 1) {
          FUN_0023e908();
        }
        if (*(int *)(temp_v1 + 0x14) == 0) {
          temp_v10 = *(unsigned int *)(temp_v1 + 0x10);
          FUN_00275bc8(temp_v10,*(unsigned int *)(temp_v1 + 0xc));
          *(unsigned int *)(temp_v1 + 0x14) = temp_v10;
        }
        FUN_0020b718(*(unsigned int *)(temp_v1 + 0x20),1);
      }
    }
    break;
  case 1:
    if ((((*(char *)(temp_v1 + 0x9b4) == '\x01') && (temp_v4 = FUN_0020a760(1), temp_v4 != 0)) &&
        (temp_v4 = FUN_0022e714(), temp_v4 != 0)) && (temp_v4 = FUN_00237608(), temp_v4 != 0)) {
      FUN_0034cda0();
    }
    break;
  case 2:
    temp_v4 = FUN_001643a0();
    if (temp_v4 == 0) {
      temp_v4 = FUN_002c2c98();
      if (temp_v4 < 0) {
        *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x2c) ^ 1;
        uiSpriteSetKeyframe(temp_v1 + 0x180,4,0);
      }
      else {
        temp_v4 = FUN_002c2c98();
        if (0 < temp_v4) {
          *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x2c) ^ 1;
          uiSpriteSetKeyframe(temp_v1 + 0x180,5,0);
        }
      }
      temp_v10 = 0;
      temp_v14 = 3;
      FUN_0020b718(temp_v14,temp_v10);
    }
    break;
  case 3:
    if (*(short *)(temp_v1 + 0x1d0) != 5) {
      temp_v4 = FUN_00167458(temp_v1 + 0x180,0);
    }
    else {
      temp_v4 = FUN_00167458(temp_v1 + 0x180,1);
    }
    if (temp_v4 != 0) {
      FUN_0020b718(*(unsigned int *)(temp_v1 + 0x24),1);
      FUN_0023e908();
    }
    break;
  case 4:
    *(unsigned int *)(temp_v1 + 0x9b8) = 0xffffffff;
    temp_v4 = temp_v1 + 0xc24;
    if (*(char *)(temp_v1 + 0xc85) != '\0') {
      FUN_0023b45c(0);
      *(unsigned char *)(temp_v1 + 0xc85) = 0;
    }
    else {
      temp_v22 = FUN_0022e714();
      if (temp_v22 == 0) {
        temp_v22 = FUN_002a4878(temp_v4);
        if (temp_v22 != 0) {
          temp_v6 = gameGetSlotTable();
          if (*(char *)(temp_v6 + temp_v22 + 0x1c9f) < '\0') {
            FUN_00285800();
            FUN_0031f718(0,0);
            FUN_0023b45c(0);
          }
          else {
            temp_v10 = gameGetSlotRecord();
            FUN_00334214(temp_v10,0,0);
            FUN_002a7324(1);
          }
        }
        else {
          FUN_0031f718(0xffffffff,0);
          FUN_002a7324(1);
        }
        temp_v6 = 0;
        temp_v22 = 0;
        do {
          temp_v15 = gameGetSlotTable();
          temp_v15 = temp_v15 + temp_v22;
          temp_v22 = temp_v22 + 1;
          if (-1 < *(char *)(temp_v15 + 0x1ca0)) {
            temp_v6 = temp_v6 + 1;
          }
        } while (temp_v22 < 3);
        FUN_0038b548(0 < temp_v6);
      }
    }
    temp_v22 = g_partyPanel;
    if (*(char *)(temp_v1 + 0x43) != '\0') {
      temp_v14 = gameGlobalsGetState();
      if (temp_v14 != 0) {
        temp_v22 = FUN_002a4878(temp_v4);
        temp_v6 = 0;
        do {
          temp_v22 = temp_v22 + temp_v14;
          if (temp_v22 < 0) {
            temp_v22 = 3;
          }
          else {
            if (temp_v22 >= 4) {
              temp_v22 = 0;
              break;
            }
            if (temp_v22 == 0) break;
          }
          temp_v15 = gameGetSlotTable();
          temp_v20 = *(char *)(temp_v15 + temp_v22 + 0x1c9f) < '\0';
          if (temp_v20) {
            temp_v6 = temp_v6 + 1;
          }
        } while (temp_v20 && temp_v6 < 4);
        temp_v14 = FUN_002a4878(temp_v4);
        if (temp_v14 != temp_v22) {
          FUN_002a4914(temp_v4,temp_v22);
          FUN_0023b45c(0);
        }
      }
    }
    else if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
      temp_v6 = FUN_00284140((int)*(short *)(g_partyPanel + 0x9fc));
      if (temp_v6 != 6) {
        temp_v22 = FUN_00284140((int)*(short *)(temp_v22 + 0x9fe));
        if (temp_v22 != 6) goto LAB_00263038;
        FUN_002884c8(temp_v4);
      }
      else {
        FUN_0026e848(temp_v4);
      }
      FUN_0026fa30();
      FUN_0020b718(3,1);
      temp_v10 = 0x1000210;
      eventQueueAddUniqueIfValid(temp_v10);
    }
    else {
LAB_00263038:
      if ((temp_v14 == 1 || temp_v14 == 2) && ((int)temp_v8 < 4)) {
        temp_v5 = FUN_002a4878(temp_v4);
        if (temp_v5 != temp_v8) {
          eventQueueAddUniqueIfValid(0x100020d);
        }
        FUN_002a4914(temp_v4,temp_v8);
        FUN_0023b45c(0);
      }
      else {
        temp_v22 = temp_v4;
        FUN_00228b04(temp_v4,1);
        if (temp_v22 == 0) {
          temp_v22 = 0;
          FUN_001517b4(0,1);
          if ((temp_v22 != 0) || ((temp_v14 == 6 && (3 >= (int)temp_v8)))) {
            temp_v14 = FUN_002a4878(temp_v4);
            if (*(char *)(temp_v14 + temp_v1 + 0x9c0) != '\0') {
              temp_v10 = FUN_002a4878(temp_v4);
              *(unsigned int *)(temp_v1 + 0x9b8) = temp_v10;
              if (*(char *)(temp_v1 + 0x9b4) == '\x02') {
                *(unsigned char *)(temp_v1 + 0x34) = 1;
                FUN_002a5cf4();
                eventQueueAddUniqueIfValid(0x100020e);
              }
              if (*(char *)(temp_v1 + 0x9b4) == '\x04') {
                *(unsigned char *)(temp_v1 + 0x34) = 1;
                FUN_0023b45c(0);
                FUN_0020b718(8,1);
              }
            }
            else {
              temp_v10 = 0x100020f;
              eventQueueAddUniqueIfValid(temp_v10);
            }
          }
          else {
            temp_v14 = 1;
            FUN_001517b4();
            if (temp_v14 != 0) {
              *(unsigned char *)(temp_v1 + 0x34) = 0;
              FUN_0023b45c(0);
              FUN_0020b718(8,1);
              temp_v14 = 0;
              do {
                *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa10) + 0x27) = 0;
                temp_v14 = temp_v14 + 1;
              } while (temp_v14 < 4);
              temp_v14 = 0;
              do {
                *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa20) + 0x27) = 0;
                temp_v14 = temp_v14 + 1;
              } while (temp_v14 < 0x18);
              temp_v10 = 0x100020f;
              eventQueueAddUniqueIfValid(temp_v10);
            }
            else {
              FUN_0020a760(1);
            }
          }
        }
      }
    }
    temp_v0 = *(char *)(temp_v1 + 0x9b4);
    if (!(temp_v0 == '\t' || temp_v0 == '\b')) {
      if ((temp_v0 == '\x06' || temp_v0 == '\x05') || (temp_v0 == '\a' || temp_v0 == '\x02')) {
        FUN_0028c2ec(temp_v4,0);
      }
    }
    else {
      FUN_002707d8(temp_v4,0);
    }
    temp_v14 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa10) + 0x25) = 0;
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 4);
    temp_v14 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa20) + 0x25) = 0;
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 0x18);
    temp_v4 = FUN_002a4878(temp_v4);
    *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x25) = 1;
    FUN_0034cda0();
    break;
  case 6:
    temp_v20 = *(char *)(temp_v1 + 0x42) == '\0';
    temp_v22 = temp_v1 + 0xc88;
    if (!temp_v20) {
      temp_v22 = temp_v1 + 0xcec;
    }
    temp_v6 = 0;
    if (!temp_v20) {
      temp_v15 = FUN_002a4878();
      temp_v9 = FUN_002a4894(temp_v22);
      temp_v15 = temp_v15 + temp_v9 * 4;
    }
    else {
      temp_v9 = FUN_002a4894(temp_v22);
      temp_v7 = *(int *)(temp_v1 + 0x2c);
      temp_v15 = FUN_002a4878(temp_v22);
      temp_v15 = temp_v9 * 4 + temp_v7 * 0xc + temp_v15;
    }
    *(unsigned int *)(temp_v1 + 0x9bc) = 0xffffffff;
    if ((*(char *)(temp_v22 + 0x61) != '\0') || (*(char *)(temp_v22 + 0x60) != '\0')) {
      FUN_0023b45c(0);
      *(unsigned char *)(temp_v22 + 0x61) = 0;
      *(unsigned char *)(temp_v22 + 0x60) = 0;
    }
    else {
      temp_v9 = FUN_0022e714();
      if (temp_v9 == 0) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v7 = FUN_002a4878();
          temp_v9 = FUN_002a4894(temp_v22);
          temp_v7 = temp_v7 + temp_v9 * 4;
        }
        else {
          temp_v9 = FUN_002a4894(temp_v22);
          temp_v11 = *(int *)(temp_v1 + 0x2c);
          temp_v7 = FUN_002a4878(temp_v22);
          temp_v7 = temp_v7 + temp_v9 * 4 + temp_v11 * 0xc;
        }
        temp_v9 = *(int *)(temp_v1 + temp_v7 * 8 + 0xa80);
        if (temp_v9 < 0) {
          FUN_00285800();
          FUN_0031f718(0,0);
          FUN_0023b45c(0);
        }
        else {
          temp_v7 = btlMainIsRunning();
          if (temp_v7 != 0) {
            temp_v7 = gameGetSlotRecord(temp_v9);
            temp_v5 = (unsigned int)*(unsigned short *)(temp_v7 + 0x62);
            FUN_00272310();
            temp_v10 = gameGetSlotRecord(temp_v9);
            FUN_00334214(temp_v10,0,0,temp_v5);
            FUN_002a7324(1);
          }
          else {
            temp_v10 = gameGetSlotRecord(temp_v9);
            FUN_00334214(temp_v10,0,0);
            FUN_002a7324(1);
          }
        }
        temp_v9 = gameSlotTableFindFree();
        FUN_0038b548(temp_v9 >= 2);
      }
    }
    temp_v9 = g_partyPanel;
    if (*(char *)(temp_v1 + 0x43) != '\0') {
      temp_v4 = gameGlobalsGetState();
      if (temp_v4 != 0) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v14 = FUN_002a4878();
          temp_v15 = FUN_002a4894(temp_v22);
          temp_v14 = temp_v14 + temp_v15 * 4;
        }
        else {
          temp_v15 = FUN_002a4894(temp_v22);
          temp_v9 = *(int *)(temp_v1 + 0x2c);
          temp_v14 = FUN_002a4878(temp_v22);
          temp_v14 = temp_v15 * 4 + temp_v9 * 0xc + temp_v14;
        }
        temp_v9 = 0;
        temp_v15 = temp_v14;
        do {
          temp_v15 = temp_v15 + temp_v4;
          if (temp_v15 < 0) {
            temp_v15 = 0x17;
          }
          else if (temp_v15 >= 0x18) {
            temp_v15 = 0;
          }
          temp_v7 = gameGetSlotTable();
        } while ((*(char *)(temp_v7 + temp_v15 + 0x1c88) < '\0') && (temp_v9 = temp_v9 + 1, temp_v9 < 0x19)
                );
        if (temp_v15 != temp_v14) {
          pair40Set(*(unsigned int *)(temp_v1 + temp_v14 * 4 + 0xa20),0);
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            *(unsigned int *)(temp_v1 + 0x2c) = 0;
            FUN_002a4914(temp_v22,temp_v15 % 4);
            FUN_002a4964(temp_v22,(int)(temp_v15 + ((unsigned int)(temp_v15 >> 0x1f) >> 0x1e)) >> 2);
          }
          else {
            if (temp_v15 >= 0xc) {
              *(unsigned int *)(temp_v1 + 0x2c) = 1;
              temp_v15 = temp_v15 - 0xc;
              FUN_002a4914(temp_v22,temp_v15 % 4);
              FUN_002a4964(temp_v22,(int)(temp_v15 + ((unsigned int)(temp_v15 >> 0x1f) >> 0x1e)) >> 2);
            }
            else {
              *(unsigned int *)(temp_v1 + 0x2c) = 0;
              FUN_002a4914(temp_v22,temp_v15 % 4);
              FUN_002a4964(temp_v22,(int)(temp_v15 + ((unsigned int)(temp_v15 >> 0x1f) >> 0x1e)) >> 2);
            }
            temp_v4 = 0;
            do {
              FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0xa10),*(unsigned int *)(temp_v1 + 0x2c))
              ;
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 4);
            temp_v4 = 0;
            do {
              FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0xa20),*(unsigned int *)(temp_v1 + 0x2c))
              ;
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 0x18);
          }
          FUN_0023b45c(0);
        }
      }
    }
    else if (((temp_v14 == 1) || (temp_v14 == 2)) && (temp_v5 = temp_v8 - 4, temp_v5 < 0x18)) {
      if ((int)temp_v5 < *(int *)(temp_v22 + 0x50)) {
        temp_v4 = FUN_002a4878(temp_v22);
        temp_v14 = FUN_002a4894(temp_v22);
        temp_v15 = temp_v8 - 4;
        FUN_002a4914(temp_v22,temp_v15 % 4);
        FUN_002a4964(temp_v22,(int)(temp_v15 + ((unsigned int)(temp_v15 >> 0x1f) >> 0x1e)) >> 2);
        FUN_0023b45c(0);
        if (temp_v4 + temp_v14 * 4 != temp_v5) {
          temp_v10 = 0x100020d;
          eventQueueAddUniqueIfValid(temp_v10);
        }
      }
    }
    else if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
      temp_v7 = FUN_00284140((int)*(short *)(g_partyPanel + 0x9fc));
      if (temp_v7 != 6) {
        temp_v9 = FUN_00284140((int)*(short *)(temp_v9 + 0x9fe));
        if (temp_v9 != 6) goto LAB_00263748;
        FUN_002884c8(temp_v22);
      }
      else {
        FUN_0026e848(temp_v22);
      }
      FUN_0026fa30();
      FUN_0023b45c(0);
      FUN_0020b718(3,1);
      eventQueueAddUniqueIfValid(0x1000210);
    }
    else {
LAB_00263748:
      temp_v9 = FUN_0020aba0(temp_v22,0);
      if (temp_v9 != 0) {
        FUN_0023b45c(0);
        FUN_0020b718(3,1);
        temp_v10 = 0x1000210;
        goto LAB_00263984;
      }
      temp_v9 = temp_v22;
      FUN_00228b04(temp_v22,1);
      if (temp_v9 != 0) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v9 = FUN_002a4878();
          temp_v4 = FUN_002a4894(temp_v22);
          temp_v9 = temp_v9 + temp_v4 * 4;
        }
        else {
          temp_v4 = FUN_002a4894(temp_v22);
          temp_v14 = *(int *)(temp_v1 + 0x2c);
          temp_v9 = FUN_002a4878(temp_v22);
          temp_v9 = temp_v9 + temp_v4 * 4 + temp_v14 * 0xc;
        }
        if (temp_v15 != temp_v9) {
          pair40Set(*(unsigned int *)(temp_v1 + temp_v15 * 4 + 0xa20),0);
        }
      }
      else {
        temp_v15 = 0;
        FUN_001517b4(0,1);
        if ((temp_v15 != 0) || ((temp_v14 == 6 && (0x17 >= temp_v8 - 4)))) {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v14 = FUN_002a4878();
            temp_v4 = FUN_002a4894(temp_v22);
            temp_v14 = temp_v14 + temp_v4 * 4;
          }
          else {
            temp_v4 = FUN_002a4894(temp_v22);
            temp_v15 = *(int *)(temp_v1 + 0x2c);
            temp_v14 = FUN_002a4878(temp_v22);
            temp_v14 = temp_v14 + temp_v4 * 4 + temp_v15 * 0xc;
          }
          if ((0x17 >= temp_v14) && (*(short *)(temp_v1 + temp_v14 * 8 + 0xa84) != 0)) {
            *(int *)(temp_v1 + 0x9bc) = temp_v14;
            if (*(char *)(temp_v1 + 0x9b4) == '\x02') {
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              FUN_002a5cf4();
              eventQueueAddUniqueIfValid(0x100020e);
            }
            if (*(char *)(temp_v1 + 0x9b4) == '\x03') {
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              FUN_002a5cf4();
              eventQueueAddUniqueIfValid(0x100020e);
            }
            if (*(char *)(temp_v1 + 0x9b4) == '\x04') {
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              FUN_0023b45c(0);
              FUN_0020b718(8,1);
            }
          }
          else {
            temp_v10 = 0x100020f;
            eventQueueAddUniqueIfValid(temp_v10);
          }
        }
        else {
          temp_v14 = 1;
          FUN_001517b4();
          if (temp_v14 != 0) {
            if (*(char *)(temp_v1 + 0x9b4) == '\x02' || *(char *)(temp_v1 + 0x9b4) == '\x04') {
              if (-1 < *(char *)(*(int *)(temp_v1 + 0x9b8) + temp_v4 + 0x1c9f)) {
                temp_v4 = gameGetSlotRecord();
                temp_v14 = 0;
                do {
                  temp_v6 = temp_v1 + temp_v14 * 8;
                  if ((-1 < *(int *)(temp_v6 + 0xa80)) &&
                     (temp_v15 = gameGetSlotRecord(), *(short *)(temp_v15 + 0x62) == *(short *)(temp_v4 + 0x62)
                     )) {
                    *(unsigned short *)(temp_v6 + 0xa84) = 0;
                  }
                  temp_v14 = temp_v14 + 1;
                } while (temp_v14 < 0x18);
              }
              temp_v4 = 0;
              do {
                *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x27) = 0;
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 4);
              temp_v4 = 0;
              do {
                temp_v14 = temp_v1 + temp_v4 * 4;
                *(unsigned char *)(*(int *)(temp_v14 + 0xa20) + 0x27) = 0;
                pair40Set(*(unsigned int *)(temp_v14 + 0xa20),0);
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 0x18);
              FUN_0023b45c(0);
              FUN_0020b718(8,1);
            }
            if (*(char *)(temp_v1 + 0x9b4) == '\x03') {
              *(unsigned char *)(temp_v1 + 0x34) = 0;
              FUN_002a5cf4();
            }
            temp_v6 = 1;
            temp_v10 = 0x100020f;
LAB_00263984:
            eventQueueAddUniqueIfValid(temp_v10);
          }
          else {
            temp_v4 = FUN_0020a760(1);
            if ((temp_v4 != 0) && (temp_v22 = temp_v1 + 0xc88, *(char *)(temp_v1 + 0x42) != '\0')) {
              temp_v22 = temp_v1 + 0xcec;
            }
          }
        }
      }
    }
    temp_v0 = *(char *)(temp_v1 + 0x9b4);
    if (!(temp_v0 == '\t' || temp_v0 == '\b')) {
      if (((temp_v0 == '\x06' || temp_v0 == '\x05') || (temp_v0 == '\a' || temp_v0 == '\x02')) &&
         (temp_v6 == 0)) {
        FUN_0028c2ec(temp_v22,1);
      }
    }
    else if (temp_v6 == 0) {
      FUN_002707d8(temp_v22,1);
    }
    temp_v4 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x25) = 0;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa20) + 0x25) = 0;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    temp_v4 = FUN_002a4878(temp_v22);
    temp_v14 = FUN_002a4894(temp_v22);
    *(unsigned char *)(*(int *)(temp_v1 + (temp_v4 + temp_v14 * 4) * 4 + 0xa20) + 0x25) = 1;
    FUN_0034cda0();
    break;
  case 8:
    temp_v6 = temp_v1 + 0xd50;
    *(unsigned short *)(temp_v1 + 0xa04) = 0;
    if (*(char *)(temp_v1 + 0x42) != '\0') {
      temp_v6 = temp_v1 + 0xdb4;
    }
    if ((*(char *)(temp_v6 + 0x61) != '\0') || (*(char *)(temp_v6 + 0x60) != '\0')) {
      if (*(char *)(temp_v1 + 0x9b4) != '\v') {
        FUN_0023b45c(0);
      }
      *(unsigned char *)(temp_v6 + 0x61) = 0;
      *(unsigned char *)(temp_v6 + 0x60) = 0;
    }
    else {
      temp_v15 = FUN_0022e714();
      if (temp_v15 == 0) {
        if ((*(char *)(temp_v1 + 0x9b4) != '\n') && (*(char *)(temp_v1 + 0x9b4) != '\x12')) {
          FUN_0037e1b0(0xffffffff,1);
        }
        else if (*(int *)(temp_v1 + 0xe84) == 0) {
          temp_v10 = 1;
          FUN_0037e1b0(temp_v10,0);
        }
        else if (*(int *)(temp_v1 + 0xe84) == 1) {
          temp_v10 = 2;
          FUN_0037e1b0(temp_v10,0);
        }
        if (*(char *)(temp_v1 + 0x9b4) != '\v') {
          temp_v15 = FUN_002a4894(temp_v6);
          if (temp_v15 < 1) {
            temp_v15 = FUN_002a4878(temp_v6);
            temp_v9 = temp_v1 + temp_v15 * 4;
            if (*(int *)(*(int *)(temp_v9 + 0xa10) + 0x34) != -1) {
              if (*(int *)(*(int *)(temp_v9 + 0xa10) + 0x34) != -2) {
                temp_v9 = gameGetSlotTable();
                temp_v15 = (int)*(char *)(temp_v9 + temp_v15 + 0x1c9f);
                if (temp_v15 < 0) {
                  FUN_0031f718(0,0);
                  FUN_0023b45c(0);
                }
                else {
                  temp_v9 = btlMainIsRunning();
                  if (temp_v9 != 0) {
                    temp_v9 = gameGetSlotRecord(temp_v15);
                    temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x62);
                    FUN_00272310(temp_v5);
                    temp_v10 = gameGetSlotRecord(temp_v15);
                    FUN_00334214(temp_v10,0,0,temp_v5);
                    FUN_002a7324(1);
                  }
                  else {
                    temp_v10 = gameGetSlotRecord(temp_v15);
                    FUN_00334214(temp_v10,0,0);
                    FUN_002a7324(1);
                  }
                }
              }
              else {
                temp_v15 = btlMainGetUnk14();
                if (temp_v15 == 0) {
                  FUN_0031f718(0,0);
                  FUN_0023b45c(0);
                }
                else {
                  temp_v9 = btlMainIsRunning();
                  if (temp_v9 != 0) {
                    temp_v5 = (unsigned int)*(unsigned short *)(temp_v15 + 0x62);
                    FUN_00272310(temp_v5);
                    FUN_00334214(temp_v15,0,0,temp_v5);
                    FUN_002a7324(1);
                  }
                  else {
                    FUN_00334214(temp_v15,0,0);
                    FUN_002a7324(1);
                  }
                }
              }
            }
            else {
              temp_v9 = btlMainIsRunning();
              temp_v15 = 0;
              if (temp_v9 != 0) {
                FUN_002cf5bc();
                temp_v15 = temp_v9;
              }
              FUN_0031f718(0xffffffff,0,temp_v15);
              FUN_002a7324(1);
            }
            temp_v9 = 0;
            temp_v15 = 0;
            do {
              temp_v7 = gameGetSlotTable();
              temp_v7 = temp_v7 + temp_v15;
              temp_v15 = temp_v15 + 1;
              if (-1 < *(char *)(temp_v7 + 0x1ca0)) {
                temp_v9 = temp_v9 + 1;
              }
            } while (temp_v15 < 3);
            if (temp_v9 < 1) {
              temp_v10 = 0;
            }
            else {
              temp_v10 = 1;
            }
          }
          else {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v9 = FUN_002a4878();
              temp_v15 = FUN_002a4894(temp_v6);
              temp_v9 = temp_v9 + temp_v15 * 4;
            }
            else {
              temp_v15 = FUN_002a4894(temp_v6);
              temp_v7 = *(int *)(temp_v1 + 0x2c);
              temp_v9 = FUN_002a4878(temp_v6);
              temp_v9 = temp_v9 + temp_v15 * 4 + temp_v7 * 0xc;
            }
            temp_v15 = *(int *)(temp_v1 + (temp_v9 - 4) * 8 + 0xa80);
            if (temp_v15 < 0) {
              FUN_0031f718(0,0);
              FUN_0023b45c(0);
            }
            else {
              temp_v9 = btlMainIsRunning();
              if (temp_v9 != 0) {
                temp_v9 = gameGetSlotRecord(temp_v15);
                temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x62);
                FUN_00272310(temp_v5);
                temp_v10 = gameGetSlotRecord(temp_v15);
                FUN_00334214(temp_v10,0,0,temp_v5);
                FUN_002a7324(1);
              }
              else {
                temp_v10 = gameGetSlotRecord(temp_v15);
                FUN_00334214(temp_v10,0,0);
                FUN_002a7324(1);
              }
            }
            temp_v15 = gameSlotTableFindFree();
            if (temp_v15 >= 2) {
              temp_v10 = 1;
            }
            else {
              temp_v10 = 0;
            }
          }
          FUN_0038b548(temp_v10);
        }
        else {
          FUN_0037e1b0(0);
          FUN_00334214(temp_v1 + 0xe98,0,0);
          FUN_002a7324(1);
          FUN_002c8550(3);
        }
      }
    }
    temp_v15 = g_partyPanel;
    temp_v20 = 0;
    if (((temp_v14 == 1 || temp_v14 == 2) && (temp_v8 < 0x1c)) && ((int)temp_v8 < *(int *)(temp_v6 + 0x50)))
    {
      temp_v20 = 1;
    }
    if (*(char *)(temp_v1 + 0x43) != '\0') {
      temp_v4 = FUN_002a4878(temp_v6);
      temp_v14 = gameGlobalsGetState();
      if (temp_v14 != 0) {
        temp_v22 = FUN_002a4894(temp_v6);
        if (temp_v22 < 1) {
          temp_v22 = FUN_002a4878(temp_v6);
          temp_v15 = 0;
          do {
            temp_v22 = temp_v22 + temp_v14;
            if (temp_v22 < 0) {
              temp_v22 = 3;
            }
            else {
              if (temp_v22 >= 4) {
                temp_v22 = 0;
                break;
              }
              if (temp_v22 == 0) break;
            }
            temp_v9 = gameGetSlotTable();
            temp_v20 = *(char *)(temp_v9 + temp_v22 + 0x1c9f) < '\0';
            if (temp_v20) {
              temp_v15 = temp_v15 + 1;
            }
          } while (temp_v20 && temp_v15 < 4);
          temp_v14 = FUN_002a4878(temp_v6);
          if ((temp_v14 != temp_v22) && (FUN_002a4914(temp_v6,temp_v22), *(char *)(temp_v1 + 0x9b4) != '\v'))
          {
            FUN_0023b45c(0);
            if (*(char *)(temp_v1 + 0x9b4) == '\t') {
              temp_v14 = gameGetSlotTable();
              FUN_002cbca8((int)*(char *)(temp_v14 + temp_v22 + 0x1c9f),temp_v22,0);
            }
            if (temp_v4 != temp_v22) {
              pair40Set(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0xa10),0);
            }
          }
        }
        else {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v22 = FUN_002a4878();
            temp_v4 = FUN_002a4894(temp_v6);
            temp_v22 = temp_v22 + temp_v4 * 4;
          }
          else {
            temp_v4 = FUN_002a4894(temp_v6);
            temp_v15 = *(int *)(temp_v1 + 0x2c);
            temp_v22 = FUN_002a4878(temp_v6);
            temp_v22 = temp_v22 + temp_v4 * 4 + temp_v15 * 0xc;
          }
          temp_v22 = temp_v22 - 4;
          temp_v15 = 0;
          temp_v4 = temp_v22;
          do {
            temp_v4 = temp_v4 + temp_v14;
            if (temp_v4 < 0) {
              temp_v4 = 0x17;
            }
            else if (temp_v4 >= 0x18) {
              temp_v4 = 0;
            }
            temp_v9 = gameGetSlotTable();
          } while ((*(char *)(temp_v9 + temp_v4 + 0x1c88) < '\0') &&
                  (temp_v15 = temp_v15 + 1, temp_v15 < 0x19));
          if (temp_v4 != temp_v22) {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v14 = temp_v4 + 4;
              *(unsigned int *)(temp_v1 + 0x2c) = 0;
              FUN_002a4914(temp_v6,temp_v14 % 4);
              FUN_002a4964(temp_v6,(int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1e)) >> 2);
            }
            else {
              if (temp_v4 >= 0xc) {
                *(unsigned int *)(temp_v1 + 0x2c) = 1;
                temp_v14 = temp_v4 - 8;
                FUN_002a4914(temp_v6,temp_v14 % 4);
                FUN_002a4964(temp_v6,(int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1e)) >> 2);
              }
              else {
                temp_v14 = temp_v4 + 4;
                *(unsigned int *)(temp_v1 + 0x2c) = 0;
                FUN_002a4914(temp_v6,temp_v14 % 4);
                FUN_002a4964(temp_v6,(int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1e)) >> 2);
              }
              temp_v14 = 0;
              do {
                FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v14 * 4 + 0xa10),
                             *(unsigned int *)(temp_v1 + 0x2c));
                temp_v14 = temp_v14 + 1;
              } while (temp_v14 < 4);
              temp_v14 = 0;
              do {
                FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v14 * 4 + 0xa20),
                             *(unsigned int *)(temp_v1 + 0x2c));
                temp_v14 = temp_v14 + 1;
              } while (temp_v14 < 0x18);
            }
            if (*(char *)(temp_v1 + 0x9b4) != '\v') {
              FUN_0023b45c(0);
              if (*(char *)(temp_v1 + 0x9b4) == '\t') {
                FUN_002cbca8(*(unsigned int *)(temp_v1 + temp_v4 * 8 + 0xa80),temp_v4,1);
              }
              pair40Set(*(unsigned int *)(temp_v1 + temp_v22 * 4 + 0xa20),0);
            }
          }
        }
      }
    }
    else if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
      temp_v9 = FUN_00284140((int)*(short *)(g_partyPanel + 0x9fc));
      if (temp_v9 != 6) {
        temp_v15 = FUN_00284140((int)*(short *)(temp_v15 + 0x9fe));
        if (temp_v15 != 6) goto LAB_00264384;
        FUN_002884c8(temp_v6);
      }
      else {
        FUN_0026e848(temp_v6);
      }
      FUN_0026fa30();
      temp_v4 = FUN_002a4894(temp_v6);
      if ((0 < temp_v4) && (*(char *)(temp_v1 + 0x9b4) != '\v')) {
        FUN_0023b45c(0);
      }
      FUN_0020b718(3,1);
      eventQueueAddUniqueIfValid(0x1000210);
    }
    else {
LAB_00264384:
      temp_v15 = FUN_002a4894(temp_v6);
      if ((0 < temp_v15) && (temp_v15 = FUN_0020aba0(temp_v6,0), temp_v15 != 0)) {
        if (*(char *)(temp_v1 + 0x9b4) != '\v') {
          FUN_0023b45c(0);
          temp_v4 = 0;
          do {
            pair40Set(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0xa20),0);
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
        }
        FUN_0020b718(3,1);
        temp_v10 = 0x1000210;
        goto LAB_0026546c;
      }
      temp_v15 = temp_v6;
      FUN_00228b04(temp_v6,1);
      if (!(temp_v15 == 0 && !temp_v20)) {
        if (temp_v20) {
          temp_v4 = FUN_002a4878(temp_v6);
          temp_v14 = FUN_002a4894(temp_v6);
          FUN_002a4914(temp_v6,(int)temp_v8 % 4);
          FUN_002a4964(temp_v6,(int)(temp_v8 + ((unsigned int)((int)temp_v8 >> 0x1f) >> 0x1e)) >> 2);
          if (temp_v4 + temp_v14 * 4 != temp_v8) {
            eventQueueAddUniqueIfValid();
          }
        }
        temp_v4 = 0;
        do {
          temp_v14 = temp_v1 + temp_v4 * 4;
          pair40Set(*(unsigned int *)(temp_v14 + 0xa10),0);
          *(unsigned char *)(*(int *)(temp_v14 + 0xa10) + 0x27) = 0;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 4);
        temp_v4 = 0;
        do {
          temp_v14 = temp_v1 + temp_v4 * 4;
          pair40Set(*(unsigned int *)(temp_v14 + 0xa20),0);
          *(unsigned char *)(*(int *)(temp_v14 + 0xa20) + 0x27) = 0;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
        FUN_003344b4(0);
        if (*(char *)(temp_v1 + 0x9b4) != '\v') {
          FUN_0023b45c(0);
        }
      }
      else if ((*(char *)(temp_v1 + 0x9b4) != '\x11') || (temp_v15 = FUN_002c0854(), temp_v15 != 0)) {
        temp_v0 = *(char *)(temp_v1 + 0x9b4);
        if (temp_v0 != '\f') {
          if (temp_v0 != '\r' && temp_v0 != '\x0e') {
            temp_v15 = 0;
            FUN_001517b4(0,1);
            if ((temp_v15 != 0) || ((temp_v14 == 6 && (temp_v8 < 0x1c)))) {
              if (*(char *)(temp_v1 + 0x9b4) == '\x12') {
                *(unsigned char *)(*(int *)(temp_v1 + 0x107c) + 0x1b5) = 1;
                FUN_0023b45c(0);
              }
              temp_v14 = FUN_002a4894(temp_v6);
              if (temp_v14 < 1) {
                temp_v14 = FUN_002a4878(temp_v6);
                temp_v15 = temp_v1 + temp_v14;
                if (*(char *)(temp_v15 + 0x9c0) != '\0') {
                  temp_v9 = temp_v1 + temp_v14 * 4;
                  *(unsigned char *)(*(int *)(temp_v9 + 0xa10) + 0x27) = 1;
                  temp_v0 = *(char *)(temp_v1 + 0x9b4);
                  if (temp_v0 == '\n' || temp_v0 == '\x12') {
                    *(unsigned char *)(*(int *)(temp_v1 + 0xe84) + temp_v1 + 0xe88) = 0;
                    piVar20 = (int *)(temp_v1 + 0xe84);
                    temp_v4 = gameGetSlotRecord((int)*(char *)(temp_v4 + temp_v14 + 0x1c9f));
                    *(unsigned int *)(temp_v1 + *piVar20 * 4 + 0xe7c) = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
                    *piVar20 = *piVar20 + 1;
                    FUN_002ade88();
                    if (*(char *)(temp_v1 + 0x9b4) == '\x12') {
                      FUN_0037e1b0((int)(char)((char)*(unsigned int *)(temp_v1 + 0xe84) + '\x01'),0);
                    }
                    FUN_0020d934();
                    temp_v4 = *(int *)(temp_v1 + 0xe84);
                    if (temp_v4 >= 2) {
                      FUN_00270498();
                      temp_v14 = g_partyPanel;
                      if (temp_v4 != 0) {
                        temp_v4 = 0;
                        if (0 < *(int *)(g_partyPanel + 0xa00)) {
                          do {
                            ifTouchRegionRemove();
                            temp_v4 = temp_v4 + 1;
                          } while (temp_v4 < *(int *)(temp_v14 + 0xa00));
                        }
                        *(unsigned int *)(temp_v14 + 0xa00) = 0;
                        __aeabi_memset4(temp_v14 + 0x9c4,0x3c,0xffffffff);
                        FUN_00230ac0(7,0xffffffff,0);
                        *(unsigned char *)(temp_v1 + 0xe8a) = 2;
                        if (*(char *)(temp_v1 + 0x9b4) != '\x12') {
                          sysPlaySe(0x5f);
                          *(unsigned int *)(temp_v1 + 0x20) = 0xb;
                          FUN_0020b718(0x17,1);
                          FUN_0023b45c(0);
                        }
                        else {
                          *(unsigned int *)(temp_v1 + 0x20) = 0x19;
                          *(unsigned char *)(temp_v1 + 0x34) = 1;
                          FUN_002a5cf4();
                          FUN_0037e1b0(0);
                        }
                      }
                      else {
                        temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),5);
                        if (temp_v4 != 0) {
                          FUN_0020b718(0xd,1);
                          sysPlaySe(0xa0);
                        }
                      }
                    }
                    else {
                      temp_v5 = *(unsigned int *)(temp_v1 + 0x1074);
                      *(unsigned int *)(temp_v1 + 0x1074) = temp_v5 | 0x40;
                      *(unsigned int *)(temp_v1 + 0x1078) = temp_v5;
                      if (temp_v5 != (temp_v5 | 0x40)) {
                        FUN_0020d934();
                      }
                    }
                    goto LAB_00264d34;
                  }
                  if (temp_v0 == '\v') {
                    FUN_004ab734(g_btlUiBlock);
                    FUN_00227af0(&LAB_00264bbc);
                    FUN_002a3258();
                    menuStateStartSelect(0);
                    obj04Finish();
                    FUN_0022e774();
                    temp_v10 = 0xe;
                    *(int *)(temp_v1 + 0x9b8) = temp_v14;
                    goto LAB_00264c78;
                  }
                  if (temp_v0 != '\t') {
                    if (temp_v0 != '\x06') {
                      if (!(temp_v0 == '\x02' || temp_v0 == '\x04')) {
                        if (temp_v0 != '\x0f') {
                          if (temp_v0 != '\x10') {
                            if (temp_v0 != '\x11') {
                              if (temp_v0 != '\x13') {
                                *(int *)(temp_v1 + 0x9b8) = temp_v14;
                                *(unsigned char *)(temp_v1 + 0x34) = 1;
                                FUN_002a5cf4();
                                goto LAB_00264d34;
                              }
                              FUN_003343f0();
                              FUN_00230ac0(7,0xffffffff,0);
                              *(unsigned int *)(temp_v1 + 0x20) = 0x14;
                              temp_v10 = 0x17;
                            }
                            else {
                              temp_v4 = gameGetSlotTable();
                              if (*(char *)(temp_v4 + temp_v14 + 0x1c9f) < '\0') goto LAB_002654c8;
                              FUN_003343f0(1);
                              FUN_00230ac0(7,0xffffffff,0);
                              *(unsigned int *)(temp_v1 + 0x20) = 0x13;
                              temp_v10 = 0x17;
                            }
LAB_00264c78:
                            FUN_0020b718(temp_v10,1);
                          }
                          else {
                            temp_v15 = FUN_002f036c();
                            if ((temp_v15 != 0) || (temp_v15 = FUN_002a7410(), temp_v15 != 0)) break;
                            temp_v15 = FUN_0022e714();
                            temp_v4 = temp_v4 + temp_v14;
                            if (temp_v15 != 0) {
                              temp_v4 = gameGetSlotRecord((int)*(char *)(temp_v4 + 0x1c9f));
                              *(unsigned short *)(temp_v1 + 0x3c) = *(unsigned short *)(temp_v4 + 0x62);
                              FUN_0020b718(0x18,1);
                              FUN_003343f0(1);
                            }
                            else {
                              temp_v14 = gameGetSlotRecord((int)*(char *)(temp_v4 + 0x1c9f));
                              *(unsigned short *)(temp_v1 + 0x3e) = *(unsigned short *)(temp_v14 + 0x62);
                              *(short *)(temp_v1 + 0x40) = (short)*(char *)(temp_v4 + 0x1c9f);
                              FUN_003343f0(1);
                              temp_v10 = 0x18;
                              FUN_0020b718(temp_v10,1);
                            }
                          }
                        }
                        else {
                          temp_v4 = gameGetSlotTable();
                          if (*(char *)(temp_v4 + temp_v14 + 0x1c9f) < '\0') goto LAB_002654c8;
                          *(unsigned int *)(temp_v1 + 0x9bc) = 0xffffffff;
                          *(int *)(temp_v1 + 0x9b8) = temp_v14;
                          temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),0);
                          if (temp_v4 != 0) {
                            FUN_003343f0(1);
                            temp_v10 = 0x12;
                            FUN_0020b718(temp_v10,1);
                          }
                        }
                      }
                      else {
                        *(int *)(temp_v1 + 0x9b8) = temp_v14;
                        if (-1 < *(char *)(temp_v4 + temp_v14 + 0x1c9f)) {
                          temp_v4 = gameGetSlotRecord();
                          temp_v14 = 0;
                          do {
                            temp_v15 = temp_v1 + temp_v14 * 8;
                            if ((-1 < *(int *)(temp_v15 + 0xa80)) &&
                               (temp_v9 = gameGetSlotRecord(),
                               *(short *)(temp_v9 + 0x62) == *(short *)(temp_v4 + 0x62))) {
                              *(unsigned short *)(temp_v15 + 0xa84) = 1;
                            }
                            temp_v14 = temp_v14 + 1;
                          } while (temp_v14 < 0x18);
                        }
                        FUN_0023b45c(0);
                        temp_v21 = FUN_00372570(0);
                        if ((int)temp_v21 == 0) {
                          temp_v10 = 6;
                          FUN_0020b718(temp_v10,1);
                        }
                        else {
                          FUN_0023b45c(0,(int)((unsigned long long)temp_v21 >> 0x20));
                          FUN_0020b718(3,1);
                          *(unsigned int *)(temp_v1 + 0x24) = 6;
                        }
                      }
                    }
                    else {
                      FUN_003343f0(1);
                      if (temp_v14 != 0) {
                        temp_v4 = temp_v4 + temp_v14;
                        temp_v14 = (int)*(short *)(temp_v1 + 0x38);
                        FUN_00333694(temp_v14,(int)*(char *)(temp_v4 + 0x1c9f),
                                     *(unsigned short *)(temp_v1 + 0x36),1);
                        if (temp_v14 == 0) {
                          FUN_00333694((int)*(short *)(temp_v1 + 0x38),(int)*(char *)(temp_v4 + 0x1c9f),
                                       *(unsigned short *)(temp_v1 + 0x36),0);
                          temp_v10 = gameGetSlotRecord((int)*(char *)(temp_v4 + 0x1c9f));
                          FUN_00334214(temp_v10,0,0);
                          FUN_0021c1e0();
                          mapBlockSetRequest();
                          temp_v14 = (int)*(short *)(temp_v1 + 0x38);
                          FUN_00333694(temp_v14,(int)*(char *)(temp_v4 + 0x1c9f),
                                       *(unsigned short *)(temp_v1 + 0x36),1);
                          if (temp_v14 == 1) {
                            *(unsigned char *)(temp_v15 + 0x9c0) = 0;
                          }
                          goto LAB_00264b88;
                        }
                      }
                      else {
                        temp_v4 = (int)*(short *)(temp_v1 + 0x38);
                        FUN_00333694(temp_v4,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                        if (temp_v4 == 0) {
                          FUN_00333694((int)*(short *)(temp_v1 + 0x38),0xffffffff,
                                       *(unsigned short *)(temp_v1 + 0x36),0);
                          FUN_0031f718(0xffffffff,0);
                          FUN_0021c1e0();
                          mapBlockSetRequest();
                          temp_v4 = (int)*(short *)(temp_v1 + 0x38);
                          FUN_00333694(temp_v4,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                          if (temp_v4 == 1) {
                            *(unsigned char *)(temp_v1 + 0x9c0) = 0;
                          }
                          obj48Arm(*(unsigned int *)(temp_v1 + 0xa10),0xff);
                          FUN_0020b718(0x15,1);
                          goto LAB_00265434;
                        }
                      }
                    }
LAB_00264d34:
                    if (temp_v22 == 0) goto LAB_00264df0;
                  }
                  else {
                    FUN_003343f0(1);
                    if (temp_v14 != 0) {
                      temp_v4 = temp_v4 + temp_v14;
                      temp_v14 = (int)*(char *)(temp_v4 + 0x1c9f);
                      FUN_00480140(temp_v14,*(unsigned short *)(temp_v1 + 0x36),1);
                      if (temp_v14 != 0) goto LAB_00264d34;
                      FUN_00480140((int)*(char *)(temp_v4 + 0x1c9f),*(unsigned short *)(temp_v1 + 0x36),0);
                      temp_v10 = gameGetSlotRecord((int)*(char *)(temp_v4 + 0x1c9f));
                      FUN_00334214(temp_v10,0,0);
                      FUN_0021c1e0();
                      mapBlockSetRequest();
                      temp_v14 = (int)*(char *)(temp_v4 + 0x1c9f);
                      FUN_00480140(temp_v14,*(unsigned short *)(temp_v1 + 0x36),1);
                      if (temp_v14 == 1) {
                        *(unsigned char *)(temp_v15 + 0x9c0) = 0;
                      }
                      temp_v10 = gameGetSlotRecord((int)*(char *)(temp_v4 + 0x1c9f));
                      rt_memcpy_w(temp_v1 + 0x10e4,temp_v10,300);
                      objBInitBlock19D0(temp_v1 + 0x10e4,0);
LAB_00264b88:
                      obj48Arm(*(unsigned int *)(temp_v9 + 0xa10),0xff);
                      FUN_0020b718(0x15,1);
                    }
                    else {
                      temp_v4 = -1;
                      FUN_00480140(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                      if (temp_v4 != 0) goto LAB_00264d34;
                      FUN_00480140(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),0);
                      FUN_0031f718(0xffffffff,0);
                      FUN_0021c1e0();
                      mapBlockSetRequest();
                      temp_v4 = -1;
                      FUN_00480140(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                      if (temp_v4 == 1) {
                        *(unsigned char *)(temp_v1 + 0x9c0) = 0;
                      }
                      FUN_0021c1e0();
                      mapBlockSetRequest();
                      obj48Arm(*(unsigned int *)(temp_v1 + 0xa10),0xff);
                      temp_v10 = gameGetPlayerData();
                      rt_memcpy_w(temp_v1 + 0x1080,temp_v10,100);
                      FUN_00372100(temp_v1 + 0x1080,0);
                      FUN_0020b718(0x15,1);
                    }
                  }
LAB_00265434:
                  temp_v10 = 0x100021c;
LAB_0026546c:
                  eventQueueAddUniqueIfValid(temp_v10);
                }
                else if ((((*(char *)(temp_v1 + 0x9b4) == '\x12') && (temp_v14 >= 1)) &&
                         (*(char *)(temp_v4 + temp_v14 + 0x1c9f) >= '\0')) &&
                        (temp_v4 = gameGetSlotRecord(), temp_v4 != 0)) {
                  FUN_002f707c(*(unsigned int *)(temp_v1 + temp_v14 * 4 + 0xfcc),
                               *(unsigned short *)(temp_v4 + 0x62),
                               *(unsigned short *)(temp_v1 + temp_v14 * 2 + 0x103c));
                }
                else {
LAB_002654c8:
                  temp_v10 = 0x100020f;
                  eventQueueAddUniqueIfValid(temp_v10);
                }
              }
              else {
                if (*(char *)(temp_v1 + 0x42) != '\0') {
                  temp_v14 = FUN_002a4878();
                  temp_v4 = FUN_002a4894(temp_v6);
                  temp_v14 = temp_v14 + temp_v4 * 4;
                }
                else {
                  temp_v4 = FUN_002a4894(temp_v6);
                  temp_v15 = *(int *)(temp_v1 + 0x2c);
                  temp_v14 = FUN_002a4878(temp_v6);
                  temp_v14 = temp_v14 + temp_v4 * 4 + temp_v15 * 0xc;
                }
                temp_v14 = temp_v14 - 4;
                temp_v4 = temp_v1 + temp_v14 * 8;
                if (*(short *)(temp_v4 + 0xa84) != 0) {
                  temp_v15 = temp_v1 + temp_v14 * 4;
                  *(unsigned char *)(*(int *)(temp_v15 + 0xa20) + 0x27) = 1;
                  temp_v0 = *(char *)(temp_v1 + 0x9b4);
                  if (!(temp_v0 == '\n' || temp_v0 == '\x12')) {
                    if (temp_v0 != '\v') {
                      if (temp_v0 != '\t') {
                        if (temp_v0 != '\x06') {
                          if (!(temp_v0 == '\x02' || temp_v0 == '\x04')) {
                            if (temp_v0 != '\x0f') {
                              if (temp_v0 != '\x10') {
                                if (temp_v0 != '\x11') {
                                  if (temp_v0 != '\x13') {
                                    *(int *)(temp_v1 + 0x9bc) = temp_v14;
                                    *(unsigned char *)(temp_v1 + 0x34) = 1;
                                    FUN_002a5cf4();
                                  }
                                  else {
                                    FUN_003343f0();
                                    FUN_00230ac0(7,0xffffffff,0);
                                    *(unsigned int *)(temp_v1 + 0x20) = 0x14;
                                    temp_v10 = 0x17;
                                    FUN_0020b718(temp_v10,1);
                                  }
                                }
                                else {
                                  temp_v4 = gameGetSlotTable();
                                  if (*(char *)(temp_v4 + temp_v14 + 0x1c88) < '\0') goto LAB_002654c8;
                                  FUN_003343f0(1);
                                  FUN_00230ac0(7,0xffffffff,0);
                                  *(unsigned int *)(temp_v1 + 0x20) = 0x13;
                                  temp_v10 = 0x17;
                                  FUN_0020b718(temp_v10,1);
                                }
                              }
                              else {
                                temp_v14 = FUN_0022e714();
                                if (temp_v14 != 0) {
                                  temp_v4 = gameGetSlotRecord(*(unsigned int *)(temp_v4 + 0xa80));
                                  *(unsigned short *)(temp_v1 + 0x3c) = *(unsigned short *)(temp_v4 + 0x62);
                                  FUN_0020b718(0x18,1);
                                  FUN_003343f0(1);
                                }
                                else {
                                  temp_v14 = gameGetSlotRecord(*(unsigned int *)(temp_v4 + 0xa80));
                                  *(unsigned short *)(temp_v1 + 0x3e) = *(unsigned short *)(temp_v14 + 0x62);
                                  *(short *)(temp_v1 + 0x40) = (short)*(unsigned int *)(temp_v4 + 0xa80);
                                  FUN_003343f0(1);
                                  temp_v10 = 0x18;
                                  FUN_0020b718(temp_v10,1);
                                }
                              }
                            }
                            else {
                              temp_v4 = gameGetSlotTable();
                              if (*(char *)(temp_v4 + temp_v14 + 0x1c88) < '\0') goto LAB_002654c8;
                              *(unsigned int *)(temp_v1 + 0x9b8) = 0xffffffff;
                              *(int *)(temp_v1 + 0x9bc) = temp_v14;
                              temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),0);
                              if (temp_v4 != 0) {
                                FUN_003343f0(1);
                                temp_v10 = 0x12;
                                FUN_0020b718(temp_v10,1);
                              }
                            }
                          }
                          else {
                            *(int *)(temp_v1 + 0x9bc) = temp_v14;
                            FUN_002a4914(temp_v1 + 0xc24,1);
                            FUN_0023b45c(0);
                            temp_v10 = 4;
                            FUN_0020b718(temp_v10,1);
                          }
                        }
                        else {
                          FUN_003343f0(1);
                          temp_v14 = (int)*(short *)(temp_v1 + 0x38);
                          FUN_00333694(temp_v14,*(unsigned int *)(temp_v4 + 0xa80),
                                       *(unsigned short *)(temp_v1 + 0x36),1);
                          if (temp_v14 == 0) {
                            FUN_00333694((int)*(short *)(temp_v1 + 0x38),
                                         *(unsigned int *)(temp_v4 + 0xa80),
                                         *(unsigned short *)(temp_v1 + 0x36),0);
                            temp_v10 = gameGetSlotRecord(*(unsigned int *)(temp_v4 + 0xa80));
                            FUN_00334214(temp_v10,0,0);
                            temp_v22 = 1;
                            FUN_0021c1e0();
                            mapBlockSetRequest();
                            temp_v14 = (int)*(short *)(temp_v1 + 0x38);
                            FUN_00333694(temp_v14,*(unsigned int *)(temp_v4 + 0xa80),
                                         *(unsigned short *)(temp_v1 + 0x36),1);
                            if (temp_v14 == 1) {
                              *(unsigned short *)(temp_v4 + 0xa84) = 0;
                            }
                            obj48Arm(*(unsigned int *)(temp_v15 + 0xa20),0xff);
                            temp_v10 = 0x15;
                            FUN_0020b718(temp_v10,1);
                          }
                        }
                      }
                      else {
                        FUN_003343f0(1);
                        temp_v14 = *(int *)(temp_v4 + 0xa80);
                        FUN_00480140(temp_v14,*(unsigned short *)(temp_v1 + 0x36),1);
                        if (temp_v14 == 0) {
                          FUN_00480140(*(unsigned int *)(temp_v4 + 0xa80),*(unsigned short *)(temp_v1 + 0x36),
                                       0);
                          temp_v10 = gameGetSlotRecord(*(int *)(temp_v4 + 0xa80));
                          FUN_00334214(temp_v10,0,0);
                          temp_v22 = 1;
                          FUN_0021c1e0();
                          mapBlockSetRequest();
                          temp_v14 = *(int *)(temp_v4 + 0xa80);
                          FUN_00480140(temp_v14,*(unsigned short *)(temp_v1 + 0x36),1);
                          if (temp_v14 == 1) {
                            *(unsigned short *)(temp_v4 + 0xa84) = 0;
                          }
                          temp_v10 = gameGetSlotRecord(*(unsigned int *)(temp_v4 + 0xa80));
                          rt_memcpy_w(temp_v1 + 0x10e4,temp_v10,300);
                          objBInitBlock19D0(temp_v1 + 0x10e4,0);
                          obj48Arm(*(unsigned int *)(temp_v15 + 0xa20),0xff);
                          FUN_0020b718(0x15,1);
                        }
                      }
                    }
                    else {
                      FUN_004ab734(g_btlUiBlock);
                      FUN_00227af0(&LAB_00264bbc);
                      FUN_002a3258();
                      menuStateStartSelect(0);
                      obj04Finish();
                      FUN_0022e774();
                      *(int *)(temp_v1 + 0x9bc) = temp_v14;
                      FUN_0020b718(0xe,1);
                    }
                  }
                  else {
                    *(unsigned char *)(*(int *)(temp_v1 + 0xe84) + temp_v1 + 0xe88) = 1;
                    piVar20 = (int *)(temp_v1 + 0xe84);
                    temp_v4 = gameGetSlotRecord(*(unsigned int *)(temp_v4 + 0xa80));
                    *(unsigned int *)(temp_v1 + *piVar20 * 4 + 0xe7c) = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
                    *piVar20 = *piVar20 + 1;
                    FUN_002ade88();
                    if (*(char *)(temp_v1 + 0x9b4) == '\x12') {
                      FUN_0037e1b0((int)(char)((char)*(unsigned int *)(temp_v1 + 0xe84) + '\x01'),0);
                    }
                    FUN_0020d934();
                    temp_v4 = *(int *)(temp_v1 + 0xe84);
                    if (temp_v4 >= 2) {
                      FUN_00270498();
                      temp_v14 = g_partyPanel;
                      if (temp_v4 != 0) {
                        temp_v4 = 0;
                        if (0 < *(int *)(g_partyPanel + 0xa00)) {
                          do {
                            ifTouchRegionRemove();
                            temp_v4 = temp_v4 + 1;
                          } while (temp_v4 < *(int *)(temp_v14 + 0xa00));
                        }
                        *(unsigned int *)(temp_v14 + 0xa00) = 0;
                        __aeabi_memset4(temp_v14 + 0x9c4,0x3c,0xffffffff);
                        FUN_00230ac0(7,0xffffffff,0);
                        *(unsigned char *)(temp_v1 + 0xe8a) = 2;
                        if (*(char *)(temp_v1 + 0x9b4) != '\x12') {
                          sysPlaySe(0x5f);
                          *(unsigned int *)(temp_v1 + 0x20) = 0xb;
                          FUN_0020b718(0x17,1);
                          FUN_0023b45c(0);
                        }
                        else {
                          *(unsigned int *)(temp_v1 + 0x20) = 0x19;
                          FUN_002a5cf4();
                          *(unsigned char *)(temp_v1 + 0x34) = 1;
                          FUN_0037e1b0(0);
                        }
                      }
                      else {
                        temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),5);
                        if (temp_v4 != 0) {
                          FUN_0020b718(0xd,1);
                          sysPlaySe(0xa0);
                        }
                      }
                    }
                    else {
                      temp_v5 = *(unsigned int *)(temp_v1 + 0x1074);
                      *(unsigned int *)(temp_v1 + 0x1074) = temp_v5 | 0x40;
                      *(unsigned int *)(temp_v1 + 0x1078) = temp_v5;
                      FUN_0020d934();
                    }
                  }
                  if (temp_v22 != 0) {
                    temp_v10 = 0x100021c;
                  }
                  else {
LAB_00264df0:
                    temp_v10 = 0x100020e;
                  }
                  eventQueueAddUniqueIfValid(temp_v10);
                }
                else if (((*(char *)(temp_v1 + 0x9b4) == '\x12') && (*(int *)(temp_v4 + 0xa80) >= 0)) &&
                        (temp_v4 = gameGetSlotRecord(), temp_v4 != 0)) {
                  FUN_002f707c(*(unsigned int *)(temp_v1 + temp_v14 * 4 + 0xfdc),
                               *(unsigned short *)(temp_v4 + 0x62),
                               *(unsigned short *)(temp_v1 + temp_v14 * 2 + 0x1044));
                }
                else {
                  temp_v10 = 0x100020f;
                  eventQueueAddUniqueIfValid(temp_v10);
                }
              }
              goto LAB_002657e4;
            }
            if (*(char *)(temp_v1 + 0x9b4) == '\f') goto LAB_002654dc;
          }
        }
        else {
LAB_002654dc:
          temp_v22 = gameFlagIsSet(0x401);
          if (temp_v22 != 0) {
            temp_v22 = 0;
            FUN_001517b4(0,1);
            if ((temp_v22 != 0) || ((temp_v14 == 6 && (temp_v8 < 0x1c)))) goto LAB_002657e4;
          }
        }
        temp_v22 = 1;
        FUN_001517b4();
        temp_v14 = g_partyPanel;
        temp_v0 = *(char *)(temp_v1 + 0x9b4);
        if (temp_v22 != 0) {
          if (!(temp_v0 == '\n' || temp_v0 == '\x12')) {
            if (temp_v0 != '\v') {
              *(unsigned char *)(temp_v1 + 0x34) = 0;
              if (temp_v0 != '\r') {
                FUN_002a5cf4();
              }
              else {
                FUN_002a5cf4();
                FUN_0023b45c(0);
                FUN_0035deb0();
              }
            }
            else {
              temp_v4 = 0;
              if (0 < *(int *)(g_partyPanel + 0xa00)) {
                do {
                  ifTouchRegionRemove();
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < *(int *)(temp_v14 + 0xa00));
              }
              *(unsigned int *)(temp_v14 + 0xa00) = 0;
              __aeabi_memset4(temp_v14 + 0x9c4,0x3c,0xffffffff);
              FUN_00230ac0(7,0xffffffff,0);
              FUN_002ade88();
              sysPlaySe(0x5f);
              obj04Finish();
              FUN_0023b45c(0);
              FUN_003343f0(0);
              *(unsigned char *)(temp_v1 + 0x9b4) = 10;
              *(unsigned char *)(temp_v1 + 0xe8a) = 2;
              *(unsigned int *)(temp_v1 + 0x20) = 0xb;
              FUN_0020b718(0x17,1);
            }
          }
          else {
            *(unsigned char *)(*(int *)(temp_v1 + 0xe84) + temp_v1 + 0xe88) = 0xff;
            *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c) = 0xffffffff;
            *(int *)(temp_v1 + 0xe84) = *(int *)(temp_v1 + 0xe84) - 1;
            FUN_002ade88();
            temp_v14 = 0;
            if (*(char *)(*(int *)(temp_v1 + 0xe84) + temp_v1 + 0xe88) == '\0') {
              do {
                if ((-1 < *(char *)(temp_v4 + temp_v14 + 0x1ca0)) &&
                   (temp_v22 = gameGetSlotRecord(),
                   (unsigned int)*(unsigned short *)(temp_v22 + 0x62) ==
                   *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c))) {
                  *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa10) + 0x27) = 0;
                  break;
                }
                temp_v14 = temp_v14 + 1;
              } while (temp_v14 < 3);
            }
            else {
              do {
                if ((-1 < *(int *)(temp_v1 + temp_v14 * 8 + 0xa80)) &&
                   (temp_v4 = gameGetSlotRecord(),
                   (unsigned int)*(unsigned short *)(temp_v4 + 0x62) ==
                   *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c))) {
                  *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa20) + 0x27) = 0;
                  break;
                }
                temp_v14 = temp_v14 + 1;
              } while (temp_v14 < 0x18);
            }
            if (*(int *)(temp_v1 + 0xe84) < 0) {
              *(unsigned char *)(temp_v1 + 0x34) = 0;
              FUN_002a5cf4();
              FUN_0037e1b0(0xffffffff,1);
              if (*(char *)(temp_v1 + 0x9b4) == '\x12') {
                FUN_0022e774();
                FUN_0035deb0();
              }
            }
            else {
              FUN_0037e1b0((int)(char)((char)*(int *)(temp_v1 + 0xe84) + '\x01'),0);
              FUN_0020d934();
            }
          }
          eventQueueAddUniqueIfValid(0x100020f);
          FUN_0033449c(0);
        }
        else {
          temp_v4 = FUN_0020a760(temp_v0 != '\v');
          if ((temp_v4 != 0) && (temp_v6 = temp_v1 + 0xd50, *(char *)(temp_v1 + 0x42) != '\0')) {
            temp_v6 = temp_v1 + 0xdb4;
          }
        }
      }
    }
LAB_002657e4:
    if (*(int *)(temp_v1 + 0x1c) == 8) {
      temp_v4 = 0;
      do {
        *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x25) = 0;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      temp_v4 = 0;
      do {
        *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa20) + 0x25) = 0;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
      temp_v4 = FUN_002a4894(temp_v6);
      if (temp_v4 < 1) {
        temp_v4 = FUN_002a4878(temp_v6);
        *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x25) = 1;
      }
      else {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v4 = FUN_002a4878();
          temp_v14 = FUN_002a4894(temp_v6);
          temp_v4 = temp_v4 + temp_v14 * 4;
        }
        else {
          temp_v14 = FUN_002a4894(temp_v6);
          temp_v22 = *(int *)(temp_v1 + 0x2c);
          temp_v4 = FUN_002a4878(temp_v6);
          temp_v4 = temp_v4 + temp_v14 * 4 + temp_v22 * 0xc;
        }
        temp_v4 = temp_v4 - 4;
        *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa20) + 0x25) = 1;
      }
      temp_v0 = *(char *)(temp_v1 + 0x9b4);
      if (!(temp_v0 == '\t' || temp_v0 == '\b')) {
        if ((!(temp_v0 == '\x06' || temp_v0 == '\x05')) && (!(temp_v0 == '\a' || temp_v0 == '\x02'))) {
          if (temp_v0 == '\n' || temp_v0 == '\x12') {
            *(unsigned int *)(temp_v1 + 0x1078) = *(unsigned int *)(temp_v1 + 0x1074);
            temp_v14 = FUN_002a4894(temp_v6);
            temp_v4 = temp_v1 + temp_v4 * 4;
            if (temp_v14 < 1) {
              temp_v10 = *(unsigned int *)(temp_v4 + 0xfcc);
            }
            else {
              temp_v10 = *(unsigned int *)(temp_v4 + 0xfdc);
            }
            *(unsigned int *)(temp_v1 + 0x1074) = temp_v10;
            if (*(int *)(temp_v1 + 0x1078) != *(int *)(temp_v1 + 0x1074)) {
              FUN_0020d934();
            }
          }
        }
        else {
          FUN_0028c2ec(temp_v6,0);
        }
      }
      else {
        FUN_002707d8(temp_v6,0);
      }
    }
    if (*(char *)(temp_v1 + 0x9b4) != '\v') {
      FUN_0034cda0();
      break;
    }
    FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
    if (*(int *)(temp_v1 + 0x20) != 0xb) {
      temp_v4 = ifTouchGetButtonHelpValue();
      if (temp_v4 != 199) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          sysPlaySe(199);
        }
        if (temp_v4 == 0xc6) break;
      }
      if (*(char *)(temp_v1 + 0x42) == '\0') {
        sysPlaySe(0xc6);
      }
    }
    break;
  case 10:
    temp_v4 = FUN_0022e714();
    if (temp_v4 == 0) {
      if (*(short *)(temp_v1 + 0x38) < 0) {
        FUN_0031f718(0xffffffff,0);
      }
      else {
        temp_v10 = gameGetSlotRecord();
        FUN_00334214(temp_v10,0,0);
      }
      FUN_002c85b0(0xb);
      FUN_002a7324(1);
    }
    *(unsigned int *)(temp_v1 + 0x9b8) = 0xffffffff;
    temp_v4 = 0;
    *(unsigned int *)(temp_v1 + 0x9bc) = 0xffffffff;
    do {
      temp_v22 = temp_v1 + temp_v4 * 4;
      if ((*(char *)(*(int *)(temp_v22 + 0xa10) + 0x20) == '\0') &&
         (*(char *)(*(int *)(temp_v22 + 0xa10) + 0x23) == '\0')) {
        *(unsigned char *)(*(int *)(temp_v22 + 0xa10) + 0x27) = 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = 0;
    do {
      temp_v22 = temp_v1 + temp_v4 * 4;
      if ((*(char *)(*(int *)(temp_v22 + 0xa20) + 0x20) == '\0') &&
         (*(char *)(*(int *)(temp_v22 + 0xa20) + 0x23) == '\0')) {
        *(unsigned char *)(*(int *)(temp_v22 + 0xa20) + 0x27) = 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    if (*(char *)(temp_v1 + 0x43) == '\0') {
      temp_v4 = 0;
      FUN_001517b4(0,1);
      if ((temp_v4 == 0) && (temp_v14 != 6)) {
        temp_v14 = 1;
        FUN_001517b4();
        temp_v4 = g_partyPanel;
        if (temp_v14 != 0) {
          *(unsigned char *)(temp_v1 + 0x34) = 0;
          FUN_002a5cf4();
          FUN_002c85b0(0);
          temp_v10 = 0x100020f;
        }
        else {
          if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
            temp_v14 = FUN_00284140((int)*(short *)(g_partyPanel + 0x9fc));
            if (temp_v14 != 6) {
              temp_v4 = FUN_00284140((int)*(short *)(temp_v4 + 0x9fe));
              if (temp_v4 != 6) goto LAB_00265d24;
LAB_00265dc0:
              FUN_002884c8(0);
            }
            else {
LAB_00265d94:
              FUN_0026e848(0);
            }
            FUN_0026fa30();
          }
          else {
LAB_00265d24:
            temp_v4 = FUN_0020aba0(0,1);
            if (temp_v4 == 0) {
              if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
                temp_v4 = 4;
                FUN_001517b4(4,1);
                if (temp_v4 != 0) goto LAB_00265d94;
                temp_v4 = 3;
                FUN_001517b4(3,1);
                if (temp_v4 != 0) goto LAB_00265dc0;
              }
              FUN_0020a760(1);
              FUN_0034cda0();
              break;
            }
          }
          FUN_0020b718(3,1);
          temp_v10 = 0x1000210;
        }
        eventQueueAddUniqueIfValid(temp_v10);
      }
      else {
        temp_v0 = *(char *)(temp_v1 + 0x9b4);
        if (temp_v0 != '\t') {
          if (temp_v0 != '\x06') {
            if (temp_v0 != '\a') {
              *(unsigned int *)(temp_v1 + 0x9b8) = 9999;
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              *(unsigned int *)(temp_v1 + 0x9bc) = 9999;
              FUN_002a5cf4();
            }
            else {
              FUN_002a690c((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36),0);
              temp_v4 = FUN_002a6a24(*(unsigned short *)(temp_v1 + 0x36));
              panelSetMode3(-temp_v4,0);
              FUN_0020b718(0x11,1);
            }
            temp_v10 = 0x100020e;
          }
          else {
            FUN_003343f0(1);
            temp_v4 = (int)*(short *)(temp_v1 + 0x38);
            FUN_002a690c(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
            if (temp_v4 == 0) {
              FUN_002a690c((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36),0);
              if (-1 < *(short *)(temp_v1 + 0x38)) goto LAB_00265c00;
LAB_00265bc8:
              FUN_0031f718(0xffffffff,0);
              FUN_0021c1e0();
              mapBlockSetRequest();
              FUN_0020b718(0x16,1);
              temp_v10 = 0x100021c;
              eventQueueAddUniqueIfValid(temp_v10);
              FUN_002c85b0(0);
              FUN_0034cda0();
              break;
            }
            temp_v10 = 0x100020f;
          }
        }
        else {
          FUN_003343f0(1);
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x36);
          FUN_0047fa90(temp_v5,1);
          if (temp_v5 != 0) {
            temp_v10 = 0x100020f;
            eventQueueAddUniqueIfValid(temp_v10);
            FUN_002c85b0(0);
            FUN_0034cda0();
            break;
          }
          FUN_0047fa90(*(unsigned short *)(temp_v1 + 0x36),0);
          if (*(short *)(temp_v1 + 0x38) < 0) goto LAB_00265bc8;
LAB_00265c00:
          temp_v10 = gameGetSlotRecord();
          FUN_00334214(temp_v10,0,0);
          FUN_0021c1e0();
          mapBlockSetRequest();
          FUN_0020b718(0x16,1);
          temp_v10 = 0x100021c;
        }
        eventQueueAddUniqueIfValid(temp_v10);
        FUN_002c85b0(0);
      }
    }
    FUN_0034cda0();
    break;
  case 0xb:
    temp_v14 = FUN_0035db94();
    if (((temp_v14 != 0) && (temp_v14 = FUN_002a7410(), temp_v14 == 0)) &&
       (temp_v14 = ifTouchGetButtonHelpValue(), temp_v14 != 0x5f)) {
      sysPlaySe(0x5f);
    }
    temp_v14 = FUN_0022e714();
    if (temp_v14 == 0) {
      if (*(char *)(temp_v1 + 0xe8a) != 2) {
        temp_v10 = slotRecordFindById(*(unsigned int *)(temp_v1 + *(char *)(temp_v1 + 0xe8a) * 4 + 0xe7c) & 0xffff);
        FUN_0037e1b0((int)(char)(*(char *)(temp_v1 + 0xe8a) + '\x01'),1);
        FUN_00334214(temp_v10,0,0);
        FUN_0033449c(0);
        FUN_002c8550(0xc);
        FUN_002a7324(1);
      }
      else {
        FUN_0037e1b0(0,1);
        FUN_0033449c(1);
        FUN_0031f718((int)*(short *)(temp_v1 + 0xefa),0);
        objBInitBlock19D0(temp_v1 + 0xe98,0);
        FUN_003343c0(0);
        temp_v5 = computeCountLimit();
        if (temp_v5 < *(unsigned short *)(temp_v1 + 0xefc)) {
          temp_v10 = 0xb;
        }
        else {
          temp_v10 = 10;
        }
        FUN_002c8550(temp_v10);
        FUN_002a7324(1);
      }
    }
    temp_v14 = FUN_0022e750();
    if (((temp_v14 != 0) && (temp_v14 = FUN_002c7cb4(), temp_v14 != 0)) &&
       ((temp_v14 = FUN_002effbc(), temp_v14 != 0 && (temp_v14 = useCounterIsFinished(), temp_v14 != 0)))) {
      temp_v14 = gameGlobalsGetState();
      if (temp_v14 != 0) {
        FUN_0023b45c(0);
        temp_v0 = *(char *)(temp_v1 + 0xe8a) + (char)temp_v14;
        *(char *)(temp_v1 + 0xe8a) = temp_v0;
        if (temp_v0 < '\0') {
          *(unsigned char *)(temp_v1 + 0xe8a) = 2;
        }
        else if ('\x02' < temp_v0) {
          *(unsigned char *)(temp_v1 + 0xe8a) = 0;
        }
      }
      else {
        temp_v14 = 0;
        FUN_001517b4(0,1);
        if (temp_v14 != 0) {
          temp_v5 = (*(unsigned int *)(temp_v1 + 0xe94) & 0x1ffff) >> 2;
          FUN_00184310();
          temp_v8 = computeCountLimit();
          if (*(unsigned short *)(temp_v5 + 6) <= temp_v8) {
            temp_v14 = 0;
            while ((*(char *)(temp_v4 + temp_v14 + 0x1c88) < '\0' ||
                   (temp_v22 = gameGetSlotRecord(),
                   (unsigned int)*(unsigned short *)(temp_v22 + 0x62) != (*(unsigned int *)(temp_v1 + 0xe94) & 0x1ffff) >> 2)))
            {
              temp_v14 = temp_v14 + 1;
              if (temp_v14 >= 0x18) {
LAB_002660c4:
                temp_v4 = g_partyPanel;
                temp_v14 = 0;
                do {
                  temp_v5 = *(unsigned int *)(temp_v4 + 0xe90);
                  temp_v6 = 0;
                  temp_v22 = gameSlotTableFindFree();
                  if (0 < temp_v22) {
                    do {
                      temp_v22 = gameGetSlotTable();
                      temp_v22 = gameGetSlotRecord((int)*(char *)(temp_v22 + temp_v6 + 0x1c88));
                      if ((unsigned int)*(unsigned short *)(temp_v22 + 0x62) == (temp_v5 & 0x7fff)) goto LAB_00266194;
                      temp_v6 = temp_v6 + 1;
                      temp_v22 = gameSlotTableFindFree();
                    } while (temp_v6 < temp_v22);
                  }
LAB_002661cc:
                  temp_v14 = temp_v14 + 1;
                  if (temp_v14 >= 2) {
                    FUN_0037e1b0(0);
                    FUN_00334214(temp_v1 + 0xe98,0,0);
                    FUN_002a7324(1);
                    FUN_002c8550(3);
                    FUN_002a7288();
                    FUN_00285800();
                    FUN_00230ac0(4,0xffffffff,0);
                    FUN_0019de98(0,0xf4f4f4ff);
                    FUN_0023fc38();
                    temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),1);
                    if (temp_v4 != 0) {
                      FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
                      FUN_002c39dc(0xb,0,0xffffffff);
                      temp_v10 = 0;
                      FUN_0020b718(temp_v10,1);
                    }
                    goto LAB_002662a0;
                  }
                  if (temp_v14 != 0) goto LAB_002660dc;
                } while( 1 );
              }
            }
            if (temp_v14 < 0x18) {
              temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),4);
              if (temp_v4 != 0) {
                FUN_0020b718(0xd,1);
                sysPlaySe(0xa0);
              }
              temp_v10 = 0x100020e;
              eventQueueAddUniqueIfValid(temp_v10);
              break;
            }
            goto LAB_002660c4;
          }
          temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),3);
          if (temp_v4 != 0) {
            FUN_0020b718(0xd,1);
            sysPlaySe(0xa0);
          }
LAB_002662a0:
          temp_v10 = 0x100020e;
          eventQueueAddUniqueIfValid(temp_v10);
        }
        else {
          temp_v14 = FUN_0023b3b8();
          if (temp_v14 == 0) {
            temp_v14 = 1;
            FUN_001517b4();
            if (temp_v14 != 0) {
              temp_v14 = *(int *)(temp_v1 + 0xe84) - 1;
              *(int *)(temp_v1 + 0xe84) = temp_v14;
              temp_v22 = 0;
              if (*(char *)(temp_v14 + temp_v1 + 0xe88) == '\0') {
                do {
                  if ((-1 < *(char *)(temp_v4 + temp_v22 + 0x1ca0)) &&
                     (temp_v14 = gameGetSlotRecord(),
                     (unsigned int)*(unsigned short *)(temp_v14 + 0x62) ==
                     *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c))) {
                    *(unsigned char *)(*(int *)(temp_v1 + temp_v22 * 4 + 0xa10) + 0x27) = 0;
                    break;
                  }
                  temp_v22 = temp_v22 + 1;
                } while (temp_v22 < 3);
              }
              else {
                do {
                  if ((-1 < *(int *)(temp_v1 + temp_v22 * 8 + 0xa80)) &&
                     (temp_v4 = gameGetSlotRecord(),
                     (unsigned int)*(unsigned short *)(temp_v4 + 0x62) ==
                     *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c))) {
                    *(unsigned char *)(*(int *)(temp_v1 + temp_v22 * 4 + 0xa20) + 0x27) = 0;
                    break;
                  }
                  temp_v22 = temp_v22 + 1;
                } while (temp_v22 < 0x18);
              }
              FUN_002ade88();
              FUN_0037e1b0(2,0);
              FUN_0023b45c(0);
              FUN_002a7288();
              FUN_0033449c(0);
              FUN_003343c0(0);
              FUN_00230ac0(4,0xffffffff,0);
              *(unsigned char *)(temp_v1 + 0x9b4) = 10;
              *(unsigned int *)(temp_v1 + 0x20) = 8;
              FUN_0020b718(0,1);
              FUN_0020d934();
              FUN_0023fc38();
              temp_v10 = 0x100020f;
              eventQueueAddUniqueIfValid(temp_v10);
            }
          }
        }
      }
    }
    break;
  case 0xd:
    temp_v14 = FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
    if (temp_v14 == 2) {
      if (*(int *)(temp_v1 + 0x24) == 8) {
        temp_v14 = *(int *)(temp_v1 + 0xe84) - 1;
        *(int *)(temp_v1 + 0xe84) = temp_v14;
        temp_v5 = *(unsigned int *)(temp_v1 + temp_v14 * 4 + 0xe7c);
        *(unsigned char *)(temp_v14 + temp_v1 + 0xe88) = 0xff;
        temp_v5 = temp_v5 & 0xffff;
        *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c) = 0xffffffff;
        FUN_002ade88();
        temp_v14 = 0;
        if (*(char *)(*(int *)(temp_v1 + 0xe84) + temp_v1 + 0xe88) == '\0') {
          do {
            if ((-1 < *(char *)(temp_v4 + temp_v14 + 0x1ca0)) &&
               (temp_v22 = gameGetSlotRecord(),
               (unsigned int)*(unsigned short *)(temp_v22 + 0x62) ==
               *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c))) {
              *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa10) + 0x27) = 0;
              break;
            }
            temp_v14 = temp_v14 + 1;
          } while (temp_v14 < 3);
        }
        else {
          do {
            if ((-1 < *(int *)(temp_v1 + temp_v14 * 8 + 0xa80)) &&
               (temp_v4 = gameGetSlotRecord(),
               (unsigned int)*(unsigned short *)(temp_v4 + 0x62) ==
               *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xe84) * 4 + 0xe7c))) {
              *(unsigned char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa20) + 0x27) = 0;
              break;
            }
            temp_v14 = temp_v14 + 1;
          } while (temp_v14 < 0x18);
        }
        FUN_0037e1b0((int)(char)((char)*(unsigned int *)(temp_v1 + 0xe84) + '\x01'),0);
        if ((*(char *)(temp_v1 + 0x9b4) == '\x12') &&
           (psVar11 = (short *)FUN_002c7e24(), (int)*psVar11 != temp_v5)) {
          temp_v14 = 0;
          temp_v4 = gameSlotTableFindFree();
          if (0 < temp_v4) {
            do {
              temp_v4 = gameGetSlotTable();
              temp_v4 = gameGetSlotRecord((int)*(char *)(temp_v4 + temp_v14 + 0x1c88));
              if (*(unsigned short *)(temp_v4 + 0x62) == temp_v5) goto LAB_00266760;
              temp_v14 = temp_v14 + 1;
              temp_v4 = gameSlotTableFindFree();
            } while (temp_v14 < temp_v4);
          }
          temp_v4 = 0;
LAB_00266760:
          FUN_00334214(temp_v4,0,0);
          FUN_002a7324(1);
        }
      }
      buttonHelpGetValue();
      sysPlaySe();
      temp_v14 = *(int *)(temp_v1 + 0x24);
      temp_v10 = 1;
      FUN_0020b718(temp_v14,temp_v10);
    }
    break;
  case 0xe:
    if (*(char *)(g_partyPanel + 0x42) == '\0') {
      temp_v4 = 0;
      do {
        if ((-1 < *(int *)(g_partyPanel + temp_v4 * 8 + 0xa80)) &&
           (*(char *)(*(int *)(g_partyPanel + temp_v4 * 4 + 0xa20) + 0x28) != '\0')) {
          if (temp_v4 >= 0xc) {
            if (*(int *)(g_partyPanel + 0x2c) != 0) goto LAB_00266850;
            FUN_002884c8(g_partyPanel + 0xc88);
            goto LAB_00266830;
          }
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
      if (*(int *)(g_partyPanel + 0x2c) == 1) {
        FUN_0026e848(g_partyPanel + 0xc88);
LAB_00266830:
        FUN_0026fa30();
        FUN_0023b45c(0);
        FUN_0020b718(3,1);
        *(unsigned int *)(temp_v1 + 0x24) = 0xe;
      }
    }
LAB_00266850:
    if (*(int *)(temp_v1 + 0x18) != 8) {
      FUN_00163aa4();
      FUN_00163aa4(temp_v1 + 0x5e0);
      if ((*(int *)(temp_v1 + 0x18) >= 0x29) && (*(char *)(temp_v1 + 0x5de) != '\0')) {
        menuStateStartConfirm();
        *(unsigned char *)(temp_v1 + 0x34) = 1;
        FUN_002a5cf4();
      }
    }
    else {
      FUN_004fd508(0,0,0,0,1);
      temp_v4 = 0;
      do {
        if ((-1 < *(int *)(temp_v1 + temp_v4 * 8 + 0xa80)) &&
           (temp_v14 = temp_v4, *(char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa20) + 0x28) != '\0')) break;
        temp_v4 = temp_v4 + 1;
        temp_v14 = 0;
      } while (temp_v4 < 0x18);
      if (*(char *)(temp_v1 + 0x42) != '\0') {
        FUN_00387240(temp_v1 + 0x554,0x11,temp_v14 + 0x5b);
        FUN_00387240(temp_v1 + 0x5e0,0x11,temp_v14 + 0x5b);
      }
      else {
        if (temp_v14 >= 0xc) {
          temp_v14 = temp_v14 - 0xc;
        }
        FUN_00387240(temp_v1 + 0x554,0x11,temp_v14 + 0x31);
        FUN_00387240(temp_v1 + 0x5e0,0x11,temp_v14 + 0x31);
      }
      uiSpriteSelectAnim(temp_v1 + 0x554,3);
      uiSpriteSelectAnim(temp_v1 + 0x5e0,4);
      eventQueueAddUnique(0x1000283);
    }
    break;
  case 0xf:
    temp_v4 = useCounterIsFinished();
    if (temp_v4 != 0) {
      FUN_0035d8a4();
      FUN_003343f0(0);
      if (*(char *)(temp_v1 + 0x9b4) != '\x01') {
        FUN_0023fc38();
      }
      FUN_0023b45c(0);
      temp_v14 = *(int *)(temp_v1 + 0x24);
      temp_v10 = 1;
      FUN_0020b718(temp_v14,temp_v10);
      break;
    }
    temp_v4 = FUN_002c7c54();
    if (temp_v4 == 0x69) break;
    temp_v4 = 0;
    if (*(int *)(temp_v1 + 0x9bc) >= 0) {
      temp_v14 = 0;
      do {
        if (*(char *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa20) + 0x27) != '\0') {
          temp_v14 = gameGetSlotRecord(*(unsigned int *)(*(int *)(temp_v1 + temp_v14 * 4 + 0xa20) + 0x34));
          goto LAB_00266ac4;
        }
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 0x18);
LAB_00266a78:
      FUN_003d1d6c();
    }
    else {
      if (*(int *)(temp_v1 + 0x9b8) < 1) {
        FUN_003d1d6c();
        sysMemClear(temp_v1 + 0xb44,0x70);
        sysMemClear(temp_v1 + 0xbb4,0x70);
        break;
      }
      temp_v4 = 0;
LAB_00266a88:
      if (*(char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x27) == '\0') goto LAB_00266b18;
      temp_v14 = gameGetSlotRecord(*(unsigned int *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x34));
      temp_v4 = *(int *)(temp_v1 + 0x9b8);
LAB_00266ac4:
      FUN_003d1d6c();
      if (*(int *)(temp_v1 + 0x9bc) >= 0) {
        temp_v4 = 0;
        do {
          if (*(int *)(temp_v1 + temp_v4 * 8 + 0xa80) < 0) break;
          temp_v22 = gameGetSlotRecord();
          temp_v6 = *(int *)(temp_v1 + temp_v4 * 4 + 0xa20);
          if (*(short *)(temp_v22 + 0x62) == *(short *)(temp_v14 + 0x62)) {
            *(unsigned char *)(temp_v6 + 0x27) = 1;
            *(int *)(temp_v1 + 0x9bc) = temp_v4;
          }
          else {
            *(unsigned char *)(temp_v6 + 0x27) = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
      }
      else if (0 < *(int *)(temp_v1 + 0x9b8)) {
        *(unsigned char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0xa10) + 0x27) = 1;
      }
    }
    sysMemClear(temp_v1 + 0xb44,0x70);
    sysMemClear(temp_v1 + 0xbb4,0x70);
    break;
  case 0x11:
    temp_v4 = panelStateIs0();
    if (temp_v4 == 1) {
      temp_v10 = FUN_002a6a24(*(unsigned short *)(temp_v1 + 0x36));
      FUN_00408184(1,temp_v10);
      temp_v10 = 1;
      temp_v14 = 10;
      FUN_0020b718(temp_v14,temp_v10);
    }
    break;
  case 0x12:
    temp_v4 = temp_v1 + 0xd50;
    if (*(char *)(temp_v1 + 0x42) != '\0') {
      temp_v4 = temp_v1 + 0xdb4;
    }
    temp_v14 = FUN_0022e714();
    if (temp_v14 == 0) {
      if (!(*(char *)(temp_v1 + 0x9b4) == '\n' || *(char *)(temp_v1 + 0x9b4) == '\x12')) {
        FUN_0037e1b0(0xffffffff,1);
      }
      else if (*(int *)(temp_v1 + 0xe84) == 0) {
        temp_v10 = 1;
        FUN_0037e1b0(temp_v10,0);
      }
      else if (*(int *)(temp_v1 + 0xe84) == 1) {
        temp_v10 = 2;
        FUN_0037e1b0(temp_v10,0);
      }
      if (*(char *)(temp_v1 + 0x9b4) != '\v') {
        temp_v14 = FUN_002a4894(temp_v4);
        if (temp_v14 < 1) {
          temp_v4 = FUN_002a4878(temp_v4);
          if (temp_v4 != 0) {
            temp_v14 = gameGetSlotTable();
            if (-1 >= *(char *)(temp_v14 + temp_v4 + 0x1c9f)) {
              FUN_0031f718(0,0);
              FUN_0023b45c(0);
            }
            else {
              temp_v10 = gameGetSlotRecord();
              FUN_00334214(temp_v10,0,0);
              FUN_002a7324(1);
            }
          }
          else {
            FUN_0031f718(0xffffffff,0);
            FUN_002a7324(1);
          }
        }
        else {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v22 = FUN_002a4878();
            temp_v4 = FUN_002a4894(temp_v4);
            temp_v22 = temp_v22 + temp_v4 * 4;
          }
          else {
            temp_v14 = FUN_002a4894(temp_v4);
            temp_v6 = *(int *)(temp_v1 + 0x2c);
            temp_v22 = FUN_002a4878(temp_v4);
            temp_v22 = temp_v22 + temp_v14 * 4 + temp_v6 * 0xc;
          }
          if (*(int *)(temp_v1 + (temp_v22 - 4) * 8 + 0xa80) < 0) {
            FUN_0031f718(0,0);
            FUN_0023b45c(0);
          }
          else {
            temp_v10 = gameGetSlotRecord();
            FUN_00334214(temp_v10,0,0);
            FUN_002a7324(1);
          }
        }
      }
      else {
        FUN_0037e1b0(0);
        FUN_00334214(temp_v1 + 0xe98,0,0);
        FUN_002a7324(1);
        FUN_002c8550(3);
      }
    }
    temp_v4 = FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
    if ((temp_v4 == 2) && (temp_v4 = FUN_0026272c(), temp_v4 != 0)) {
      temp_v4 = FUN_002a4b74();
      if (temp_v4 != 0) {
        temp_v4 = 0;
        do {
          temp_v14 = temp_v1 + temp_v4 * 4;
          *(unsigned char *)(*(int *)(temp_v14 + 0xa10) + 0x25) = 0;
          *(unsigned char *)(*(int *)(temp_v14 + 0xa10) + 0x27) = 0;
          *(unsigned char *)(*(int *)(temp_v14 + 0xa10) + 0x26) = 0;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 4);
        temp_v4 = 0;
        do {
          temp_v14 = temp_v1 + temp_v4 * 4;
          *(unsigned char *)(*(int *)(temp_v14 + 0xa20) + 0x25) = 0;
          *(unsigned char *)(*(int *)(temp_v14 + 0xa20) + 0x27) = 0;
          *(unsigned char *)(*(int *)(temp_v14 + 0xa20) + 0x26) = 0;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
      }
      else {
        if (*(int *)(temp_v1 + 0x9b8) >= 1) {
          temp_v4 = gameGetSlotTable();
          temp_v4 = gameGetSlotRecord((int)*(char *)(*(int *)(temp_v1 + 0x9b8) + temp_v4 + 0x1c9f));
        }
        else {
          if ((*(int *)(temp_v1 + 0x9bc) < 0) ||
             (*(int *)(temp_v1 + *(int *)(temp_v1 + 0x9bc) * 8 + 0xa80) < 0)) {
            FUN_0023fc38();
            temp_v10 = 1;
            temp_v14 = 8;
            FUN_0020b718(temp_v14,temp_v10);
            break;
          }
          temp_v4 = gameGetSlotRecord();
        }
        if (temp_v4 != 0) {
          FUN_0035ab40();
          FUN_001ba514(*(unsigned short *)(temp_v4 + 0x62));
          FUN_004d0d70();
          FUN_0031d890();
          FUN_0023b45c(0);
          temp_v10 = FUN_002a4878();
          temp_v4 = temp_v1 + 0xc88;
          temp_v14 = FUN_002a4878();
          temp_v22 = FUN_002a4894(temp_v4);
          temp_v14 = temp_v14 + temp_v22 * 4;
          FUN_002c39dc(0xf,0);
          FUN_002a4914(temp_v1 + 0xc24,temp_v10);
          FUN_002a4914(temp_v4,temp_v14 % 4);
          FUN_002a4964(temp_v4,(int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1e)) >> 2);
          countersAddSaturating(7,1);
          eventQueueAddUniqueIfValid(0x100021f);
        }
      }
      FUN_0023fc38();
      temp_v10 = 1;
      temp_v14 = 8;
      FUN_0020b718(temp_v14,temp_v10);
    }
    break;
  case 0x13:
    temp_v4 = g_partyPanel + 0xd50;
    if (*(char *)(g_partyPanel + 0x42) != '\0') {
      temp_v4 = g_partyPanel + 0xdb4;
    }
    temp_v14 = holderKindIsActive();
    if (temp_v14 == 0) {
      FUN_0037e1b0(0xffffffff,1);
      temp_v14 = FUN_002a4894(temp_v4);
      if (temp_v14 < 1) {
        temp_v4 = FUN_002a4878(temp_v4);
        if (temp_v4 == 0) {
          temp_v10 = 1;
          temp_v14 = 8;
          FUN_0020b718(temp_v14,temp_v10);
          break;
        }
        temp_v14 = gameGetSlotTable();
        temp_v4 = (int)*(char *)(temp_v14 + temp_v4 + 0x1c9f);
      }
      else {
        if (*(char *)(temp_v6 + 0x42) != '\0') {
          temp_v22 = FUN_002a4878();
          temp_v4 = FUN_002a4894(temp_v4);
          temp_v22 = temp_v22 + temp_v4 * 4;
        }
        else {
          temp_v14 = FUN_002a4894(temp_v4);
          temp_v15 = *(int *)(temp_v6 + 0x2c);
          temp_v22 = FUN_002a4878(temp_v4);
          temp_v22 = temp_v22 + temp_v14 * 4 + temp_v15 * 0xc;
        }
        temp_v4 = *(int *)(temp_v6 + (temp_v22 - 4) * 8 + 0xa80);
      }
      if (-1 < temp_v4) {
        gameGetSlotRecord();
        temp_v4 = FUN_0032fb18();
        if (temp_v4 != 0) goto LAB_0026700c;
      }
    }
    else {
LAB_0026700c:
      temp_v4 = FUN_002c08ec();
      if (temp_v4 == 0) break;
      FUN_003343f0(0);
    }
    temp_v10 = 1;
    temp_v14 = 8;
    FUN_0020b718(temp_v14,temp_v10);
    break;
  case 0x14:
    temp_v4 = FUN_003a7bac();
    if (temp_v4 != 0) {
      FUN_003343f0(0);
      temp_v4 = g_partyPanel;
      if (g_partyPanel != 0) {
        *(unsigned char *)(g_partyPanel + 0x34) = 0;
        *(unsigned char *)(temp_v4 + 0x35) = 0;
        FUN_00230ac0(4,0xffffffff,0,*(char *)(temp_v4 + 0x42) != '\0');
        if (*(unsigned char *)(temp_v4 + 0x9b4) >= 2) {
          FUN_0023fc38();
        }
        FUN_0020b718(0,1);
      }
      FUN_0023f900();
      *(unsigned int *)(temp_v1 + 0x20) = 8;
    }
    break;
  case 0x15:
    FUN_003343f0(1);
    if (*(int *)(temp_v1 + 0x18) >= 0xf) {
      FUN_003343f0(0);
      if (*(char *)(temp_v1 + 0x9b4) != '\t') {
        if (*(char *)(temp_v1 + 0x9b4) == '\x06') {
          temp_v14 = FUN_0022a030((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36));
          if (temp_v14 == 0) {
            *(unsigned char *)(temp_v1 + 0x34) = 0;
            FUN_002a5cf4();
            break;
          }
          if (*(char *)(temp_v1 + 0x42) == '\0') {
            temp_v14 = temp_v1 + 0xd50;
          }
          else {
            temp_v14 = temp_v1 + 0xdb4;
          }
          FUN_0028c2ec(temp_v14,0);
          temp_v14 = temp_v1 + 0xd50;
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v14 = temp_v1 + 0xdb4;
          }
          temp_v22 = FUN_002a4894(temp_v14);
          if (temp_v22 < 1) {
            temp_v22 = FUN_002a4878(temp_v14);
            if (temp_v22 != 0) {
              temp_v6 = (int)*(short *)(temp_v1 + 0x38);
              FUN_00333694(temp_v6,(int)*(char *)(temp_v22 + temp_v4 + 0x1c9f),
                           *(unsigned short *)(temp_v1 + 0x36),1);
            }
            else {
              temp_v6 = (int)*(short *)(temp_v1 + 0x38);
              FUN_00333694(temp_v6,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
            }
          }
          else {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v22 = FUN_002a4878();
              temp_v4 = FUN_002a4894(temp_v14);
              temp_v22 = temp_v22 + temp_v4 * 4;
            }
            else {
              temp_v4 = FUN_002a4894(temp_v14);
              temp_v6 = *(int *)(temp_v1 + 0x2c);
              temp_v22 = FUN_002a4878(temp_v14);
              temp_v22 = temp_v22 + temp_v4 * 4 + temp_v6 * 0xc;
            }
            temp_v6 = (int)*(short *)(temp_v1 + 0x38);
            FUN_00333694(temp_v6,*(unsigned int *)(temp_v1 + (temp_v22 - 4) * 8 + 0xa80),
                         *(unsigned short *)(temp_v1 + 0x36),1);
          }
          if ((temp_v6 != 0) &&
             (temp_v4 = FUN_0049fbb8(0,(int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36)),
             temp_v4 != 0)) {
            FUN_0023b45c(0);
            FUN_002cb84c();
            FUN_0028c2ec(temp_v14,0);
          }
          temp_v10 = 1;
          temp_v14 = 8;
          FUN_0020b718(temp_v14,temp_v10);
        }
      }
      else {
        temp_v14 = FUN_001ba3d4(*(unsigned short *)(temp_v1 + 0x36));
        if (0 < temp_v14) {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v14 = temp_v1 + 0xdb4;
          }
          else {
            temp_v14 = temp_v1 + 0xd50;
          }
          FUN_002707d8(temp_v14,0);
          temp_v14 = temp_v1 + 0xd50;
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v14 = temp_v1 + 0xdb4;
          }
          temp_v22 = FUN_002a4894(temp_v14);
          if (temp_v22 < 1) {
            temp_v22 = FUN_002a4878(temp_v14);
            if (temp_v22 != 0) {
              temp_v4 = (int)*(char *)(temp_v22 + temp_v4 + 0x1c9f);
              FUN_00480140(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
            }
            else {
              temp_v4 = -1;
              FUN_00480140(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
            }
          }
          else {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v22 = FUN_002a4878();
              temp_v4 = FUN_002a4894(temp_v14);
              temp_v22 = temp_v22 + temp_v4 * 4;
            }
            else {
              temp_v4 = FUN_002a4894(temp_v14);
              temp_v6 = *(int *)(temp_v1 + 0x2c);
              temp_v22 = FUN_002a4878(temp_v14);
              temp_v22 = temp_v22 + temp_v4 * 4 + temp_v6 * 0xc;
            }
            temp_v4 = *(int *)(temp_v1 + (temp_v22 - 4) * 8 + 0xa80);
            FUN_00480140(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
          }
          if ((temp_v4 != 0) && (temp_v4 = FUN_0049f628(0,*(unsigned short *)(temp_v1 + 0x36)), temp_v4 != 0)) {
            FUN_0023b45c(0);
            FUN_002cb84c();
            FUN_002707d8(temp_v14,0);
          }
          FUN_0020d934();
          temp_v10 = 1;
          temp_v14 = 8;
          FUN_0020b718(temp_v14,temp_v10);
          break;
        }
        *(unsigned char *)(temp_v1 + 0x34) = 0;
        FUN_002a5cf4();
        FUN_0033449c(0);
      }
    }
    break;
  case 0x16:
    FUN_003343f0(1);
    if (*(int *)(temp_v1 + 0x18) >= 0xf) {
      FUN_003343f0(0);
      if (*(char *)(temp_v1 + 0x9b4) != '\t') {
        if (*(char *)(temp_v1 + 0x9b4) != '\x06') break;
        temp_v14 = FUN_0022a030((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36));
        if (temp_v14 == 0) {
          *(unsigned char *)(temp_v1 + 0x34) = 0;
          FUN_002a5cf4();
          break;
        }
        temp_v14 = (int)*(short *)(temp_v1 + 0x38);
        FUN_00333694(temp_v14,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
        if (temp_v14 == 1) {
          *(unsigned char *)(temp_v1 + 0x9c0) = 0;
          temp_v14 = btlGetMainState();
          if ((temp_v14 != 0) &&
             (temp_v14 = btlGetMainState(),
             (*(unsigned int *)(temp_v14 + 0x45ac) & DAT_0057f274) != 0 ||
             (*(unsigned int *)(temp_v14 + 0x45a8) & DAT_0057f270) != 0)) {
            *(unsigned char *)(temp_v1 + 0x9c0) = 1;
          }
        }
        temp_v14 = 0;
        do {
          temp_v22 = (int)*(short *)(temp_v1 + 0x38);
          FUN_00333694(temp_v22,(int)*(char *)(temp_v4 + temp_v14 + 0x1ca0),*(unsigned short *)(temp_v1 + 0x36),
                       1);
          if (temp_v22 == 1) {
            *(unsigned char *)(temp_v1 + temp_v14 + 0x9c1) = 0;
          }
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 3);
        temp_v4 = 0;
        do {
          temp_v22 = temp_v1 + temp_v4 * 8;
          temp_v14 = (int)*(short *)(temp_v1 + 0x38);
          FUN_00333694(temp_v14,*(unsigned int *)(temp_v22 + 0xa80),*(unsigned short *)(temp_v1 + 0x36),1);
          if (temp_v14 == 1) {
            *(unsigned short *)(temp_v22 + 0xa84) = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
        FUN_002f8288();
        temp_v10 = 1;
        temp_v14 = 10;
      }
      else {
        temp_v14 = FUN_001ba3d4(*(unsigned short *)(temp_v1 + 0x36));
        if (temp_v14 < 1) {
          *(unsigned char *)(temp_v1 + 0x34) = 0;
          FUN_002a5cf4();
          FUN_0033449c(0);
          break;
        }
        temp_v22 = -1;
        FUN_00480140(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
        temp_v14 = 0;
        if (temp_v22 == 1) {
          *(unsigned char *)(temp_v1 + 0x9c0) = 0;
        }
        do {
          temp_v22 = (int)*(char *)(temp_v4 + temp_v14 + 0x1ca0);
          FUN_00480140(temp_v22,*(unsigned short *)(temp_v1 + 0x36),1);
          if (temp_v22 == 1) {
            *(unsigned char *)(temp_v1 + temp_v14 + 0x9c1) = 0;
          }
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 3);
        temp_v4 = 0;
        do {
          temp_v22 = temp_v1 + temp_v4 * 8;
          temp_v14 = *(int *)(temp_v22 + 0xa80);
          FUN_00480140(temp_v14,*(unsigned short *)(temp_v1 + 0x36),1);
          if (temp_v14 == 1) {
            *(unsigned short *)(temp_v22 + 0xa84) = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
        FUN_002cc0c0();
        temp_v10 = 1;
        temp_v14 = 10;
      }
      FUN_0020b718(temp_v14,temp_v10);
    }
    break;
  case 0x17:
    temp_v14 = 0;
    do {
      FUN_00163aa4(temp_v1 + temp_v14 * 0x8c + 0x298);
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 4);
    FUN_00163aa4(temp_v1 + 0x928);
    temp_v14 = g_partyPanel;
    if (*(char *)(temp_v1 + 0x322) == '\0') break;
    temp_v22 = 0;
    if (0 < *(int *)(g_partyPanel + 0xa00)) {
      do {
        ifTouchRegionRemove();
        temp_v22 = temp_v22 + 1;
      } while (temp_v22 < *(int *)(temp_v14 + 0xa00));
    }
    *(unsigned int *)(temp_v14 + 0xa00) = 0;
    __aeabi_memset4(temp_v14 + 0x9c4,0x3c,0xffffffff);
    FUN_0019de98(0,0xf4f4f4ff);
    temp_v14 = *(int *)(temp_v1 + 0x20);
    if (temp_v14 != 0x10) {
      if ((temp_v14 != 0xb && temp_v14 != 0x13) && temp_v14 != 0x19) {
        if (temp_v14 != 0x14) {
          if (*(int *)(temp_v1 + 0x24) == 0xe) {
            temp_v14 = slotRecordFindById(*(unsigned int *)(temp_v1 + 0xe90) & 0x7fff);
            temp_v22 = slotRecordFindById((*(unsigned int *)(temp_v1 + 0xe90) & 0x3fffffff) >> 0xf);
            if (g_btlUiBlock != 0) {
              FUN_004a9ca0(g_btlUiBlock,temp_v14);
              FUN_004a9ca0(g_btlUiBlock,temp_v22);
            }
            temp_v6 = 0;
            do {
              if (*(char *)(temp_v1 + temp_v6 + 0xe88) == '\0') {
                temp_v15 = 0;
                do {
                  if ((-1 < *(char *)(temp_v4 + temp_v15 + 0x1ca0)) &&
                     (temp_v9 = gameGetSlotRecord(),
                     (unsigned int)*(unsigned short *)(temp_v9 + 0x62) == *(unsigned int *)(temp_v1 + temp_v6 * 4 + 0xe7c)))
                  break;
                  temp_v15 = temp_v15 + 1;
                } while (temp_v15 < 3);
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 2);
            FUN_0035ab40(temp_v14);
            FUN_0035ab40(temp_v22);
            bitsAt60Clear(temp_v14,4);
            bitsAt60Clear(temp_v22,4);
            FUN_001ba514(*(unsigned short *)(temp_v14 + 0x62));
            FUN_004d0d70();
            FUN_001ba514(*(unsigned short *)(temp_v22 + 0x62));
            FUN_004d0d70();
            temp_v10 = FUN_004d0cd4();
            temp_v4 = FUN_002a4b28(*(unsigned short *)(temp_v1 + 0xefa));
            dispatchIfFound(temp_v10,*(unsigned short *)(temp_v1 + 0xefa),0);
            temp_v14 = gameGetSlotRecord(temp_v10);
            temp_v22 = 0;
            do {
              FUN_004bd6b0(temp_v14,*(unsigned short *)(temp_v1 + temp_v22 * 2 + 0xecc),temp_v22);
              temp_v22 = temp_v22 + 1;
            } while (temp_v22 < 8);
            temp_v10 = *(unsigned int *)(temp_v1 + 0xf04);
            temp_v12 = *(unsigned int *)(temp_v1 + 0xf08);
            temp_v13 = *(unsigned int *)(temp_v1 + 0xf0c);
            temp_v16 = *(unsigned int *)(temp_v1 + 0xf10);
            temp_v17 = *(unsigned int *)(temp_v1 + 0xf14);
            temp_v18 = *(unsigned int *)(temp_v1 + 0xf18);
            temp_v19 = *(unsigned int *)(temp_v1 + 0xf1c);
            *(unsigned int *)(temp_v14 + 0x68) = *(unsigned int *)(temp_v1 + 0xf00);
            *(unsigned int *)(temp_v14 + 0x6c) = temp_v10;
            *(unsigned int *)(temp_v14 + 0x70) = temp_v12;
            *(unsigned int *)(temp_v14 + 0x74) = temp_v13;
            *(unsigned int *)(temp_v14 + 0x78) = temp_v16;
            *(unsigned int *)(temp_v14 + 0x7c) = temp_v17;
            *(unsigned int *)(temp_v14 + 0x80) = temp_v18;
            *(unsigned int *)(temp_v14 + 0x84) = temp_v19;
            temp_v10 = *(unsigned int *)(temp_v1 + 0xf24);
            temp_v12 = *(unsigned int *)(temp_v1 + 0xf28);
            temp_v13 = *(unsigned int *)(temp_v1 + 0xf2c);
            temp_v16 = *(unsigned int *)(temp_v1 + 0xf30);
            temp_v17 = *(unsigned int *)(temp_v1 + 0xf34);
            temp_v18 = *(unsigned int *)(temp_v1 + 0xf38);
            temp_v19 = *(unsigned int *)(temp_v1 + 0xf3c);
            *(unsigned int *)(temp_v14 + 0x88) = *(unsigned int *)(temp_v1 + 0xf20);
            *(unsigned int *)(temp_v14 + 0x8c) = temp_v10;
            *(unsigned int *)(temp_v14 + 0x90) = temp_v12;
            *(unsigned int *)(temp_v14 + 0x94) = temp_v13;
            *(unsigned int *)(temp_v14 + 0x98) = temp_v16;
            *(unsigned int *)(temp_v14 + 0x9c) = temp_v17;
            *(unsigned int *)(temp_v14 + 0xa0) = temp_v18;
            *(unsigned int *)(temp_v14 + 0xa4) = temp_v19;
            FUN_004bcd90(temp_v14);
            temp_v3 = FUN_0017760c(temp_v14);
            *(unsigned short *)(temp_v14 + 0x2a) = temp_v3;
            *(unsigned short *)(temp_v14 + 0x2c) = *(unsigned short *)(temp_v14 + 0x10);
            *(unsigned int *)(temp_v1 + 0xfc4) = 0;
            *(unsigned int *)(temp_v1 + 0xfc8) = (unsigned int)*(unsigned short *)(temp_v14 + 100);
            if (temp_v4 == 0) {
              FUN_002a5e7c(*(unsigned short *)(temp_v14 + 0x62));
            }
            FUN_00408184(0x26,1);
            FUN_0035dfc0(*(unsigned short *)(temp_v14 + 0x62));
            temp_v4 = gameDataBlocksGetSaveData();
            *(unsigned short *)(temp_v4 + 0x27e0c) = 0;
          }
          temp_v10 = 1;
          temp_v14 = 0x1b;
          FUN_0020b718(temp_v14,temp_v10);
          break;
        }
        FUN_002c7cd4(1);
        temp_v14 = *(int *)(temp_v1 + 0x20);
      }
      temp_v10 = 1;
      FUN_0020b718(temp_v14,temp_v10);
      break;
    }
    *(unsigned int *)(temp_v1 + 0x20) = *(unsigned int *)(temp_v1 + 0x24);
    FUN_0020b718(*(unsigned int *)(temp_v1 + 0x24),1);
    *(unsigned char *)(temp_v1 + 0x43) = 1;
    goto LAB_0026795c;
  case 0x18:
    temp_v4 = temp_v1 + 0xd50;
    if (*(char *)(temp_v1 + 0x42) != '\0') {
      temp_v4 = temp_v1 + 0xdb4;
    }
    temp_v14 = FUN_0022e714();
    if (temp_v14 != 0) {
      temp_v4 = FUN_0022e750();
      if (temp_v4 != 0) {
        *(unsigned short *)(temp_v1 + 0x3c) = *(unsigned short *)(temp_v1 + 0x3e);
      }
    }
    else {
      temp_v14 = FUN_002a4894(temp_v4);
      if (temp_v14 < 1) {
        temp_v4 = FUN_002a4878(temp_v4);
        if (temp_v4 != 0) {
          temp_v14 = gameGetSlotTable();
          if (-1 < *(char *)(temp_v14 + temp_v4 + 0x1c9f)) {
            temp_v10 = gameGetSlotRecord();
            FUN_00334214(temp_v10,0,0);
            FUN_002a7324(1);
            break;
          }
          FUN_0031f718(0,0);
          FUN_0023b45c(0);
        }
        else {
          FUN_0031f718(0xffffffff,0);
          FUN_002a7324(1);
        }
      }
      else {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v22 = FUN_002a4878();
          temp_v4 = FUN_002a4894(temp_v4);
          temp_v22 = temp_v22 + temp_v4 * 4;
        }
        else {
          temp_v14 = FUN_002a4894(temp_v4);
          temp_v6 = *(int *)(temp_v1 + 0x2c);
          temp_v22 = FUN_002a4878(temp_v4);
          temp_v22 = temp_v22 + temp_v14 * 4 + temp_v6 * 0xc;
        }
        if (*(int *)(temp_v1 + (temp_v22 - 4) * 8 + 0xa80) < 0) {
          FUN_0031f718(0,0);
          FUN_0023b45c(0);
          break;
        }
        temp_v10 = gameGetSlotRecord();
        FUN_00334214(temp_v10,0,0);
        FUN_002a7324(1);
      }
    }
    break;
  case 0x1a:
    temp_v4 = FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
    if (temp_v4 == 2) {
      temp_v4 = FUN_002a4b74();
      if (temp_v4 != 0) {
        *(unsigned char *)(temp_v1 + 0x34) = 0;
        *(unsigned int *)(temp_v1 + 0x20) = 0x1b;
        FUN_002a5cf4();
        FUN_0022e774();
        FUN_0037e1b0(0xffffffff,1);
        FUN_0037e1b0(2,0);
        FUN_0023b45c(0);
        FUN_002a7288();
        FUN_0033449c(0);
        FUN_003343c0(0);
      }
      else {
        FUN_0037e1b0(0);
        FUN_00334214(temp_v1 + 0xe98,0,0);
        FUN_002a7324(1);
        FUN_002c8550(3);
        FUN_002a7288();
        FUN_00285800();
        FUN_00230ac0(4,0xffffffff,0);
        FUN_0019de98(0,0xf4f4f4ff);
        FUN_0023fc38();
        temp_v4 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),1);
        if (temp_v4 != 0) {
          FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
          FUN_002c39dc(0xb,0,0xffffffff);
          FUN_0020b718(0,1);
        }
      }
      FUN_003343f0(0);
    }
    break;
  case 0x1c:
    temp_v4 = FUN_0038b568();
    if (temp_v4 != 0) {
      temp_v10 = 1;
      temp_v14 = 0x1b;
      FUN_0020b718(temp_v14,temp_v10);
    }
  }
  if (*(char *)(temp_v1 + 0x43) == '\0') {
    *(int *)(temp_v1 + 0x18) = *(int *)(temp_v1 + 0x18) + 1;
    return 0;
  }
LAB_0026795c:
  temp_v4 = FUN_002a7410();
  if ((temp_v4 != 0) || (temp_v4 = useCounterIsFinished(), temp_v4 == 0)) {
    *(int *)(temp_v1 + 0x18) = *(int *)(temp_v1 + 0x18) + 1;
    return 0;
  }
  *(unsigned char *)(temp_v1 + 0x43) = 0;
  temp_v4 = FUN_0035db94();
  if (temp_v4 < 0) {
    temp_v10 = 5;
    FUN_00230ac0(temp_v10,0xffffffff,0);
  }
  else {
    temp_v4 = FUN_0035db94();
    if (0 < temp_v4) {
      temp_v10 = 4;
      FUN_00230ac0(temp_v10,0xffffffff,0);
    }
  }
  FUN_0020d934();
  FUN_0023fc38();
  FUN_0020b718(0,1);
  if (*(char *)(temp_v1 + 0x9b4) == '\v') {
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),1);
    FUN_00224880(*(unsigned int *)(temp_v1 + 0x14));
  }
  *(int *)(temp_v1 + 0x18) = *(int *)(temp_v1 + 0x18) + 1;
  return 0;
LAB_00266b18:
  temp_v4 = temp_v4 + 1;
  if (temp_v4 >= 4) goto LAB_00266a78;
  goto LAB_00266a88;
LAB_002660dc:
  temp_v5 = *(unsigned int *)(temp_v4 + 0xe90);
  temp_v6 = 0;
  temp_v22 = gameSlotTableFindFree();
  if (0 < temp_v22) {
    do {
      temp_v22 = gameGetSlotTable();
      temp_v22 = gameGetSlotRecord((int)*(char *)(temp_v22 + temp_v6 + 0x1c88));
      if ((unsigned int)*(unsigned short *)(temp_v22 + 0x62) == (temp_v5 & 0x3fffffff) >> 0xf) goto LAB_00266194;
      temp_v6 = temp_v6 + 1;
      temp_v22 = gameSlotTableFindFree();
    } while (temp_v6 < temp_v22);
  }
  goto LAB_002661cc;
LAB_00266194:
  if ((temp_v22 != 0) && ((*(unsigned short *)(temp_v22 + 0x60) & 4) != 0)) {
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),2);
    FUN_0031f688();
    temp_v10 = 0x1a;
    FUN_0020b718(temp_v10,1);
    goto LAB_002662a0;
  }
  goto LAB_002661cc;
}

} /* extern "C" */
