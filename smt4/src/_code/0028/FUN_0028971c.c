/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028971c` (_code @ 0x28971c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_002b89e4. */


void FUN_0028971c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e18c;
  if (*(char *)(DAT_0043e18c + 8) != '\0' && DAT_0043e18c != 0) {
    FUN_002b89e4(DAT_0043e18c,*(unsigned char *)(DAT_0043e18c + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  return;
}
