/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034aae4` (_code @ 0x34aae4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int ifTouchRegionRemove(void);
int asdMemFree(...);
int asdTMTexTableReleaseNode(int, int);
int scrScriptProcessDestroy(unsigned int);
int dataTableFree(int);
int uiFadeSetVisible(int);
int asdTMTexTableFreeEntry(int);

extern unsigned int *g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: uiFadeSetVisible. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */


void FUN_0034aae4(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = g_uiQuest;
  if (puVar1 != (unsigned int *)0x0) {
    for (temp_v0 = 0; temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x351); temp_v0 = temp_v0 + 1) {
      ifTouchRegionRemove();
    }
    scrScriptProcessDestroy(puVar1[0x23f]);
    asdMemFree(puVar1[0x23e]);
    asdMemFree(puVar1[0x23d]);
    if (puVar1[0x240] != 0) {
      scrScriptProcessDestroy(puVar1[0x242]);
      asdMemFree(puVar1[0x240]);
      asdMemFree(puVar1[0x241]);
    }
    asdTMTexTableReleaseNode(0x1e,0);
    asdTMTexTableFreeEntry(0x1e);
    dataTableFree(0x34);
    uiFadeSetVisible(1);
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    g_uiQuest = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
