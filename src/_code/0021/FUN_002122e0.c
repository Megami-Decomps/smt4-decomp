/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002122e0` (_code @ 0x2122e0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_002b90c0. */


void FUN_002122e0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = DAT_0043e18c;
  if ((DAT_0043e18c != 0) && (*(char *)(DAT_0043e18c + 0x83) == '\x02')) {
    puVar1 = (unsigned int *)(DAT_0043e18c + 0xc);
    *(unsigned char *)(DAT_0043e18c + 0x83) = 0;
    if ((*puVar1 & 0x20) == 0) {
      FUN_002b90c0(*(unsigned int *)(temp_v0 + 4));
      return;
    }
  }
  return;
}
