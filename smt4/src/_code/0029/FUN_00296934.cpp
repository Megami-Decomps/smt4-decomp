/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296934` (_code @ 0x296934, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiFadeSetVisible(int);
int fileSlotFree(int);
int scrScriptProcessDestroy(unsigned int);
int asdTMTexTableFreeEntry(int);
int asdTMTexTableReleaseNode(int, int);
int ifTouchRegionRemove(void);
int asdMemFree(...);
int jobStop(unsigned int, int);

extern unsigned int *g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: uiFadeSetVisible. */
/* Supplied declaration required: fileSlotFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_00296934(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar4;
  char *pb;
  int temp_v0;
  int cnt;
  
  puVar1 = g_uiQuest;
  puVar4 = puVar1;
  if (puVar4 != (unsigned int *)0x0) {
    pb = (char *)puVar4 + 0x900;
    temp_v0 = 0;
    cnt = *(unsigned short *)(pb + 0xf8);
    if (cnt > 0) {
      do {
        ifTouchRegionRemove();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(pb + 0xf8));
    }
    scrScriptProcessDestroy(puVar4[0x16d]);
    asdMemFree(puVar4[0x16c]);
    asdMemFree(puVar4[0x16b]);
    if (puVar4[0x16e] != 0) {
      scrScriptProcessDestroy(puVar4[0x170]);
      asdMemFree(puVar4[0x16e]);
      asdMemFree(puVar4[0x16f]);
    }
    asdTMTexTableReleaseNode(0x29,0);
    asdTMTexTableFreeEntry(0x29);
    fileSlotFree(0x34);
    uiFadeSetVisible(1);
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    g_uiQuest = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
