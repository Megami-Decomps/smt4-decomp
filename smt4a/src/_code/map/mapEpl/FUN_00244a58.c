/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244a58` (_code @ 0x244a58, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580c88; /* 0x580c88 */

/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00244a58(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00580c88 + temp_v1 * 0x18;
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_001836b0();
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    if (*(int *)(temp_v0 + 0x18) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (DAT_00580c88 != 0) {
    FUN_0019a5a0();
    DAT_00580c88 = 0;
  }
  return;
}
