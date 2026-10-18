/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002449dc` (_code @ 0x2449dc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580c88; /* 0x580c88 */

/* Supplied declaration required: FUN_0019c0e0. */


void FUN_002449dc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_00580c88 + temp_v0 * 0x18 + 0x1c) != 0) {
      FUN_0019c0e0();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}
