/* NON_MATCHING: romwright 0.5.0 decompilation of `eventEffectFreeTextures` (_code @ 0x31c0e4, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableFreeEntry(unsigned int);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern unsigned int *g_eventEffect; /* 0x43dee8 */
extern unsigned int DAT_0043df00; /* 0x43df00 */
extern unsigned int DAT_0043df04; /* 0x43df04 */

extern int textureGetIndexedResource(unsigned int);
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void eventEffectFreeTextures(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = g_eventEffect;
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df08) != '\0') {
      temp_v0 = asdTMTexTableNodeIsLoaded((&DAT_0043df00)[temp_v1 * 3],(&DAT_0043df04)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableReleaseNode((&DAT_0043df00)[temp_v1 * 3],(&DAT_0043df04)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df08) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df09) != '\0') {
      temp_v0 = textureGetIndexedResource((&DAT_0043df00)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableFreeEntry((&DAT_0043df00)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df09) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  g_eventEffect = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
