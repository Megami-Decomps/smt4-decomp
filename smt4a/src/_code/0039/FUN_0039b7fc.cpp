/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b7fc` (_code @ 0x39b7fc, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdTMTexTableFreeEntry(int);

extern unsigned int *DAT_0057f3b8; /* 0x57f3b8 */
extern int DAT_0057f3c4; /* 0x57f3c4 */
extern unsigned char DAT_0057f3e8; /* 0x57f3e8 */

/* Supplied declaration required: jobStop. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
extern int textureGetIndexedResource(unsigned int);


void FUN_0039b7fc(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = DAT_0057f3b8;
  temp_v0 = DAT_0057f3b8[6];
  if (temp_v0 < 6) {
    temp_v2 = temp_v0 * 0xc;
    if (*(char *)(temp_v2 + 0x57f3f0) != '\0') {
      temp_v1 = asdTMTexTableNodeIsLoaded(*(unsigned int *)(&DAT_0057f3e8 + temp_v0 * 0xc),
                           *(unsigned int *)(temp_v2 + 0x57f3ec));
      if (temp_v1 != 0) {
        asdTMTexTableReleaseNode(*(unsigned int *)(&DAT_0057f3e8 + temp_v0 * 0xc),*(unsigned int *)(temp_v2 + 0x57f3ec))
        ;
      }
      *(unsigned char *)(temp_v2 + 0x57f3f0) = 0;
    }
    if (DAT_0057f3c4 >= 1) {
      DAT_0057f3c4 = DAT_0057f3c4 - 1;
    }
    else {
      temp_v2 = textureGetIndexedResource(0x35);
      if (temp_v2 != 0) {
        asdTMTexTableFreeEntry(0x35);
        DAT_0057f3c4 = 0;
      }
    }
  }
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0057f3b8 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
