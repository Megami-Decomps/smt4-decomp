/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b01e8` (_code @ 0x3b01e8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int ifTouchRegionRemove(void);
int asdMemFree(void);
int asdTMTexTableReleaseNode(int, int);
int asdMemFreeSlot(unsigned int);
int asdTMTexTableFreeEntry(...);
int asdOperatorDelete(void);
int loadedRecordTableClear(unsigned int);

extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned int *DAT_0057f244; /* 0x57f244 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: loadedRecordTableClear. */


void FUN_003b01e8(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  puVar1 = DAT_0057f244;
  temp_v1 = 0;
  if (*(short *)(DAT_0057f244 + 0x4a) != 0) {
    do {
      ifTouchRegionRemove();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x4a));
  }
  temp_v1 = 0;
  do {
    asdMemFreeSlot(puVar1[temp_v1 + 0x19b]);
    temp_v2 = temp_v1 + 1;
    puVar1[temp_v1 + 0x19b] = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 6);
  temp_v3 = 0;
  do {
    if (*(char *)((int)puVar1 + temp_v3 + 0x18) != '\0') {
      if ((temp_v3 & 0xff) == 0) {
        temp_v0 = 1;
      }
      else if ((temp_v3 & 0xff) == 1) {
        temp_v0 = 0xf;
      }
      else {
        temp_v0 = 0xffffffff;
      }
      asdTMTexTableFreeEntry(temp_v0);
      *(unsigned char *)((int)puVar1 + temp_v3 + 0x18) = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 2);
  temp_v1 = 0;
  do {
    asdTMTexTableReleaseNode(0x32,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  asdTMTexTableFreeEntry(0x32);
  if (puVar1[2] != 0) {
    asdMemFree();
    puVar1[2] = 0;
  }
  if (puVar1[3] != 0) {
    asdMemFree();
    puVar1[3] = 0;
  }
  loadedRecordTableClear(g_aocSystem);
  jobStop(*puVar1,0);
  if (DAT_0057f244 != (unsigned int *)0x0) {
    asdOperatorDelete();
    DAT_0057f244 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
