/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298978` (_code @ 0x298978, 0x85c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0022677c(...);
int scrScriptProcessGetEntry(...);
int FUN_00275bc8(...);

int textFormatBuffer(unsigned char [128], unsigned char *, unsigned int, unsigned int);
int jobStop(unsigned int, int);
int jobSetIntensity(unsigned int, int);
unsigned int asdLoadFileExists(const char *);
int FUN_001695a0(void);
int gameFlagIsSet(void);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int asdLoadFileSyncDefault(void);
int FUN_00212204(int);
int asdLoadFileSetUseRawPaths(int);
int msgWindowReset(void);
int messageSlotSet(int);
int rt_aeabi_memclr(unsigned int *, int);
int campCommonBgAcquire(void);
int campButtonHelpAcquire(void);
int campCommonBgRelease(void);
int eventTexReleaseJobs(void);
int bustupCutAnimStopJob(void);
int campButtonHelpRelease(void);
int FUN_003b61ec(void);
int eventCommandStop(void);
int eventOpeningResetValidJob(void);
int soundChannelStopAll(int);
int gameFlagSetValue(...);
int aocDrawText8(int, unsigned int, int);
int aocDrawText7(int, unsigned int, int);

extern unsigned char LAB_00299154; /* 0x299154 */
extern unsigned char LAB_0029916c; /* 0x29916c */
extern int g_aocMain; /* 0x570260 */
extern int g_aocSystem; /* 0x570280 */
extern unsigned int *g_aocJob; /* 0x57f568 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: jobStop. */
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: jobSetIntensity. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: FUN_00212204. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: asdLoadFileSetUseRawPaths. */
extern int messageAnyWindowActive(void);
/* Supplied declaration required: scrScriptProcessGetEntry. */
/* Supplied declaration required: FUN_00275bc8. */
extern int scrScriptProcessStartEntry(unsigned int, unsigned int);
extern int asdLoadFileGetUseRawPaths(void);
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: messageSlotSet. */
extern int messageMainGetValue(void);
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: campButtonHelpAcquire. */
extern int flagBrowserStep(void);
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: eventTexReleaseJobs. */
/* Supplied declaration required: bustupCutAnimStopJob. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: eventCommandStop. */
/* Supplied declaration required: eventOpeningResetValidJob. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: aocDrawText8. */
/* Supplied declaration required: aocDrawText7. */
extern int aocPackageGrantsItem(int, unsigned int, unsigned int);


unsigned int FUN_00298978(void)

{
/* irregular: 31 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [128];
  
  puVar2 = g_aocJob;
  puVar8 = temp_v4;
  if ((*(unsigned int *)(g_aocMain + 0x754) & 4) != 0 || (*(unsigned int *)(g_aocMain + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v1 = g_aocJob[2];
  if (temp_v1 == 3) {
    temp_v0 = 0;
    g_aocJob[3] = g_aocJob[3] + 1;
    temp_v1 = scrRunOpcodesStub(puVar2[0xc]);
    if (temp_v1 != 2) {
      temp_v1 = messageAnyWindowActive();
      if ((temp_v1 == 0) && (temp_v1 = padButtonIsPressed(2), temp_v1 != 0)) {
        if (*(char *)(puVar2 + 9) != '\0') {
          if (puVar2[7] != 0) {
            gameFlagIsSet();
          }
        }
        else {
          temp_v0 = 1;
        }
      }
    }
    else {
      temp_v0 = 1;
    }
    if (*(char *)(puVar2 + 0x1f) != '\0') {
      temp_v1 = 0;
      do {
        if (puVar2[temp_v1 * 2 + 0xf] != 0) {
          jobSetIntensity(puVar2[temp_v1 * 2 + 0xf],0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
      temp_v1 = 0;
      do {
        if ((puVar2[temp_v1 * 2 + 0xf] != 0) &&
           (temp_v2 = messageMainGetValue(), temp_v2 == puVar2[temp_v1 * 2 + 0x10])) {
          jobSetIntensity(puVar2[temp_v1 * 2 + 0xf],1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
    }
    if (!temp_v0) {
      return 0;
    }
    temp_v1 = 0;
    if (*(char *)(puVar2 + 9) != '\0') {
      temp_v1 = puVar2[7];
    }
    if (*(char *)(puVar2 + 9) != '\0' && temp_v1 != 0) {
      gameFlagSetValue(temp_v1,1);
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
    puVar2[2] = 1;
    messageSlotSet(0);
    FUN_00212204(0);
    FUN_00212204(1);
    soundChannelStopAll(0xf);
    gameFlagSetValue(0x522,0,1);
    return 0;
  }
  if (temp_v1 >= 3) {
    if (temp_v1 == 0x58) {
      temp_v1 = flagBrowserStep();
      if (temp_v1 == 0) {
        return 0;
      }
      puVar2[2] = 1;
      return 0;
    }
    if (temp_v1 != 99) {
      return 0;
    }
    jobStop(*g_aocJob,0);
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
    return 0;
  }
  if (temp_v1 == 0) {
    temp_v1 = g_aocJob[2];
    g_aocJob[3] = 0;
    *(unsigned char *)((int)puVar2 + 0x22) = 1;
    temp_v1 = temp_v1 + 1;
    puVar2[2] = temp_v1;
    return 0;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return 0;
    }
    if ((*(char *)(g_aocJob + 8) != '\0') && (temp_v1 = asdLoadFileGetUseRawPaths(), temp_v1 == 0)) {
      asdLoadFileSetUseRawPaths(1);
      *(unsigned char *)((int)puVar2 + 0x21) = 1;
    }
    textFormatBuffer(temp_v4,&LAB_00299154,puVar2[5],puVar2[5]);
    textFormatBuffer(temp_v5,&LAB_0029916c,puVar2[5],puVar2[5]);
    temp_v1 = aocPackageGrantsItem(g_aocSystem,puVar2[5],0);
    if (temp_v1 != 0) {
      temp_v1 = g_aocSystem;
      aocDrawText7(g_aocSystem,puVar2[5],0);
      puVar2[0xb] = temp_v1;
      temp_v1 = g_aocSystem;
      aocDrawText8(g_aocSystem,puVar2[5],0);
      puVar2[0xd] = temp_v1;
      if (puVar2[0xb] == 0 || temp_v1 == 0) {
        puVar2[2] = 1;
        puVar2[3] = 0;
        return 0;
      }
    }
    else {
      if (asdLoadFileExists((const char *)temp_v4) == 0) {
        puVar2[2] = 1;
        puVar2[3] = 0;
        return 0;
      }
      asdLoadFileSyncDefault();
      puVar2[0xb] = (unsigned int)puVar8;
      puVar7 = temp_v5;
      asdLoadFileSyncDefault();
      puVar2[0xd] = (unsigned int)puVar7;
    }
    campCommonBgAcquire();
    campButtonHelpAcquire();
    FUN_003b61ec();
    sysPlaySe(0x92);
    if (*(char *)((int)puVar2 + 0x21) != '\0') {
      asdLoadFileSetUseRawPaths(0);
      *(unsigned char *)((int)puVar2 + 0x21) = 0;
    }
    if (*(char *)((int)puVar2 + 0x23) != '\0') {
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
    }
    temp_v1 = puVar2[0xb];
    FUN_00275bc8(temp_v1,puVar2[0xd]);
    puVar2[0xc] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    temp_v1 = scrScriptProcessStartEntry(puVar2[0xc],puVar2[6]);
    if (temp_v1 != 0) {
      puVar2[2] = puVar2[2] + 1;
      puVar2[3] = 0;
      puVar2[7] = 0;
      scrScriptProcessGetEntry(puVar2[0xc],puVar2[6]);
      puVar2[7] = 0;
      return 0;
    }
    puVar2[2] = 1;
    puVar2[3] = 0;
    return 0;
  }
  temp_v1 = padButtonRepeat(5);
  if (temp_v1 != 0) {
    temp_v1 = puVar2[4] - 1;
    if (temp_v1 >= 6) {
      temp_v1 = 0;
    }
    else if (temp_v1 < 0) {
      temp_v1 = 5;
    }
    else {
      temp_v1 = puVar2[4] - 1;
    }
    puVar2[4] = temp_v1;
  }
  temp_v1 = padButtonRepeat(6);
  temp_v2 = puVar2[4];
  if (temp_v1 != 0) {
    if (temp_v2 + 1 >= 6) {
      temp_v2 = 0;
    }
    else if (temp_v2 + 1 < 0) {
      temp_v2 = 5;
    }
    else {
      temp_v2 = temp_v2 + 1;
    }
    puVar2[4] = temp_v2;
  }
  temp_v1 = 999;
  switch(temp_v2) {
  case 0:
    temp_v2 = padButtonRepeat(4);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] - 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[5] - 1;
        }
      }
      puVar2[5] = temp_v3;
    }
    temp_v2 = padButtonRepeat(3);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] + 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[5] + 1;
        }
      }
      puVar2[5] = temp_v3;
    }
    temp_v2 = padButtonRepeat(8);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] - 10;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[5] - 10;
        }
      }
      puVar2[5] = temp_v3;
    }
    temp_v2 = padButtonRepeat(7);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] + 10;
      if (temp_v2 >= 1000) {
        temp_v1 = 0;
      }
      else if (-1 < temp_v2) {
        temp_v1 = temp_v2;
      }
      puVar2[5] = temp_v1;
    }
    temp_v1 = padButtonIsPressed(0);
    if (temp_v1 != 0) {
      puVar2[2] = 2;
    }
    break;
  case 1:
    temp_v2 = padButtonRepeat(4);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] - 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[6] - 1;
        }
      }
      puVar2[6] = temp_v3;
    }
    temp_v2 = padButtonRepeat(3);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] + 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[6] + 1;
        }
      }
      puVar2[6] = temp_v3;
    }
    temp_v2 = padButtonRepeat(8);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] - 10;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[6] - 10;
        }
      }
      puVar2[6] = temp_v3;
    }
    temp_v2 = padButtonRepeat(7);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] + 10;
      if (temp_v2 >= 1000) {
        temp_v1 = 0;
      }
      else if (-1 < temp_v2) {
        temp_v1 = temp_v2;
      }
      puVar2[6] = temp_v1;
    }
    temp_v1 = padButtonIsPressed(0);
    if (temp_v1 != 0) {
      puVar2[2] = 2;
    }
    break;
  case 2:
    temp_v1 = padButtonIsPressed(0);
    if (temp_v1 != 0) {
      puVar2[2] = 0x58;
    }
    break;
  case 3:
    temp_v1 = jyoucyuGetTableEntry(2);
    if ((temp_v1 == 0) &&
       ((temp_v1 = padButtonRepeat(4), temp_v1 != 0 || (temp_v1 = padButtonRepeat(3), temp_v1 != 0)))) {
      *(unsigned char *)(puVar2 + 8) = *(char *)(puVar2 + 8) != '\x01';
    }
    break;
  case 4:
    temp_v1 = padButtonRepeat(4);
    if ((temp_v1 != 0) || (temp_v1 = padButtonRepeat(3), temp_v1 != 0)) {
      *(unsigned char *)((int)puVar2 + 0x23) = *(char *)((int)puVar2 + 0x23) != '\x01';
    }
    break;
  case 5:
    temp_v1 = padButtonRepeat(4);
    if ((temp_v1 != 0) || (temp_v1 = padButtonRepeat(3), temp_v1 != 0)) {
      *(unsigned char *)(puVar2 + 9) = *(char *)(puVar2 + 9) != '\x01';
    }
  }
  temp_v1 = padButtonIsPressed(2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
    puVar2[2] = temp_v1;
  }
  return 0;
}

} /* extern "C" */
