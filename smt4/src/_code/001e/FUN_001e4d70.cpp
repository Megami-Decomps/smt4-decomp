/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4d70` (_code @ 0x1e4d70, 0x7cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"

extern "C" {

int FUN_002897f0(...);

int asdLoadFileSetUseRawPaths(int);
int FUN_00282bfc(int, int);
int FUN_00287728(int);
int msgWindowReset(void);
int FUN_00289880(void);
int FUN_002898e4(void);
int aocBufferQueueDisplay(int, unsigned int, int);
int FUN_00289de4(int, unsigned int, int);
int buttonHelpCreate(void);
int messageSlotSet(int);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00297060(int, unsigned int);
int soundChannelStopAll(int);
int scrScriptProcessDestroy(void);
int buttonHelpSetPreset(int);
int textFormatBuffer(unsigned char [128], unsigned char *, unsigned int, unsigned int);
int FUN_002bff50(void);
int gameFlagIsSet(void);
int asdMemFree(void);
int jobStop(unsigned int, int);
int FUN_002cb8d8(void);
int eventTexReleaseJobs(void);
int bustupCutAnimStopJob(void);
int eventCommandStop(void);
int event3dOpeningRequestExit(void);

extern unsigned char LAB_001e54bc; /* 0x1e54bc */
extern unsigned char LAB_001e54d4; /* 0x1e54d4 */
extern int g_aocMain; /* 0x432fc8 */
extern int g_aocSystem; /* 0x433158 */
extern unsigned int *g_aocJob; /* 0x43e0d0 */

extern int scrRunOpcodesStub(unsigned int);
extern int messageAnyWindowActive(void);
/* Supplied declaration required: asdLoadFileSetUseRawPaths. */
extern int asdLoadFileGetUseRawPaths(void);
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00287728. */
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: FUN_002897f0. */
extern unsigned int scrScriptProcessGetEntry(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: aocBufferQueueDisplay. */
/* Supplied declaration required: FUN_00289de4. */
extern int aocPackageGrantsItem(int, unsigned int, unsigned int);
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: messageSlotSet. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
extern int scrScriptProcessStartEntry(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonRepeat(unsigned int);
/* Supplied declaration required: textFormatBuffer. */
extern int padIsButtonPressed(unsigned int);
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
extern int jyoucyuGetTableEntry(unsigned int);
extern unsigned int asdLoadFileSyncDefault(unsigned char *);
/* Supplied declaration required: FUN_002cb8d8. */
extern int debugFlagEditorUpdate(void);
/* Supplied declaration required: eventTexReleaseJobs. */
/* Supplied declaration required: bustupCutAnimStopJob. */
/* Supplied declaration required: eventCommandStop. */
/* Supplied declaration required: event3dOpeningRequestExit. */


unsigned int FUN_001e4d70(void)

{
/* irregular: 28 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [128];
  
  puVar1 = g_aocJob;
  puVar5 = temp_v5;
  if ((*(unsigned int *)(g_aocMain + 0x754) & 4) != 0 || (*(unsigned int *)(g_aocMain + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v0 = g_aocJob[2];
  if (temp_v0 == 3) {
    g_aocJob[3] = g_aocJob[3] + 1;
    temp_v0 = scrRunOpcodesStub(puVar1[0xc]);
    if (temp_v0 != 2) {
      temp_v0 = messageAnyWindowActive();
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v0 = padIsButtonPressed(2);
      if (temp_v0 == 0) {
        return 0;
      }
      if (*(char *)(puVar1 + 9) != '\0') {
        if (puVar1[7] == 0) {
          return 0;
        }
        gameFlagIsSet();
        return 0;
      }
    }
    else if ((*(char *)(puVar1 + 9) != '\0') && (puVar1[7] != 0)) {
      gameFlagSetValue(puVar1[7], 1, 1);
    }
    uiFadeRelease();
    buttonHelpRelease();
    FUN_002bff50();
    msgWindowReset();
    bustupCutAnimStopJob();
    eventTexReleaseJobs();
    eventCommandStop();
    event3dOpeningRequestExit();
    if (puVar1[0xc] != 0) {
      scrScriptProcessDestroy();
      puVar1[0xc] = 0;
    }
    if (puVar1[0xb] != 0) {
      asdMemFree();
      puVar1[0xb] = 0;
    }
    if (puVar1[0xd] != 0) {
      asdMemFree();
      puVar1[0xd] = 0;
    }
    puVar1[2] = 1;
    messageSlotSet(0);
    FUN_00287728(0);
    FUN_00287728(1);
    soundChannelStopAll(0xf);
    gameFlagSetValue(0x522,0,1);
    return 0;
  }
  if (temp_v0 >= 3) {
    if (temp_v0 == 0x58) {
      temp_v0 = debugFlagEditorUpdate();
      if (temp_v0 == 0) {
        return 0;
      }
      puVar1[2] = 1;
      return 0;
    }
    if (temp_v0 != 99) {
      return 0;
    }
    jobStop(*g_aocJob,0);
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
    return 0;
  }
  if (temp_v0 == 0) {
    temp_v0 = g_aocJob[2];
    g_aocJob[3] = 0;
    *(unsigned char *)((int)puVar1 + 0x22) = 1;
    temp_v0 = temp_v0 + 1;
    puVar1[2] = temp_v0;
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return 0;
    }
    if ((*(char *)(g_aocJob + 8) != '\0') && (temp_v0 = asdLoadFileGetUseRawPaths(), temp_v0 == 0)) {
      asdLoadFileSetUseRawPaths(1);
      *(unsigned char *)((int)puVar1 + 0x21) = 1;
    }
    textFormatBuffer(temp_v5,&LAB_001e54bc,puVar1[5],puVar1[5]);
    textFormatBuffer(temp_v6,&LAB_001e54d4,puVar1[5],puVar1[5]);
    temp_v0 = aocPackageGrantsItem(g_aocSystem,puVar1[5],0);
    if (temp_v0 != 0) {
      temp_v0 = g_aocSystem;
      FUN_00289de4(g_aocSystem,puVar1[5],0);
      puVar1[0xb] = temp_v0;
      temp_v0 = g_aocSystem;
      aocBufferQueueDisplay(g_aocSystem,puVar1[5],0);
      puVar1[0xd] = temp_v0;
      if (puVar1[0xb] == 0 || temp_v0 == 0) {
        puVar1[2] = 1;
        puVar1[3] = 0;
        return 0;
      }
    }
    else {
      FUN_002cb8d8();
      if (puVar5 == (unsigned char *)0x0) {
        puVar1[2] = 1;
        puVar1[3] = 0;
        return 0;
      }
      temp_v3 = asdLoadFileSyncDefault(temp_v5);
      puVar1[0xb] = temp_v3;
      temp_v3 = asdLoadFileSyncDefault(temp_v6);
      puVar1[0xd] = temp_v3;
    }
    FUN_002898e4();
    buttonHelpCreate();
    FUN_00289880();
    buttonHelpSetPreset(0x90);
    if (*(char *)((int)puVar1 + 0x21) != '\0') {
      asdLoadFileSetUseRawPaths(0);
      *(unsigned char *)((int)puVar1 + 0x21) = 0;
    }
    if (*(char *)((int)puVar1 + 0x23) != '\0') {
      FUN_00282bfc(0,0xff);
      FUN_00282bfc(1,0xff);
    }
    temp_v0 = puVar1[0xb];
    FUN_00297060(temp_v0,puVar1[0xd]);
    puVar1[0xc] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    temp_v0 = scrScriptProcessStartEntry(puVar1[0xc],puVar1[6]);
    if (temp_v0 != 0) {
      puVar1[2] = puVar1[2] + 1;
      puVar1[3] = 0;
      puVar1[7] = 0;
      temp_v3 = scrScriptProcessGetEntry(puVar1[0xc],puVar1[6]);
      temp_v4 = puVar1[5];
      FUN_002897f0(temp_v4,temp_v3);
      puVar1[7] = temp_v4;
      return 0;
    }
    puVar1[2] = 1;
    puVar1[3] = 0;
    return 0;
  }
  temp_v0 = padIsButtonRepeat(5);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] - 1;
    if (temp_v0 >= 6) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 5;
    }
    else {
      temp_v0 = puVar1[4] - 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = padIsButtonRepeat(6);
  temp_v1 = puVar1[4];
  if (temp_v0 != 0) {
    if (temp_v1 + 1 >= 6) {
      temp_v1 = 0;
    }
    else if (temp_v1 + 1 < 0) {
      temp_v1 = 5;
    }
    else {
      temp_v1 = temp_v1 + 1;
    }
    puVar1[4] = temp_v1;
  }
  temp_v0 = 999;
  switch(temp_v1) {
  case 0:
    temp_v1 = padIsButtonRepeat(4);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] - 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] - 1;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = padIsButtonRepeat(3);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] + 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] + 1;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = padIsButtonRepeat(8);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] - 10;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] - 10;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = padIsButtonRepeat(7);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] + 10;
      if (temp_v1 >= 1000) {
        temp_v0 = 0;
      }
      else if (-1 < temp_v1) {
        temp_v0 = temp_v1;
      }
      puVar1[5] = temp_v0;
    }
    temp_v0 = padIsButtonPressed(0);
    if (temp_v0 != 0) {
      puVar1[2] = 2;
    }
    break;
  case 1:
    temp_v1 = padIsButtonRepeat(4);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] - 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] - 1;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = padIsButtonRepeat(3);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] + 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] + 1;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = padIsButtonRepeat(8);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] - 10;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] - 10;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = padIsButtonRepeat(7);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] + 10;
      if (temp_v1 >= 1000) {
        temp_v0 = 0;
      }
      else if (-1 < temp_v1) {
        temp_v0 = temp_v1;
      }
      puVar1[6] = temp_v0;
    }
    temp_v0 = padIsButtonPressed(0);
    if (temp_v0 != 0) {
      puVar1[2] = 2;
    }
    break;
  case 2:
    temp_v0 = padIsButtonPressed(0);
    if (temp_v0 != 0) {
      puVar1[2] = 0x58;
    }
    break;
  case 3:
    temp_v0 = jyoucyuGetTableEntry(2);
    if ((temp_v0 == 0) &&
       ((temp_v0 = padIsButtonRepeat(4), temp_v0 != 0 || (temp_v0 = padIsButtonRepeat(3), temp_v0 != 0)))) {
      *(unsigned char *)(puVar1 + 8) = *(char *)(puVar1 + 8) != '\x01';
    }
    break;
  case 4:
    temp_v0 = padIsButtonRepeat(4);
    if ((temp_v0 != 0) || (temp_v0 = padIsButtonRepeat(3), temp_v0 != 0)) {
      *(unsigned char *)((int)puVar1 + 0x23) = *(char *)((int)puVar1 + 0x23) != '\x01';
    }
    break;
  case 5:
    temp_v0 = padIsButtonRepeat(4);
    if ((temp_v0 != 0) || (temp_v0 = padIsButtonRepeat(3), temp_v0 != 0)) {
      *(unsigned char *)(puVar1 + 9) = *(char *)(puVar1 + 9) != '\x01';
    }
  }
  temp_v0 = padIsButtonPressed(2);
  if (temp_v0 != 0) {
    temp_v0 = 99;
    puVar1[2] = temp_v0;
  }
  return 0;
}

} /* extern "C" */
