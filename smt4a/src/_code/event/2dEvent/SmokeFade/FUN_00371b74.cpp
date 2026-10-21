/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371b74` (_code @ 0x371b74, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdTMTexTableFreeEntry(unsigned int);

extern unsigned int *g_smokeFadeState; /* 0x57f47c */
extern unsigned int g_smokeFadeImages; /* 0x57f480 */
extern unsigned int DAT_0057f484; /* 0x57f484 */

/* Supplied declaration required: jobStop. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
extern int textureGetIndexedResource(unsigned int);


void FUN_00371b74(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = g_smokeFadeState;
  asdMemFree(g_smokeFadeState[2]);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x57f488) != '\0') {
      temp_v0 = asdTMTexTableNodeIsLoaded((&g_smokeFadeImages)[temp_v1 * 3],(&DAT_0057f484)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableReleaseNode((&g_smokeFadeImages)[temp_v1 * 3],(&DAT_0057f484)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x57f488) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x57f489) != '\0') {
      temp_v0 = textureGetIndexedResource((&g_smokeFadeImages)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableFreeEntry((&g_smokeFadeImages)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x57f489) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  g_smokeFadeState = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
