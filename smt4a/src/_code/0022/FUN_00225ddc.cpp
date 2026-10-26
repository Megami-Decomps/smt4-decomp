/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225ddc` (_code @ 0x225ddc, 0x75c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"
#include "util/FUN_0013def0.h"
struct ScriptHolder;

extern "C" {

int asdSequenceRequest(...);
int jobStop(...);
int jobSetIntensity(...);
int messageSlotSet(...);
int FUN_00324c48(...);
int FUN_004731d8(void);
int mapRestoreSavedDestination(...);
int scriptHolderFree2(...);

int textFormatBuffer(...);
int sysPlaySe(int);
int FUN_001695a0(void);
int buttonHelpBeginExit(int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int asdLoadFileSyncDefault(void);
int scrScriptProcessGetEntry(unsigned int, unsigned int);
int FUN_00275bc8(int, unsigned int);
int scrScriptProcessStartEntry(unsigned int, int);
int msgWindowReset(void);
int rt_aeabi_memclr(...);
int campCommonBgAcquire(void);
int campButtonHelpAcquire(void);
int campCommonBgRelease(void);
int eventTexReleaseJobs(void);
int byteTableASetValue(...);
int bustupCutAnimStopJob(void);
int campButtonHelpRelease(void);
int byteTableASetValue3(int);
int FUN_003b61ec(void);
int eventCommandStop(void);
int eventOpeningResetValidJob(void);
int FUN_003d54f8(...);
int aocDrawText8(int, unsigned int, int);
int aocDrawText7(int, unsigned int, int);
int FUN_0047e430(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
} void_stack;

extern unsigned char LAB_00226234; /* 0x226234 */
extern unsigned char LAB_0022624c; /* 0x22624c */
extern int g_aocMain; /* 0x570260 */
extern int g_aocSystem; /* 0x570280 */
extern unsigned int *g_aocJob; /* 0x57f568 */
extern unsigned int DAT_005e1f70; /* 0x5e1f70 */
extern unsigned int DAT_005e1f74; /* 0x5e1f74 */
extern unsigned char DAT_005e1f78; /* 0x5e1f78 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern int DAT_005f1610; /* 0x5f1610 */
extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdSequenceRequest. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: jobSetIntensity. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: buttonHelpBeginExit. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: scrScriptProcessGetEntry. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: messageSlotSet. */
extern int messageMainGetValue(void);
extern int FUN_002e07f4(void);
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: campCommonBgAcquire. */
extern int getByteTableAValue(void);
/* Supplied declaration required: FUN_00324c48. */
/* Supplied declaration required: campButtonHelpAcquire. */
extern int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: eventTexReleaseJobs. */
/* Supplied declaration required: byteTableASetValue. */
extern int byteTableAGetValue3(void);
/* Supplied declaration required: bustupCutAnimStopJob. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: byteTableASetValue3. */
extern int campButtonHelpIsActive(void);
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: eventCommandStop. */
/* Supplied declaration required: eventOpeningResetValidJob. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: aocDrawText8. */
/* Supplied declaration required: aocDrawText7. */
extern int aocPackageGrantsItem(int, unsigned int, unsigned int);
extern char *gameBlockGetArea27E98(void);
/* Supplied declaration required: FUN_004731d8. */
extern int gameBlockByte27E98Is1To3(void);
/* Supplied declaration required: mapRestoreSavedDestination. */
extern unsigned int scriptHolderUpdateForward(ScriptHolder *);
/* Supplied declaration required: scriptHolderFree2. */
/* Supplied declaration required: FUN_0047e430. */


unsigned int FUN_00225ddc(void)

{
/* irregular: 36 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar7;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [132];
  
  puVar2 = g_aocJob;
  if ((*(unsigned int *)(g_aocMain + 0x754) & 4) != 0 || (*(unsigned int *)(g_aocMain + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v3 = g_aocJob[2];
  if (temp_v3 == 0x5f) {
    temp_v1 = FUN_002e07f4();
    temp_v3 = g_aocMain;
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(g_aocMain + 0x754);
    if ((temp_v4 & 4) != 0 || (temp_v4 & 8) != 0) {
      return 0;
    }
    *(unsigned int *)(g_aocMain + 0x754) = temp_v4 & 0xffffff8f;
    FUN_0047e430(temp_v3 + 0xa8,0);
    puVar2[2] = 0x60;
    return 0;
  }
  if (temp_v3 < 0x5f) {
    if (temp_v3 == 0) {
      *(unsigned char *)((int)g_aocJob + 0x22) = 0;
      temp_v2 = DAT_005e1f70;
      puVar2[5] = DAT_005e1f70;
      puVar2[6] = DAT_005e1f74;
      textFormatBuffer(temp_v6,&LAB_00226234,temp_v2,temp_v2);
      textFormatBuffer(temp_v7,&LAB_0022624c,puVar2[5],puVar2[5]);
      temp_v3 = aocPackageGrantsItem(g_aocSystem,puVar2[5],0);
      if (temp_v3 != 0) {
        temp_v3 = g_aocSystem;
        aocDrawText7(g_aocSystem,puVar2[5],0);
        puVar2[0xb] = temp_v3;
        temp_v3 = g_aocSystem;
        aocDrawText8(g_aocSystem,puVar2[5],0);
        puVar2[0xd] = temp_v3;
        if (puVar2[0xb] == 0 || temp_v3 == 0) {
          puVar2[2] = 0x5f;
          temp_v3 = (int)FUN_0013def0(0);
          if (temp_v3 == 3) {
            FUN_003d54f8(0,5);
          }
          temp_v3 = (int)FUN_0013def0(1);
          if (temp_v3 == 3) {
            FUN_003d54f8(1,5);
          }
          temp_v3 = campButtonHelpIsActive();
          if (temp_v3 == 0) {
            return 0;
          }
          buttonHelpBeginExit(1);
          return 0;
        }
      }
      else {
        puVar4 = temp_v6;
        asdLoadFileSyncDefault();
        puVar2[0xb] = (unsigned int)puVar4;
        puVar4 = temp_v7;
        asdLoadFileSyncDefault();
        puVar2[0xd] = (unsigned int)puVar4;
      }
      campCommonBgAcquire();
      campButtonHelpAcquire();
      FUN_003b61ec();
      sysPlaySe(0x92);
      temp_v3 = puVar2[0xb];
      FUN_00275bc8(temp_v3,puVar2[0xd]);
      puVar2[0xc] = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      temp_v3 = puVar2[6];
      if (temp_v3 == -1) {
        temp_v3 = tableGroupFindEntryIndex(puVar2[0xb],&DAT_005e1f78);
        puVar2[6] = temp_v3;
      }
      scrScriptProcessStartEntry(puVar2[0xc],temp_v3);
      puVar2[7] = 0;
      scrScriptProcessGetEntry(puVar2[0xc],puVar2[6]);
      puVar2[2] = puVar2[2] + 1;
      puVar2[7] = 0;
      return 0;
    }
    if (temp_v3 != 1) {
      if (temp_v3 == 10) {
        return 0;
      }
      if (temp_v3 != 0xb) {
        return 0;
      }
      temp_v3 = FUN_002e07f4();
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v2 = 1;
    }
    else {
      temp_v3 = (int)FUN_0013def0(0);
      if (((temp_v3 != 3) || (temp_v3 = (int)FUN_0013def0(1), temp_v3 != 3)) &&
         (temp_v3 = getByteTableAValue(), temp_v3 != 0)) {
        byteTableASetValue(0);
      }
      temp_v3 = byteTableAGetValue3();
      if (temp_v3 != 0) {
        byteTableASetValue3(0);
        byteTableASetValue(0);
      }
      temp_v3 = getByteTableAValue();
      if ((temp_v3 == 0) || (temp_v3 = FUN_00162ea4(), temp_v3 != 0)) {
        temp_v3 = scrRunOpcodesStub(puVar2[0xc]);
        if (temp_v3 == 2) {
          if (puVar2[7] != 0) {
            gameFlagSetValue(puVar2[7], 1, 1);
          }
          puVar3 = g_aocJob;
          if (g_aocJob != (unsigned int *)0x0) {
            *(unsigned char *)(g_aocJob + 0x1f) = 0;
            rt_aeabi_memclr(puVar3 + 0xf,0x40);
          }
          campCommonBgRelease();
          campButtonHelpRelease();
          FUN_001695a0();
          msgWindowReset();
          bustupCutAnimStopJob();
          eventTexReleaseJobs();
          eventCommandStop();
          eventOpeningResetValidJob();
          if (puVar2[0xc] != 0) {
            scrScriptProcessDestroy();
            puVar2[0xc] = 0;
          }
          if (puVar2[0xb] != 0) {
            asdMemFree();
            puVar2[0xb] = 0;
          }
          if (puVar2[0xd] != 0) {
            asdMemFree();
            puVar2[0xd] = 0;
          }
          puVar2[2] = 99;
          messageSlotSet(0);
        }
        temp_v3 = 0;
        if (*(char *)(puVar2 + 0x1f) == '\0') {
          return 0;
        }
        do {
          if (puVar2[temp_v3 * 2 + 0xf] != 0) {
            jobSetIntensity(puVar2[temp_v3 * 2 + 0xf],0);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        temp_v3 = 0;
        do {
          if ((puVar2[temp_v3 * 2 + 0xf] != 0) &&
             (temp_v1 = messageMainGetValue(), temp_v1 == puVar2[temp_v3 * 2 + 0x10])) {
            jobSetIntensity(puVar2[temp_v3 * 2 + 0xf],1);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        return 0;
      }
      FUN_003d54f8(0,5);
      FUN_003d54f8(1,5);
      byteTableASetValue(0);
      temp_v2 = 0xb;
    }
    puVar2[2] = temp_v2;
    return 0;
  }
  if (temp_v3 == 0x60) {
    temp_v3 = scriptHolderUpdateForward((ScriptHolder *)(g_aocMain + 0xa8));
    if (temp_v3 == 0) {
      return 0;
    }
    scriptHolderFree2(g_aocMain + 0xa8);
    temp_v3 = gameBlockByte27E98Is1To3();
    if (temp_v3 == 0) {
      temp_v2 = 0x62;
    }
    else {
      temp_v2 = 0x61;
    }
    puVar2[2] = temp_v2;
    if (puVar2[0xb] != 0) {
      asdMemFree();
      puVar2[0xb] = 0;
    }
    if (puVar2[0xd] == 0) {
      return 0;
    }
    asdMemFree();
    puVar2[0xd] = 0;
    return 0;
  }
  if (temp_v3 != 0x61) {
    if (temp_v3 != 0x62) {
      if (temp_v3 != 99) {
        return 0;
      }
      jobStop(*g_aocJob,0);
      temp_v3 = g_aocMain;
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
      if (*(char *)(temp_v3 + 0xc0) != '\0') {
        *(unsigned char *)(temp_v3 + 0xc0) = 0;
        mapRestoreSavedDestination(temp_v3 + 0xa8,1);
      }
      if (*(char *)(puVar2 + 0xe) == '\0') {
        return 0;
      }
      *(unsigned char *)(puVar2 + 0xe) = 0;
      asdSequenceRequest(1,0);
      return 0;
    }
    if (DAT_005f1b70 != '\0') {
      if (DAT_005f1610 == 1) {
        asdSequenceRequest(6,0);
      }
      if (DAT_005f1610 == 2) {
        asdSequenceRequest(8,0);
      }
      if (DAT_005f1610 == 3) {
        temp_v5 = romwright_piece_2_2((short)DAT_005f1b78,(short)DAT_005f1b74 - 200);
        asdSequenceRequest(0xe,&temp_v5,4);
      }
    }
  }
  else {
    pcVar7 = (char *)gameBlockGetArea27E98();
    temp_v0 = *pcVar7;
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          temp_v5 = (unsigned int)(unsigned char)pcVar7[1];
          asdSequenceRequest(0xe,&temp_v5,4);
        }
      }
      else {
        FUN_00324c48((unsigned char)pcVar7[1] + 100,pcVar7[2],0xffffffff);
        DAT_005f1604 = 0xffffffff;
        temp_v2 = 8;
        asdSequenceRequest(temp_v2,0);
      }
    }
    else {
      FUN_00324c48(pcVar7[1],pcVar7[2],pcVar7[3]);
      temp_v2 = 6;
      asdSequenceRequest(temp_v2,0);
    }
    DAT_005f1b70 = '\0';
    DAT_005f1658 = 0;
    FUN_004731d8();
  }
  jobStop(*g_aocJob,0);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  puVar2[2] = 100;
  return 0;
}

} /* extern "C" */
