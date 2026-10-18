/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b024` (_code @ 0x38b024, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0058803c; /* 0x58803c */

/* Supplied declaration required: FUN_0013a618. */
extern int FUN_00164a9c(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: FUN_002e3494. */


void FUN_0038b024(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_001ad6d8();
  temp_v0 = FUN_00164a9c(param_1);
  if (*(char *)(temp_v0 + 0x79) != '\0') {
    *(unsigned char *)(temp_v0 + 0x79) = 0;
    FUN_0013a618(1);
  }
  if (*(int *)(temp_v0 + 100) != 0) {
    FUN_002e3494();
    *(unsigned int *)(temp_v0 + 100) = 0;
  }
  FUN_0019a5a0(temp_v0);
  DAT_0058803c = 0;
  return;
}
