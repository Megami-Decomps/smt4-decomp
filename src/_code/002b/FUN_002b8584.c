/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8584` (_code @ 0x2b8584, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002ae2b4. */


void FUN_002b8584(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043da2c;
  *(char *)(DAT_0043da2c + 0x4c7) = (char)param_1;
  if (param_1 != 0) {
    *(unsigned int *)(temp_v0 + 0x4b8) = 0;
    *(unsigned short *)(temp_v0 + 0x4bc) = 0;
    FUN_002ae2b4(temp_v0 + 0x4be);
    return;
  }
  return;
}
