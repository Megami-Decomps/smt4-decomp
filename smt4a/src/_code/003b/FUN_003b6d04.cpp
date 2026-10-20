/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6d04` (_code @ 0x3b6d04, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdTMTexTableFreeEntry(unsigned int);

extern unsigned int *g_eventEffect; /* 0x57f3b4 */
extern unsigned int DAT_0057f3d0; /* 0x57f3d0 */
extern unsigned int DAT_0057f3d4; /* 0x57f3d4 */

/* Supplied declaration required: jobStop. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
extern int FUN_00341940(unsigned int);


void FUN_003b6d04(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = g_eventEffect;
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x57f3d8) != '\0') {
      temp_v0 = asdTMTexTableNodeIsLoaded((&DAT_0057f3d0)[temp_v1 * 3],(&DAT_0057f3d4)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableReleaseNode((&DAT_0057f3d0)[temp_v1 * 3],(&DAT_0057f3d4)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x57f3d8) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x57f3d9) != '\0') {
      temp_v0 = FUN_00341940((&DAT_0057f3d0)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableFreeEntry((&DAT_0057f3d0)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x57f3d9) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  g_eventEffect = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
