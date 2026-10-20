/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e151c` (_code @ 0x2e151c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9178(void);
int asdTextureSetImage(void);

/* Supplied declaration required: FUN_002b9178. */
extern int asdTMTexTableCallFileB(void);
/* Supplied declaration required: asdTextureSetImage. */


int FUN_002e151c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = asdTMTexTableCallFileB();
  if (temp_v0 != 0) {
    FUN_002b9178();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x20000;
      *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 0x20;
      if (*(int *)(temp_v0 + 8) != 0) {
        asdTextureSetImage();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
