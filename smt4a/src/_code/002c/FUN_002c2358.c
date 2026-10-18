/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2358` (_code @ 0x2c2358, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f65c; /* 0x57f65c */

/* Supplied declaration required: FUN_001800b8. */


void FUN_002c2358(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = DAT_0057f65c;
  piVar2 = (int *)(DAT_0057f65c + 0x1490);
  *(unsigned char *)(DAT_0057f65c + 0xfa4) = 0;
  if (*piVar2 != 0) {
    FUN_001800b8();
    *piVar2 = 0;
  }
  piVar2 = (int *)(temp_v0 + 0x149c);
  if (*piVar2 != 0) {
    FUN_001800b8();
    *piVar2 = 0;
  }
  piVar2 = (int *)(temp_v0 + 0x1498);
  if (*piVar2 != 0) {
    FUN_001800b8();
    *piVar2 = 0;
  }
  return;
}
