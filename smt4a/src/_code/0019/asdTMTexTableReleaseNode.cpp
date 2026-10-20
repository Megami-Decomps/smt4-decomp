/* NON_MATCHING: romwright 0.5.0 decompilation of `asdTMTexTableReleaseNode` (_code @ 0x19a7f4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureRelease(void);
int asdMemFree(void);

/* Supplied declaration required: asdTextureRelease. */
extern int asdTMTexTableGetNode(void);
/* Supplied declaration required: asdMemFree. */


void asdTMTexTableReleaseNode(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = asdTMTexTableGetNode();
  if (temp_v0 != 0) {
    if (*(int *)(temp_v0 + 0xc) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 8) != 0) {
      asdTextureRelease();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  return;
}

} /* extern "C" */
