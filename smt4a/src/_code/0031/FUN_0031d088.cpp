/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d088` (_code @ 0x31d088, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int ifTouchRegionRemove(void);
int asdMemFree(void);
int asdTMTexTableReleaseNode(int, int);
int asdMemFreeSlot(unsigned int);
int asdTMTexTableFreeEntry(int);
int asdOperatorDelete(void);

extern unsigned char g_callbackController; /* 0x57f23c */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdOperatorDelete. */


void FUN_0031d088(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&g_callbackController + 0x4));
  temp_v0 = 0;
  if (*(short *)((*(unsigned int * *)((unsigned char *)&g_callbackController + 0x4)) + 0x86) != 0) {
    do {
      ifTouchRegionRemove();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x86));
  }
  temp_v0 = 0;
  do {
    asdMemFreeSlot(puVar1[temp_v0 + 0x22]);
    temp_v1 = temp_v0 + 1;
    puVar1[temp_v0 + 0x22] = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 3);
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
    temp_v1 = asdTMTexTableNodeIsLoaded(0x33,temp_v0);
    if (temp_v1 != 0) {
      asdTMTexTableReleaseNode(0x33,temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x13);
  asdTMTexTableFreeEntry(0x33);
  jobStop(*puVar1,0);
  if ((*(unsigned int * *)((unsigned char *)&g_callbackController + 0x4)) != (unsigned int *)0x0) {
    asdOperatorDelete();
    (*(unsigned int * *)((unsigned char *)&g_callbackController + 0x4)) = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
