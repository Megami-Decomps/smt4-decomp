/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e8390` (_code @ 0x1e8390, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */
extern int DAT_0049f91c; /* 0x49f91c */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_001f9c3c. */
/* Supplied declaration required: FUN_001fb520. */
/* Supplied declaration required: FUN_002fb0d8. */


unsigned int FUN_001e8390(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = DAT_00447a78;
  if (DAT_0049f93e == '\0') {
    FUN_001fb520();
    if (DAT_0049f91c < 100) {
      FUN_001f9c3c();
    }
    if (*(char *)(temp_v0 + 0xccd8) != '\0') {
      piVar2 = (int *)(temp_v0 + 0xccdc);
      FUN_002fb0d8(*piVar2);
      *piVar2 = *piVar2 + 1;
    }
  }
  return 0;
}
