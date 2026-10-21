/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1e58` (_code @ 0x2e1e58, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdEffectTextureCreate(void);
int asdTextureRelease(void);

extern int DAT_0044ea9c; /* 0x44ea9c */
extern int DAT_0044eab0; /* 0x44eab0 */

extern int resourceResolveDataPointer(int);
extern int textureCreateFromImage(void);
/* Supplied declaration required: asdEffectTextureCreate. */
/* Supplied declaration required: asdTextureRelease. */


void FUN_002e1e58(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (DAT_0044eab0 != 0) {
    asdTextureRelease();
    DAT_0044eab0 = 0;
  }
  temp_v0 = DAT_0044ea9c;
  if ((DAT_0044ea9c != 0) && (temp_v1 = resourceResolveDataPointer(DAT_0044ea9c), temp_v1 != 0)) {
    if (*(short *)(temp_v0 + 0x1c) != 1) {
      if (*(short *)(temp_v0 + 0x1c) != 9) {
        return;
      }
      asdEffectTextureCreate();
    }
    else {
      temp_v1 = textureCreateFromImage();
    }
    if (temp_v1 != 0) {
      DAT_0044eab0 = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
