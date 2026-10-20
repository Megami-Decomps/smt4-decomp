/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416610` (_code @ 0x416610, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetImageKeyframe(int, int, int);

/* Supplied declaration required: uiSpriteSetImageKeyframe. */


void FUN_00416610(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0xb0;
    if (*(char *)(temp_v0 + 0xa0) != '\0') {
      *(unsigned int *)(temp_v0 + 4) = 0;
      *(unsigned int *)(temp_v0 + 0xa4) = 3;
      uiSpriteSetImageKeyframe(temp_v0 + 0x14,5,0);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xc);
  return;
}

} /* extern "C" */
