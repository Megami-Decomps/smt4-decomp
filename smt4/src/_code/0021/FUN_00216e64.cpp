/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00216e64` (_code @ 0x216e64, 0x7a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029541c(...);
int FUN_00296774(...);
int buttonHelpSetPreset(...);
int eventQueueAddUnique(...);
int FUN_002bee58(...);

int statusReplaceSkillList(int);
int FUN_001ddbbc(void);
int FUN_00215b40(int);
int FUN_0026a978(...);
int FUN_0028bf2c(void);
int FUN_002954bc(...);
int btlTalkBustUpSetUnk2F4(...);
int FUN_002954f4(...);
int textEncodeFontSlot(int, unsigned char [32]);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int FUN_0029bd4c(void);
int FUN_0029bed8(...);
int FUN_0029c424(...);
int unitRecalculateEffectiveStats(...);
int beginStatusPanelClose(void);
int FUN_0029d8f4(int, int);
int scrScriptProcessDestroy(unsigned int);
int gameGetPlayerData(void);
int FUN_002b7bca(int, int, int, unsigned char *);
int devilGetRecord(...);
int FUN_002bd06c(unsigned int);
int textFormatBuffer(...);
int libc_strcpy(unsigned char [32], unsigned int);
int FUN_002bf818(int);
int asdMemFree(unsigned int);
int FUN_0033bb94(int, unsigned int);

/* stack frame of param_1: 10 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned short spAA; /* 0xaa: local_aa */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_1_stack;

extern unsigned char LAB_00217614; /* 0x217614 */
extern unsigned char LAB_002c6e64; /* 0x2c6e64 */

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: statusReplaceSkillList. */
/* Supplied declaration required: FUN_001ddbbc. */
/* Supplied declaration required: FUN_00215b40. */
/* Supplied declaration required: FUN_0026a978. */
extern int FUN_0026a9cc(unsigned short, unsigned char, int, short *, unsigned char);
/* Supplied declaration required: FUN_0028bf2c. */
/* Supplied declaration required: FUN_0029541c. */
/* Supplied declaration required: FUN_002954bc. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_002954f4. */
extern int btlTalkBustUpGetValue(void);
extern int FUN_00295618(void);
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: FUN_00296774. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int messageMainGetChoiceResult(void);
/* Supplied declaration required: FUN_0029bd4c. */
/* Supplied declaration required: FUN_0029bed8. */
/* Supplied declaration required: FUN_0029c424. */
/* Supplied declaration required: unitRecalculateEffectiveStats. */
extern int flagCountUnlockedSlots(int);
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: FUN_0029d8f4. */
extern int FUN_0029ea68(void);
extern int sys43e188GetState(void);
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int gameGetUnitRecord(int);
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: devilGetRecord. */
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bf818. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
extern unsigned int asdLoadFileSyncDefault(unsigned char *);
/* Supplied declaration required: FUN_0033bb94. */
extern unsigned int FUN_0033c0c0(int);


void FUN_00216e64(int param_1)

{
/* irregular: 1 goto(s); 32 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  short *psVar11;
  short temp_v10;
  int *piVar13;
  int temp_v11;
  char *pcVar15;
  unsigned int *puVar16;
  int *piVar17;
  char temp_v12;
  int temp_v13;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int temp_v14;
  short temp_v15 [8];
  unsigned char temp_v16 [32];
  unsigned char temp_v17 [68];
  
  temp_v11 = param_1 + *(int *)(param_1 + 0xcf78) * 0x620;
  pcVar15 = (char *)(temp_v11 + 0x3654);
  temp_v2 = gameGetUnitRecord((int)*pcVar15);
  piVar13 = (int *)(param_1 + 0x3534);
  temp_v3 = *piVar13;
  temp_v14 = param_1 + 0x73c;
  piVar17 = (int *)(param_1 + 0x3544);
  puVar16 = (unsigned int *)(param_1 + 0x3574);
  if (temp_v3 == 5) {
    if (*piVar17 < 8) {
      return;
    }
    FUN_002bf818(temp_v14);
    if (*piVar17 == 0x10) {
      btlTalkBustUpSetUnk2F4(0);
      FUN_0028bf2c();
      *(unsigned char *)(temp_v11 + 0x3c70) = 0;
      *(unsigned char *)(temp_v11 + 0x3c71) = 0;
      *(unsigned char *)(temp_v11 + 0x3c72) = 0;
      temp_v4 = FUN_0033c0c0(temp_v2);
      temp_v3 = FUN_0029ea68();
      *(unsigned char *)(param_1 + 0xd640) = temp_v3 == 0;
      temp_v13 = temp_v11 + 0x3c5c;
      temp_v3 = temp_v2;
      FUN_0033bb94(temp_v2,temp_v4);
      temp_v0 = 0;
      if (temp_v3 != 0) {
        temp_v3 = flagCountUnlockedSlots(temp_v2);
        temp_v9 = 0;
        do {
          if ((*(short *)(pcVar15 + temp_v9 * 2 + 0x608) != 0) && (temp_v5 = 0, 0 < temp_v3)) {
            do {
              if (*(short *)(temp_v2 + temp_v5 * 2 + 0x34) == 0) {
                *(short *)(temp_v2 + temp_v5 * 2 + 0x34) = *(short *)(pcVar15 + temp_v9 * 2 + 0x608);
                (pcVar15 + temp_v9 * 2 + 0x608)[0] = '\0';
                (pcVar15 + temp_v9 * 2 + 0x608)[1] = '\0';
                break;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < temp_v3);
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 8);
        FUN_002b7bca(temp_v13,8,2,&LAB_002c6e64);
        temp_v0 = 1;
      }
      *(unsigned char *)(param_1 + 0xd044) = temp_v0;
      FUN_002954f4(*(unsigned short *)(temp_v2 + 0x46),0);
      btlTalkBustUpSetUnk2F4(1);
      FUN_0029d8f4(temp_v2,0);
      statusReplaceSkillList(temp_v2 + 0x34);
      FUN_00215b40((int)*(short *)(temp_v2 + 0x46));
      if (*(char *)(param_1 + 0xd044) != '\0') {
        temp_v15[0] = 0;
        temp_v15[1] = 0;
        temp_v15[2] = 0;
        temp_v15[3] = 0;
        temp_v15[4] = 0;
        temp_v15[5] = 0;
        temp_v15[6] = 0;
        temp_v15[7] = 0;
        temp_v3 = FUN_0026a9cc(*(unsigned short *)(temp_v2 + 0x46),*(unsigned char *)(temp_v2 + 0x48),
                             temp_v2 + 0x34,temp_v15,*(char *)(temp_v2 + 0x4b) != '\0');
        FUN_0026a978(temp_v15,(int)(char)temp_v3);
        temp_v13 = *(int *)(temp_v11 + 0x3c5c);
        uStack_b4 = *(unsigned int *)(temp_v11 + 0x3c60);
        uStack_b0 = *(unsigned int *)(temp_v11 + 0x3c64);
        uStack_ac = *(unsigned int *)(temp_v11 + 0x3c68);
        temp_v11 = 0;
        if (temp_v11 < temp_v3) {
          do {
            if (temp_v15[temp_v11] != 0) {
              temp_v9 = 0;
              do {
                if (*(short *)((int)&temp_v13 + temp_v9 * 2) == 0) {
                  *(short *)((int)&temp_v13 + temp_v9 * 2) = temp_v15[temp_v11];
                  break;
                }
                temp_v9 = temp_v9 + 1;
              } while (temp_v9 < 8);
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < temp_v3);
        }
        temp_v3 = 3;
        temp_v12 = (short)temp_v13 != 0;
        temp_v1 = '\0';
        psVar11 = (short *)&temp_v13;
        temp_v10 = (*(unsigned short *)((unsigned char *)&temp_v13 + 2));
        do {
          if (temp_v10 != 0) {
            temp_v12 = temp_v12 + '\x01';
          }
          temp_v10 = psVar11[3];
          if (psVar11[2] != 0) {
            temp_v1 = temp_v1 + '\x01';
          }
          temp_v3 = temp_v3 - 1;
          psVar11 = psVar11 + 2;
        } while (temp_v3 != 0);
        temp_v1 = temp_v1 + temp_v12;
        if ((*(unsigned short *)((unsigned char *)&uStack_ac + 2)) != 0) {
          temp_v1 = temp_v1 + '\x01';
        }
        FUN_0026a978(&temp_v13,(int)temp_v1);
      }
      FUN_001ddbbc();
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
      FUN_002bd06c(temp_v6);
      libc_strcpy(temp_v16,temp_v6);
      textEncodeFontSlot(8,temp_v16);
      temp_v4 = demonGetRaceLabel(*(unsigned short *)(temp_v2 + 0x46),1);
      libc_strcpy(temp_v16,temp_v4);
      textEncodeFontSlot(0x10,temp_v16);
      scrScriptProcessDestroy(*puVar16);
      asdMemFree(*(unsigned int *)(param_1 + 0x3578));
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
      devilGetRecord();
      temp_v1 = *(char *)(temp_v6 + 0x30);
      temp_v4 = dataTableGet(0x25,0);
      pcVar15 = (char *)dataTableGetEntries();
      temp_v6 = dataTableGetCount(temp_v4);
      temp_v7 = 0;
      if (temp_v7 < temp_v6) {
        do {
          if (*pcVar15 == temp_v1) goto LAB_002174ac;
          temp_v7 = temp_v7 + 1;
          pcVar15 = pcVar15 + 0x20;
        } while (temp_v7 < temp_v6);
      }
      pcVar15 = (char *)0x0;
LAB_002174ac:
      textFormatBuffer(temp_v17,&LAB_00217614,pcVar15 + 1);
      temp_v4 = asdLoadFileSyncDefault(temp_v17);
      *(unsigned int *)(param_1 + 0x3578) = temp_v4;
      temp_v8 = *(unsigned int *)(param_1 + 0x3570);
      FUN_00297060(temp_v8,temp_v4);
      *puVar16 = temp_v8;
      unitRecalculateEffectiveStats(temp_v2);
      FUN_002954bc(temp_v2);
    }
    if (*(char *)(temp_v14 + 0x8a) == '\0') {
      return;
    }
    scrScriptProcessStartEntry(*puVar16,4);
    if (*(char *)(param_1 + 0xd044) == '\0') {
      if (*(char *)(param_1 + 0xd640) != '\0') {
        FUN_0029bed8(*(unsigned short *)(temp_v2 + 0x46));
        *(unsigned char *)(param_1 + 0xd640) = 0;
      }
      *piVar13 = 0xb;
      FUN_0029c424(1);
      return;
    }
    *piVar13 = *piVar13 + 1;
    return;
  }
  if (temp_v3 < 5) {
    switch(temp_v3) {
    case 0:
      if (*(int *)(temp_v11 + 0x3c6c) != 2) {
        beginStatusPanelClose();
        FUN_0029bd4c();
        temp_v2 = *piVar13 + 1;
        *piVar13 = temp_v2;
        return;
      }
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
      devilGetRecord();
      devilGetRecord(*(unsigned short *)(temp_v6 + 0x2a));
      gameGetPlayerData();
      if (((int)(*(unsigned char *)(temp_v6 + 0x29) - 2) <= (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x48)) &&
         ((unsigned int)*(unsigned char *)(temp_v2 + 0x48) < (unsigned int)*(unsigned char *)(temp_v6 + 0x29))) {
        beginStatusPanelClose();
        FUN_0029bd4c();
        *piVar13 = *piVar13 + 1;
        return;
      }
      *piVar13 = 99;
      break;
    case 1:
      temp_v3 = FUN_00295618();
      if (temp_v3 != 0) {
        temp_v3 = btlTalkBustUpGetValue();
        if (temp_v3 == 0) {
          FUN_002954f4(*(unsigned short *)(temp_v2 + 0x46),1);
          btlTalkBustUpSetUnk2F4(1);
        }
        temp_v2 = *(int *)(temp_v11 + 0x3c6c);
        if (temp_v2 == 0) {
          scrScriptProcessStartEntry(*puVar16,0);
          buttonHelpSetPreset(0x65);
          *piVar13 = *piVar13 + 1;
          *piVar17 = 0;
          return;
        }
        if (temp_v2 != 2) {
          if (temp_v2 != 3) {
            return;
          }
          scrScriptProcessStartEntry(*puVar16,1);
          buttonHelpSetPreset(0x65);
          temp_v2 = 0xb;
        }
        else {
          FUN_0029c424(1);
          scrScriptProcessStartEntry(*puVar16,1);
          buttonHelpSetPreset(0x65);
          temp_v2 = 0x14;
        }
        *piVar13 = temp_v2;
        return;
      }
      break;
    case 2:
      temp_v2 = scrRunOpcodesStub(*puVar16);
      if (temp_v2 == 2) {
        temp_v2 = messageMainGetChoiceResult();
        if (temp_v2 == 0) {
          *piVar13 = *piVar13 + 1;
          FUN_0029c424(1);
          return;
        }
        temp_v2 = 10;
        *piVar13 = temp_v2;
        return;
      }
      break;
    case 3:
      temp_v2 = sys43e188GetState();
      if (temp_v2 == 0) {
        return;
      }
      temp_v4 = *puVar16;
      temp_v8 = 2;
      scrScriptProcessStartEntry(temp_v4,temp_v8);
      *piVar13 = *piVar13 + 1;
      return;
    case 4:
      temp_v2 = scrRunOpcodesStub(*puVar16);
      if (temp_v2 == 2) {
        *piVar17 = 0;
        *piVar13 = *piVar13 + 1;
        FUN_002bee58(temp_v14,7);
        FUN_0029bd4c();
        eventQueueAddUnique(0x1000115);
        return;
      }
    }
  }
  else {
    if (temp_v3 != 0xb) {
      if (temp_v3 < 0xb) {
        if (temp_v3 == 6) {
          temp_v2 = scrRunOpcodesStub(*puVar16);
          if (temp_v2 != 2) {
            return;
          }
          FUN_00296774(param_1,0xe);
          return;
        }
        if (temp_v3 != 10) {
          return;
        }
        temp_v2 = sys43e188GetState();
        if (temp_v2 == 0) {
          return;
        }
        FUN_0029c424(1);
        temp_v4 = *puVar16;
        temp_v8 = 3;
        scrScriptProcessStartEntry(temp_v4,temp_v8);
        *piVar13 = *piVar13 + 1;
        return;
      }
      if (temp_v3 != 0x14) {
        if (temp_v3 != 99) {
          return;
        }
        if (*(char *)(temp_v11 + 0x3c72) == '\0') {
          FUN_0029bd4c();
          FUN_0029541c(param_1);
          return;
        }
        FUN_00296774(param_1,0x10);
        return;
      }
      temp_v2 = scrRunOpcodesStub(*puVar16);
    }
    else {
      temp_v2 = scrRunOpcodesStub(*puVar16);
    }
    if (temp_v2 == 2) {
      FUN_0029c424(0);
      *piVar13 = 99;
      return;
    }
  }
  return;
}

} /* extern "C" */
