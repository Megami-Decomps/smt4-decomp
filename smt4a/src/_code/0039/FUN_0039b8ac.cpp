/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b8ac` (_code @ 0x39b8ac, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdTMTexTableFreeEntry(int);

extern unsigned int *DAT_0057f3bc; /* 0x57f3bc */
extern int DAT_0057f3c4; /* 0x57f3c4 */
extern unsigned int DAT_0057f430; /* 0x57f430 */
extern unsigned int DAT_0057f434; /* 0x57f434 */
extern signed char DAT_0057f438; /* 0x57f438 */

/* Supplied declaration required: jobStop. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
extern int textureGetIndexedResource(unsigned int);


void FUN_0039b8ac(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f3bc;
  if (DAT_0057f438 != '\0') {
    temp_v0 = asdTMTexTableNodeIsLoaded(DAT_0057f430,DAT_0057f434);
    if (temp_v0 != 0) {
      asdTMTexTableReleaseNode(DAT_0057f430,DAT_0057f434);
    }
    DAT_0057f438 = '\0';
  }
  if (DAT_0057f3c4 >= 1) {
    DAT_0057f3c4 = DAT_0057f3c4 - 1;
  }
  else {
    temp_v0 = textureGetIndexedResource(0x35);
    if (temp_v0 != 0) {
      asdTMTexTableFreeEntry(0x35);
      DAT_0057f3c4 = 0;
    }
  }
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0057f3bc = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
