/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201690` (_code @ 0x201690, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_002b8d24. */


void FUN_00201690(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e18c;
  if (*(char *)(DAT_0043e18c + 0x35) != '\0') {
    FUN_002b8d24(DAT_0043e18c,*(unsigned char *)(DAT_0043e18c + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  return;
}
