/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169548` (_code @ 0x169548, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a90e0(int);

extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_001a90e0. */


void FUN_00169548(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f0c8;
  *(char *)(DAT_0057f0c8 + 0x5e3) = (char)param_1;
  if (param_1 != 0) {
    *(unsigned int *)(temp_v0 + 0x5d4) = 0;
    *(unsigned short *)(temp_v0 + 0x5d8) = 0;
    FUN_001a90e0(temp_v0 + 0x5da);
    return;
  }
  return;
}

} /* extern "C" */
