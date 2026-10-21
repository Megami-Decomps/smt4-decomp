/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4b48` (_code @ 0x2c4b48, 0x6cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_002292ac(void);
int messageArmMenuAnimation(...);

int FUN_0015f858(unsigned int, int);
int FUN_00180118(unsigned int);
int gameGetSlotRecord(...);
int FUN_001ad9b4(void);
int messageForwardDefaultMode(...);
int scrWorkGetValue(...);
int scrWorkSetValue(...);
int messageSlotSet(int);
int scrCommMessageSetMode(...);
int libc_strcpy(unsigned int [32], unsigned int);
int sysMemClear(unsigned int [32], int);
int FUN_003180c4(int, unsigned int [32]);
int FUN_00359974(int, unsigned int, unsigned int, int);
int FUN_0037c88c(void);
int FUN_004185c4(...);
int idOwnerGetRecordHalf(void);
int QuestCenter_GetActiveEntry(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

/* Supplied declaration required: FUN_0015f858. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: gameGetSlotRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_002292ac. */
/* Supplied declaration required: messageForwardDefaultMode. */
extern int messageMainIsIdle(void);
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: messageSlotSet. */
extern int FUN_002a4b74(void);
extern int FUN_002ba85c(void);
/* Supplied declaration required: scrCommMessageSetMode. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003180c4. */
extern int panelIsMissingOrFlagClear(void);
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: messageArmMenuAnimation. */
/* Supplied declaration required: FUN_0037c88c. */
extern int obj04StateIs4(void);
/* Supplied declaration required: FUN_004185c4. */
/* Supplied declaration required: idOwnerGetRecordHalf. */
extern int bitsAt60Test(unsigned int, unsigned int);
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


unsigned int FUN_002c4b48(void)

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
    scrCommMessageSetMode(0xffffffff);
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
    scrCommMessageSetMode(1);
  }
  temp_v3 = scrWorkGetValue(0);
  if (temp_v3 == 100) {
    scrCommMessageSetMode(0xffffffff);
    messageSlotSet(0);
    return 1;
  }
  temp_v13 = FUN_002ba85c();
  temp_v1 = 0;
  temp_v11 = '\0';
  temp_v14 = 0;
  QuestCenter_GetActiveEntry();
  temp_v4 = idOwnerGetRecordHalf() & 0xffff;
  FUN_001ad9b4();
  temp_v3 = scrWorkGetValue(3);
  if (temp_v3 < 4) {
    temp_v9 = temp_v4 + temp_v3 * 8;
    temp_v0 = *(short *)(temp_v9 + 0x100);
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          temp_v1 = 1;
          sysMemClear(temp_v12,0x80);
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x102);
          FUN_00180118(temp_v5);
          libc_strcpy(temp_v12,temp_v5);
          FUN_003180c4(8,temp_v12);
          FUN_00359974(0x18,*(unsigned int *)(temp_v9 + 0x104),0xffffffff,0);
          temp_v6 = gameGetSlotTable();
          temp_v10 = 0;
          do {
            if ((-1 < *(char *)(temp_v6 + temp_v10 + 0x1c88)) &&
               (temp_v7 = gameGetSlotRecord(), *(short *)(temp_v7 + 0x62) == *(short *)(temp_v9 + 0x102))) {
              temp_v8 = gameGetSlotRecord((int)*(char *)(temp_v6 + temp_v10 + 0x1c88));
              temp_v9 = bitsAt60Test(temp_v8,2);
              temp_v11 = temp_v9 != 0;
              temp_v8 = gameGetSlotRecord((int)*(char *)(temp_v6 + temp_v10 + 0x1c88));
              temp_v9 = bitsAt60Test(temp_v8,10);
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
        temp_v14 = (unsigned int)*(unsigned short *)(temp_v9 + 0x102);
        temp_v8 = *(unsigned int *)(temp_v9 + 0x104);
        sysMemClear(temp_v12,0x80);
        temp_v5 = temp_v14;
        FUN_0015f858(temp_v14,1);
        libc_strcpy(temp_v12,temp_v5);
        FUN_003180c4(0,temp_v12);
        FUN_00359974(0x18,temp_v8,0xffffffff,0);
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
    temp_v3 = messageMainIsIdle();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0037c88c();
    scrWorkSetValue(0,0x14);
    temp_v3 = 1;
    temp_v8 = 2;
    scrWorkSetValue(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 >= 5) {
    if (temp_v9 != 10) {
      if (temp_v9 != 0xb) {
        if (temp_v9 != 0x13) {
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
              temp_v3 = gameFlagsGetBlock();
              QuestCenter_GetActiveEntry();
              temp_v2 = idOwnerGetRecordHalf();
              FUN_004185c4(temp_v2,0);
              *(unsigned short *)(temp_v3 + 0x1096) = 0;
              *(unsigned short *)(temp_v3 + 0x1094) = 0;
            }
            puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
            temp_v4 = *puVar5 | 0x10000;
          }
          *puVar5 = temp_v4;
          temp_v3 = 100;
        }
        else {
          temp_v3 = panelIsMissingOrFlagClear();
          if (temp_v3 == 0) {
            return 0;
          }
          temp_v3 = 0x14;
        }
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
    }
    else {
      scrWorkSetValue(0,0xb);
      temp_v3 = 0;
      temp_v8 = 1;
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
      temp_v3 = FUN_002a4b74();
      if (temp_v3 != 0) {
        scrWorkSetValue(0,0x13);
        temp_v8 = 2;
      }
      else {
        scrWorkSetValue(0,10);
        temp_v8 = 1;
      }
      scrWorkSetValue(temp_v8,temp_v3 != 0);
      FUN_0037c88c();
      return 0;
    }
  }
  else {
    temp_v9 = scrWorkGetValue(1);
    if (temp_v9 == 0 && temp_v11 == '\0') {
      FUN_002292ac();
    }
    if (*(char *)(temp_v4 + 6) != '\0') {
      FUN_001695a0();
      temp_v8 = scrWorkGetValue(1);
      temp_v12[0] = 1;
      messageForwardDefaultMode(temp_v13,0x68,temp_v8,5);
LAB_002c4ea8:
      if (temp_v11 == '\0') {
LAB_002c4f24:
        scrWorkSetValue(0,2);
        scrWorkSetValue(1,0);
        temp_v9 = obj04StateIs4();
        if (temp_v9 == 0) {
          return 0;
        }
        scrWorkSetValue(0,3);
        if (*(short *)(temp_v4 + temp_v3 * 8 + 0x100) != 1) {
          return 0;
        }
        messageArmMenuAnimation(temp_v14);
        return 0;
      }
    }
    else {
      FUN_001695a0();
      if (!temp_v1) {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 1;
        messageForwardDefaultMode(temp_v13,0x66,temp_v8,5);
        goto LAB_002c4ea8;
      }
      if (temp_v11 == '\0') {
        temp_v8 = scrWorkGetValue(1);
        temp_v12[0] = 1;
        messageForwardDefaultMode(temp_v13,0x67,temp_v8,5);
        goto LAB_002c4f24;
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
  temp_v9 = obj04StateIs4();
  if (temp_v9 == 0) {
    return 0;
  }
  scrWorkSetValue(0,3);
  if (*(short *)(temp_v4 + temp_v3 * 8 + 0x100) != 1) {
    return 0;
  }
  messageArmMenuAnimation(temp_v14);
  return 0;
}

} /* extern "C" */
