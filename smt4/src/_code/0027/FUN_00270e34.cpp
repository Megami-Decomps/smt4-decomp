/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270e34` (_code @ 0x270e34, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002897f0(unsigned int, int);
int aocBufferQueueDisplay(int, unsigned int, int);
int FUN_00289de4(int, unsigned int, int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_00297060(int, int);
int textFormatBuffer(...);
int FUN_002bff50(void);
int asdMemFree(...);
int asdLoadFileSyncDefault(...);

extern int g_aocSystem; /* 0x433158 */
extern int g_mapMain; /* 0x447e28 */

/* Supplied declaration required: FUN_002897f0. */
/* Supplied declaration required: aocBufferQueueDisplay. */
/* Supplied declaration required: FUN_00289de4. */
extern int aocPackageGrantsItem(int, unsigned int, unsigned int);
extern unsigned int tableGroupFindEntryIndex(unsigned int, int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdLoadFileSyncDefault. */


unsigned int FUN_00270e34(void)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v0 = g_mapMain;
  FUN_002bff50();
  textFormatBuffer(temp_v4,"event/e%03d/e%03d.bf",*(unsigned int *)(temp_v0 + 100),
               *(unsigned int *)(temp_v0 + 100));
  textFormatBuffer(temp_v5,"event/e%03d/e%03d.mbm",*(unsigned int *)(temp_v0 + 100),
               *(unsigned int *)(temp_v0 + 100));
  temp_v1 = aocPackageGrantsItem(g_aocSystem,*(unsigned int *)(temp_v0 + 100),0);
  if (temp_v1 != 0) {
    temp_v1 = g_aocSystem;
    FUN_00289de4(g_aocSystem,*(unsigned int *)(temp_v0 + 100),0);
    *(int *)(temp_v0 + 0x8c) = temp_v1;
    temp_v1 = g_aocSystem;
    aocBufferQueueDisplay(g_aocSystem,*(unsigned int *)(temp_v0 + 100),0);
    *(int *)(temp_v0 + 0x90) = temp_v1;
    if (*(int *)(temp_v0 + 0x8c) != 0) {
      if (temp_v1 != 0) goto LAB_00270f10;
      asdMemFree(*(int *)(temp_v0 + 0x8c));
      *(unsigned int *)(temp_v0 + 0x8c) = 0;
    }
    if (*(int *)(temp_v0 + 0x90) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x90) = 0;
    }
    return 0;
  }
  temp_v3 = asdLoadFileSyncDefault(temp_v4);
  *(unsigned int *)(temp_v0 + 0x8c) = temp_v3;
  temp_v1 = asdLoadFileSyncDefault(temp_v5);
  *(int *)(temp_v0 + 0x90) = temp_v1;
LAB_00270f10:
  temp_v2 = *(int *)(temp_v0 + 0x8c);
  FUN_00297060(temp_v2,temp_v1);
  *(int *)(temp_v0 + 0x94) = temp_v2;
  *(unsigned int *)(temp_v2 + 0x108) = 2;
  temp_v3 = *(unsigned int *)(temp_v0 + 100);
  FUN_002897f0(temp_v3,temp_v0 + 0x68);
  *(unsigned int *)(temp_v0 + 0x98) = temp_v3;
  temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(temp_v0 + 0x8c),temp_v0 + 0x68);
  scrScriptProcessStartEntry(*(unsigned int *)(temp_v0 + 0x94),temp_v3);
  return 1;
}

} /* extern "C" */
