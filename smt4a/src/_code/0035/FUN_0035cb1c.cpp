/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cb1c` (_code @ 0x35cb1c, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int ifTouchRegionRemove(void);
int asdMemFree(void);
int asdTMTexTableReleaseNode(int, int);
int dataTableFree(int);
int asdMemFreeSlot(unsigned int);
int asdTMTexTableFreeEntry(int);
int asdOperatorDelete(void);
int FUN_00348d7c(unsigned int);
int loadSlotRequestAsync(int, int);

extern signed char g_callbackController; /* 0x57f23c */
extern unsigned int *DAT_0057f240; /* 0x57f240 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: dataTableFree. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: asdMemFreeSlot. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_00348d7c. */
extern int loadSlotIsLoaded(unsigned int);
/* Supplied declaration required: loadSlotRequestAsync. */


unsigned int FUN_0035cb1c(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 == 0) {
    temp_v1 = scrGetArg(0);
    temp_v0 = loadSlotIsLoaded(0x46);
    if (temp_v0 == 0) {
      loadSlotRequestAsync(0x46,0);
      g_callbackController = '\x01';
    }
    FUN_00348d7c(temp_v1);
  }
  if (!(*(char *)(DAT_0057f240 + 1) == '\0' || *(char *)(DAT_0057f240 + 1) == '\n')) {
    temp_v1 = 0;
  }
  else {
    if (g_callbackController != '\0') {
      dataTableFree(0x46);
      g_callbackController = '\0';
    }
    puVar1 = DAT_0057f240;
    temp_v0 = 0;
    if (*(short *)(DAT_0057f240 + 0x86) != 0) {
      do {
        ifTouchRegionRemove();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x86));
    }
    temp_v0 = 0;
    do {
      asdMemFreeSlot(puVar1[temp_v0 + 0x22]);
      temp_v2 = temp_v0 + 1;
      puVar1[temp_v0 + 0x22] = 0;
      temp_v0 = temp_v2;
    } while (temp_v2 < 3);
    if (puVar1[2] != 0) {
      asdMemFree();
      puVar1[2] = 0;
    }
    if (puVar1[3] != 0) {
      asdMemFree();
      puVar1[3] = 0;
    }
    temp_v0 = 0;
    do {
      temp_v2 = asdTMTexTableNodeIsLoaded(0x33,temp_v0);
      if (temp_v2 != 0) {
        asdTMTexTableReleaseNode(0x33,temp_v0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x13);
    asdTMTexTableFreeEntry(0x33);
    jobStop(*puVar1,0);
    if (DAT_0057f240 != (unsigned int *)0x0) {
      asdOperatorDelete();
      DAT_0057f240 = (unsigned int *)0x0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
