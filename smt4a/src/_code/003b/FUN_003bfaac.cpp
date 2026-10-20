/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bfaac` (_code @ 0x3bfaac, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_0039c0e4(void);
int FUN_003f5268(int, int, int);

extern signed char DAT_0057f255; /* 0x57f255 */
extern int DAT_0057f258; /* 0x57f258 */

/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_0039c0e4. */
/* Supplied declaration required: FUN_003f5268. */


unsigned char FUN_003bfaac(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = DAT_0057f258;
  if (DAT_0057f255 == '\0') {
    DAT_0057f255 = '\x01';
    uiSpriteSetKeyframe(DAT_0057f258 + 0x16c,2,0);
    uiSpriteSetImageKeyframe(temp_v0 + 0x16c,1,0);
    *(unsigned char *)(temp_v0 + 0x5d4) = 1;
    FUN_003f5268(temp_v0,10,0);
  }
  temp_v1 = *(char *)(DAT_0057f258 + 0x5d4) == '\0';
  if (temp_v1) {
    DAT_0057f255 = '\0';
    FUN_0039c0e4();
  }
  return temp_v1;
}

} /* extern "C" */
