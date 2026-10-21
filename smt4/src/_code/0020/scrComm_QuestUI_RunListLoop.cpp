/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_QuestUI_RunListLoop` (_code @ 0x201afc, 0x6b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1648(void);
int FUN_002bff50(void);
int bannerShow(...);

int scrWorkGetValue(...);
int scrWorkSetValue(...);
int messageForwardDefaultMode(...);
int FUN_0028784c(...);
int messageSlotSet(int);
int FUN_0028dc98(...);
int FUN_00295660(int, unsigned int [32]);
int FUN_0029cc3c(void);
int FUN_0029ede8(int, unsigned int, unsigned int, int);
int gameGetUnitRecord(...);
int dataTable1bOr1cGetRecord(void);
int FUN_002bd06c(unsigned int);
int FUN_002be650(unsigned int, int);
int libc_strcpy(unsigned int [32], unsigned int);
int memClear(unsigned int [32], int);
int FUN_00383674(void);
int QuestCenter_GetActiveEntry(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

/* Supplied declaration required: FUN_001a1648. */
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: messageForwardDefaultMode. */
extern int FUN_002865f8(void);
/* Supplied declaration required: FUN_0028784c. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: messageSlotSet. */
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: FUN_00295660. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029cc3c. */
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029ede8. */
extern int sys43e188GetState(void);
/* Supplied declaration required: gameGetUnitRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bff50. */
extern int gameGetMapBlock(void);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: bannerShow. */
extern int sys43e188GetStateB(void);
/* Supplied declaration required: FUN_00383674. */
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


unsigned int scrComm_QuestUI_RunListLoop(void)

{
/* irregular: 2 goto(s); 20 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  char temp_v11;
  unsigned int temp_v12 [32];
  int temp_v13;
  unsigned int temp_v14;
  
  temp_v3 = QuestCenter_GetActiveEntry();
  if (temp_v3 == 0) {
    FUN_0028dc98(0xffffffff);
    messageSlotSet(0);
    return 1;
  }
  temp_v3 = scrGetCommandFrame();
  if (temp_v3 == 0) {
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
    scrWorkSetValue(2,0);
    scrWorkSetValue(3,0);
    puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
    *puVar5 = *puVar5 & 0xfffeffff;
    FUN_0028dc98(1);
  }
  temp_v3 = scrWorkGetValue(0);
  if (temp_v3 == 100) {
    FUN_0028dc98(0xffffffff);
    messageSlotSet(0);
    return 1;
  }
  temp_v13 = FUN_002865f8();
  temp_v1 = 0;
  temp_v11 = '\0';
  temp_v14 = 0;
  QuestCenter_GetActiveEntry();
  temp_v4 = FUN_00383674() & 0xffff;
  dataTable1bOr1cGetRecord();
  temp_v3 = scrWorkGetValue(3);
  if (temp_v3 < 6) {
    temp_v9 = temp_v4 + temp_v3 * 8;
    temp_v0 = *(short *)(temp_v9 + 0x16c);
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          temp_v1 = 1;
          memClear(temp_v12,0x80);
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x16e);
          FUN_002bd06c(temp_v5);
          libc_strcpy(temp_v12,temp_v5);
          FUN_00295660(8,temp_v12);
          FUN_0029ede8(0x18,*(unsigned int *)(temp_v9 + 0x170),0xffffffff,0);
          temp_v6 = gameGetSlotTable();
          temp_v10 = 0;
          do {
            if ((-1 < *(char *)(temp_v6 + temp_v10 + 0x90f0)) &&
               (temp_v7 = gameGetUnitRecord(), *(short *)(temp_v7 + 0x46) == *(short *)(temp_v9 + 0x16e))) {
              temp_v8 = gameGetUnitRecord((int)*(char *)(temp_v6 + temp_v10 + 0x90f0));
              temp_v9 = flagWordTestBit(temp_v8,2);
              temp_v11 = temp_v9 != 0;
              temp_v8 = gameGetUnitRecord((int)*(char *)(temp_v6 + temp_v10 + 0x90f0));
              temp_v9 = flagWordTestBit(temp_v8,10);
              if (temp_v9 != 0) {
                temp_v11 = '\x02';
              }
              break;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 0x18);
        }
      }
      else {
        temp_v14 = (unsigned int)*(unsigned short *)(temp_v9 + 0x16e);
        temp_v8 = *(unsigned int *)(temp_v9 + 0x170);
        memClear(temp_v12,0x80);
        temp_v5 = temp_v14;
        FUN_002be650(temp_v14,1);
        libc_strcpy(temp_v12,temp_v5);
        FUN_00295660(0,temp_v12);
        FUN_0029ede8(0x18,temp_v8,0xffffffff,0);
      }
    }
    else {
      scrWorkSetValue(0,0x14);
    }
  }
  else {
    scrWorkSetValue(0,0x14);
  }
  temp_v9 = scrWorkGetValue(0);
  if (temp_v9 == 5) {
    temp_v3 = sys43e188GetState();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0029cc3c();
    scrWorkSetValue(0,0x14);
    temp_v3 = 1;
    temp_v8 = 2;
    scrWorkSetValue(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 >= 5) {
    if (temp_v9 == 10) {
      scrWorkSetValue(0,0xb);
      scrWorkSetValue(1,0);
      return 0;
    }
    if (temp_v9 != 0xb) {
      if (temp_v9 != 0x14) {
        return 0;
      }
      temp_v3 = scrWorkGetValue(2);
      if (temp_v3 != 0) {
        puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
        temp_v4 = *puVar5 & 0xfffeffff;
      }
      else {
        if (*(char *)(temp_v4 + 6) == '\0') {
          temp_v3 = gameGetMapBlock();
          QuestCenter_GetActiveEntry();
          temp_v2 = FUN_00383674();
          FUN_0028784c(temp_v2,0);
          *(unsigned short *)(temp_v3 + 0x1062) = 0;
          *(unsigned short *)(temp_v3 + 0x1060) = 0;
        }
        puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
        temp_v4 = *puVar5 | 0x10000;
      }
      *puVar5 = temp_v4;
      temp_v3 = 100;
      temp_v8 = 0;
    }
    else {
      if (temp_v1) {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 0;
        temp_v3 = temp_v13;
        messageForwardDefaultMode(temp_v13,0x6a,temp_v8,5);
      }
      else {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 0;
        temp_v3 = temp_v13;
        messageForwardDefaultMode(temp_v13,0x69,temp_v8,5);
      }
      temp_v9 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v9 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      scrWorkSetValue(0,1);
      scrWorkSetValue(1,0);
      temp_v3 = scrWorkGetValue(3);
      temp_v3 = temp_v3 + 1;
      temp_v8 = 3;
    }
    scrWorkSetValue(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 == 0) {
    temp_v8 = scrWorkGetValue(1);
    temp_v12[0] = 0;
    temp_v3 = temp_v13;
    messageForwardDefaultMode(temp_v13,0x65,temp_v8,5);
    temp_v9 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v9 + 1);
    if (temp_v3 != 1) {
      return 0;
    }
    scrWorkSetValue(0,1);
    temp_v3 = 0;
    temp_v8 = 1;
    scrWorkSetValue(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 != 1) {
    if (temp_v9 != 2) {
      if (temp_v9 != 3) {
        return 0;
      }
      temp_v8 = scrWorkGetValue(1);
      temp_v12[0] = 0;
      temp_v3 = temp_v13;
      messageForwardDefaultMode(temp_v13,100,temp_v8,0xb);
      temp_v9 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v9 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      temp_v3 = FUN_002973d8();
      if (temp_v3 != 0) {
        scrWorkSetValue(0,0x14);
        temp_v8 = 2;
      }
      else {
        scrWorkSetValue(0,10);
        temp_v8 = 1;
      }
      scrWorkSetValue(temp_v8,temp_v3 != 0);
      FUN_0029cc3c();
      return 0;
    }
  }
  else {
    temp_v9 = scrWorkGetValue(1);
    if (temp_v9 == 0 && temp_v11 == '\0') {
      FUN_001a1648();
    }
    if (*(char *)(temp_v4 + 6) != '\0') {
      FUN_002bff50();
      temp_v8 = scrWorkGetValue(1);
      temp_v12[0] = 1;
      messageForwardDefaultMode(temp_v13,0x68,temp_v8,5);
LAB_00201e54:
      if (temp_v11 == '\0') {
LAB_00201ed0:
        scrWorkSetValue(0,2);
        scrWorkSetValue(1,0);
        temp_v9 = sys43e188GetStateB();
        if (temp_v9 == 0) {
          return 0;
        }
        scrWorkSetValue(0,3);
        if (*(short *)(temp_v4 + temp_v3 * 8 + 0x16c) != 1) {
          return 0;
        }
        bannerShow(temp_v14);
        return 0;
      }
    }
    else {
      FUN_002bff50();
      if (!temp_v1) {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 1;
        messageForwardDefaultMode(temp_v13,0x66,temp_v8,5);
        goto LAB_00201e54;
      }
      if (temp_v11 == '\0') {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 1;
        messageForwardDefaultMode(temp_v13,0x67,temp_v8,5);
        goto LAB_00201ed0;
      }
      if (temp_v11 != '\x01') {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 0;
        messageForwardDefaultMode(temp_v13,0x6e,temp_v8,5);
      }
      else {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 0;
        messageForwardDefaultMode(temp_v13,0x6d,temp_v8,5);
      }
    }
    scrWorkSetValue(0,5);
    scrWorkSetValue(1,0);
  }
  temp_v9 = sys43e188GetStateB();
  if (temp_v9 == 0) {
    return 0;
  }
  scrWorkSetValue(0,3);
  if (*(short *)(temp_v4 + temp_v3 * 8 + 0x16c) != 1) {
    return 0;
  }
  bannerShow(temp_v14);
  return 0;
}

} /* extern "C" */
