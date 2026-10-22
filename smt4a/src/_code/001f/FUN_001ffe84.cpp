/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ffe84` (_code @ 0x1ffe84, 0x94c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int sysPlaySe(...);
int FUN_0019de98(...);
int campResetScreen(void);
int FUN_00228b04(...);
int FUN_002b5c88(void);
int buttonHelpScriptStart(...);
int FUN_0031f208(...);
int sortMenuAcquire(...);
int flagBanksResetPendingState(...);
int FUN_003343f0(...);
int FUN_003450d4(...);
int FUN_003da8f4(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int gameGetSlotRecord(void);
int campChangeState(...);
int FUN_0020d700(void);
int FUN_0021b274(...);
int FUN_0022e774(void);
int FUN_0023b45c(...);
int FUN_0028b088(...);
int FUN_002a7324(...);
int campTouchRegionsRemoveGroup(...);
int FUN_002c7e24(void);
int FUN_002cb278(int, int);
int FUN_0031f718(...);
int statusDisplayBindUnitRecord(...);
int FUN_003344b4(...);
int FUN_0035dbd4(...);
int FUN_003d386c(int);
int FUN_003df57c(...);
int FUN_004bcbb4(...);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int g_camp; /* 0x57f108 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned short ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
extern int gameGetPlayerData(void);
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: campChangeState. */
/* Supplied declaration required: FUN_0020d700. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: campResetScreen. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0022a030(int, int);
extern int FUN_0022e714(void);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_002684d0(int, int);
/* Supplied declaration required: FUN_0028b088. */
extern int resourceRunOperationIfUnblocked(int);
extern unsigned int FUN_002a4878(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002a7410(void);
/* Supplied declaration required: campTouchRegionsRemoveGroup. */
/* Supplied declaration required: FUN_002b5c88. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_002c7e24. */
/* Supplied declaration required: FUN_002cb278. */
/* Supplied declaration required: buttonHelpScriptStart. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: flagBanksResetPendingState. */
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_003450d4. */
extern int uiSearchPrimary(int);
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0035dbd4. */
/* Supplied declaration required: FUN_003d386c. */
/* Supplied declaration required: FUN_003da8f4. */
/* Supplied declaration required: FUN_003df57c. */
/* Supplied declaration required: FUN_004bcbb4. */


void FUN_001ffe84(void)

{
/* irregular: 33 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar11;
  int *piVar12;
  char temp_v9 [8];
  
  temp_v8 = g_camp;
  if (*(int *)(g_camp + 0x20) == 0) {
    temp_v4 = FUN_0023b3d0();
    temp_v3 = g_camp;
    if (temp_v4 == 0) {
      return;
    }
    temp_v4 = resourceRunOperationIfUnblocked(g_camp + 0x1ec);
    temp_v5 = FUN_002a4894(temp_v3 + 0x1ec);
    temp_v3 = temp_v3 + (temp_v5 + temp_v4) * 8;
    if (*(int *)(temp_v3 + 0x1b74) < 0) {
      temp_v3 = FUN_003df57c(*(unsigned int *)(temp_v3 + 0x1b70),1);
    }
    else {
      temp_v7 = gameGetSlotRecord();
      temp_v3 = FUN_004bcbb4(temp_v7,*(unsigned int *)(temp_v3 + 0x1b70));
    }
    FUN_003344b4(0,-temp_v3);
    temp_v3 = resourceRunOperationIfUnblocked(temp_v8 + 0x1ec);
    temp_v4 = FUN_002a4894(temp_v8 + 0x1ec);
    if (g_camp != 0) {
      *(int *)(g_camp + 0xbc) = temp_v3 + temp_v4;
    }
    FUN_002cb278(temp_v8 + 0x1ec,1);
    *(int *)(temp_v8 + 0x20) = *(int *)(temp_v8 + 0x20) + 1;
    return;
  }
  if (*(int *)(g_camp + 0x20) != 1) {
    return;
  }
  temp_v3 = objectApplyIfUnblocked(g_camp + 0x1ec);
  if (temp_v3 < 1) {
    temp_v3 = 1;
    FUN_001517b4();
    if (temp_v3 == 0) {
      return;
    }
    campTouchRegionsRemoveGroup(temp_v8 + 0x1ec,1);
    FUN_0022e774();
    FUN_0035dbd4(0);
    FUN_0028b088(0);
    FUN_0021b274(3,0xffffffff,0);
    *(unsigned int *)(temp_v8 + 0x24) = 6;
    campChangeState(5);
    if (*(char *)(temp_v8 + 0x32a8) != '\0') {
      *(unsigned char *)(temp_v8 + 0xa4) = 1;
      FUN_0020d700();
      *(unsigned char *)(temp_v8 + 0x32a8) = 0;
    }
    eventQueueAddUniqueIfValid(0x100020f);
    return;
  }
  FUN_003d386c(0);
  temp_v3 = resourceRunOperationIfUnblocked(temp_v8 + 0x1ec);
  temp_v4 = FUN_002a4894(temp_v8 + 0x1ec);
  temp_v3 = temp_v3 + temp_v4;
  temp_v0 = 0;
  if ((*(char *)(temp_v8 + 0x24d) != '\0') || (*(char *)(temp_v8 + 0x24c) != '\0')) {
    temp_v0 = 1;
    psVar6 = (short *)FUN_002c7e24();
    temp_v4 = *(int *)(temp_v8 + temp_v3 * 8 + 0x1b74);
    if (*psVar6 < 0) {
      if (-1 < temp_v4) {
        FUN_0023b45c(0);
      }
    }
    else if ((temp_v4 < 0) ||
            (temp_v4 = gameGetSlotRecord(), (unsigned int)*(unsigned short *)(temp_v4 + 0x62) != (int)*psVar6)) {
      FUN_0023b45c(0);
    }
  }
  else {
    temp_v5 = FUN_0022e714();
    temp_v4 = g_camp;
    if (temp_v5 == 0) {
      temp_v5 = resourceRunOperationIfUnblocked(g_camp + 0x1ec);
      temp_v6 = FUN_002a4894(temp_v4 + 0x1ec);
      temp_v4 = temp_v4 + (temp_v6 + temp_v5) * 8;
      if (*(int *)(temp_v4 + 0x1b74) < 0) {
        temp_v4 = FUN_003df57c(*(unsigned int *)(temp_v4 + 0x1b70),1);
      }
      else {
        temp_v7 = gameGetSlotRecord();
        temp_v4 = FUN_004bcbb4(temp_v7,*(unsigned int *)(temp_v4 + 0x1b70));
      }
      FUN_003344b4(0,-temp_v4);
      if (g_camp != 0) {
        *(int *)(g_camp + 0xbc) = temp_v3;
      }
      if (*(int *)(temp_v8 + temp_v3 * 8 + 0x1b74) < 0) {
        FUN_0031f718(0xffffffff,0);
        FUN_002a7324(1);
      }
      else {
        temp_v7 = gameGetSlotRecord();
        statusDisplayBindUnitRecord(temp_v7,0,0);
        FUN_002a7324(1);
      }
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 != 0) {
      FUN_002c7e24();
      campTouchRegionsRemoveGroup(temp_v8 + 0x1ec,1);
      temp_v4 = 0;
      temp_v3 = uiSearchPrimary(temp_v8 + 0x1ec);
      if (0 < temp_v3) {
        do {
          ifTouchRegionRemove();
          temp_v3 = temp_v4 * 2;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)(temp_v8 + temp_v3 + 0x1b3e) = 0xffff;
          temp_v3 = uiSearchPrimary(temp_v8 + 0x1ec);
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = FUN_0035db94();
      if (temp_v3 < 0) {
        temp_v7 = 4;
      }
      else {
        temp_v3 = FUN_0035db94();
        if (temp_v3 < 1) {
          *(unsigned int *)(temp_v8 + 0x24) = 0x18;
          campChangeState(5);
          return;
        }
        temp_v7 = 3;
      }
      FUN_0021b274(temp_v7,0xffffffff,0);
      *(unsigned int *)(temp_v8 + 0x24) = 0x18;
      campChangeState(5);
      return;
    }
  }
  temp_v9[0] = '\0';
  temp_v7 = FUN_001834a4(0x14,0x56d);
  temp_v4 = temp_v8 + 0x1ec;
  FUN_003450d4(temp_v4,temp_v7,temp_v8 + 0x1b3e,(int)*(short *)(temp_v8 + 0x1b34),
               (int)*(short *)(temp_v8 + 0x1b36),(int)*(short *)(temp_v8 + 0x1b38),temp_v9,0,1);
  if (temp_v4 != 0) {
    temp_v7 = FUN_002a4878(temp_v8 + 0x40);
    FUN_003da8f4((int)*(char *)(temp_v8 + 0xa4),temp_v7);
    FUN_0028b088();
    return;
  }
  temp_v4 = temp_v8 + 0x1ec;
  FUN_00228b04(temp_v4,1);
  if (temp_v4 != 0) {
    temp_v7 = FUN_002a4878(temp_v8 + 0x40);
    FUN_003da8f4((int)*(char *)(temp_v8 + 0xa4),temp_v7);
    FUN_0028b088();
    return;
  }
  temp_v4 = 0;
  FUN_001517b4(0,1);
  temp_v7 = 0x100020e;
  if ((!(temp_v4 == 0 && temp_v9[0] == '\0')) && (temp_v4 = FUN_0022e714(), temp_v4 != 0)) {
    temp_v4 = temp_v8 + temp_v3 * 8;
    piVar12 = (int *)(temp_v4 + 0x1b74);
    piVar11 = (int *)(temp_v4 + 0x1b70);
    temp_v3 = FUN_002684d0(*piVar11,(int)(short)*piVar12);
    if ((temp_v3 != 0) && (temp_v3 = FUN_0022a030(*piVar12,*piVar11), temp_v3 != 0)) {
      temp_v0 = 1;
      if (*(int *)(temp_v4 + 0x1b74) < 0) {
        temp_v3 = gameGetPlayerData();
        if ((*(unsigned short *)(temp_v3 + 0x5e) & 2) != 0) {
          temp_v7 = 0x100020f;
          eventQueueAddUniqueIfValid(temp_v7);
          return;
        }
      }
      else {
        temp_v3 = gameGetSlotRecord();
        if (((temp_v3 == 0) || ((*(unsigned short *)(temp_v3 + 0x60) & 2) != 0)) ||
           ((*(unsigned short *)(temp_v3 + 0x60) & 0x400) != 0)) {
          temp_v0 = 0;
        }
        temp_v3 = gameFlagIsSet(0x401);
        if (temp_v3 == 0 || !temp_v0) {
          temp_v7 = 0x100020f;
          eventQueueAddUniqueIfValid(temp_v7);
          return;
        }
      }
      if (*piVar11 == 0x8c) {
        FUN_002b5c88();
        if (*piVar12 < 0) {
          temp_v8 = gameGetPlayerData();
          temp_v1 = FUN_003df57c(*piVar11,1);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        else {
          temp_v8 = gameGetSlotRecord();
          temp_v1 = FUN_004bcbb4(temp_v8,*piVar11);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        if (temp_v1 < 0) {
          *(unsigned short *)(temp_v8 + 0x2c) = 0;
        }
        if (*piVar12 < 0) {
          FUN_0031f718(0xffffffff,0);
          FUN_002a7324(0);
        }
        else {
          temp_v7 = gameGetSlotRecord();
          statusDisplayBindUnitRecord(temp_v7,0,0);
          FUN_002a7324(0);
        }
        eventQueueAddUniqueIfValid(0x100021c);
        buttonHelpScriptStart(0);
        campChangeState(0x47);
        sysPlaySe(0xa0);
        FUN_003343f0(1);
        return;
      }
      if (*piVar11 == 0x93) {
        flagBanksResetPendingState(0);
        if (*piVar12 < 0) {
          temp_v8 = gameGetPlayerData();
          temp_v1 = FUN_003df57c(*piVar11,1);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        else {
          temp_v8 = gameGetSlotRecord();
          temp_v1 = FUN_004bcbb4(temp_v8,*piVar11);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        if (temp_v1 < 0) {
          *(unsigned short *)(temp_v8 + 0x2c) = 0;
        }
        if (*piVar12 < 0) {
          FUN_0031f718(0xffffffff,0);
          FUN_002a7324(0);
        }
        else {
          temp_v7 = gameGetSlotRecord();
          statusDisplayBindUnitRecord(temp_v7,0,0);
          FUN_002a7324(0);
        }
        eventQueueAddUniqueIfValid(0x100021c);
        buttonHelpScriptStart(4);
        campChangeState(0x47);
        sysPlaySe(0xa0);
        FUN_003343f0(1);
        return;
      }
      campTouchRegionsRemoveGroup(temp_v8 + 0x1ec,1);
      FUN_0021b274(3,0xffffffff,0);
      FUN_0023b45c(0);
      FUN_0035dbd4(0);
      *(unsigned int *)(temp_v8 + 0x24) = 0x12;
      campChangeState(5);
    }
    else {
      temp_v7 = 0x100020f;
    }
  }
  else {
    temp_v3 = 1;
    FUN_001517b4();
    if ((temp_v3 == 0) || (temp_v3 = FUN_002a7410(), temp_v3 != 0)) {
      if (!temp_v0) {
        temp_v3 = 9;
        FUN_001517b4(9,1);
        if (temp_v3 != 0) {
          sortMenuAcquire(1,0);
          FUN_0031f208(0xb);
          FUN_0031f208(0x20);
          FUN_0031f208(0xd);
          FUN_0031f208(0xf);
          FUN_0031f208(0x11);
          FUN_0031f208(3);
          FUN_0019de98(0,0xf4f4f4ff);
          temp_v2 = ifTouchGetButtonHelpValue();
          *(unsigned short *)(temp_v8 + 0x3a) = temp_v2;
          campChangeState(0x2b);
          eventQueueAddUniqueIfValid(temp_v7);
          return;
        }
      }
      return;
    }
    campTouchRegionsRemoveGroup(temp_v8 + 0x1ec,1);
    if (*(char *)(temp_v8 + 0x32a8) != '\0') {
      *(unsigned char *)(temp_v8 + 0xa4) = 1;
      FUN_0020d700();
      *(unsigned char *)(temp_v8 + 0x32a8) = 0;
    }
    FUN_003344b4(0);
    FUN_0022e774();
    FUN_0035dbd4(0);
    FUN_0028b088(0);
    FUN_0021b274(3,0xffffffff,0);
    *(unsigned int *)(temp_v8 + 0x24) = 6;
    campChangeState(5);
    campResetScreen();
    temp_v7 = 0x100020f;
  }
  eventQueueAddUniqueIfValid(temp_v7);
  return;
}

} /* extern "C" */
