/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6134` (_code @ 0x2e6134, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: FUN_00166f80. */


void FUN_002e6134(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = DAT_0057f58c;
  if ((DAT_0057f58c != 0) && (*(char *)(DAT_0057f58c + 0x95) == '\x02')) {
    puVar1 = (unsigned int *)(DAT_0057f58c + 0xc);
    *(unsigned char *)(DAT_0057f58c + 0x95) = 0;
    if ((*puVar1 & 0x20) == 0) {
      FUN_00166f80(*(unsigned int *)(temp_v0 + 4));
      return;
    }
  }
  return;
}
