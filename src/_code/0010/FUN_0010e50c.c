/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e50c` (_code @ 0x10e50c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bcbb0. */


unsigned int FUN_0010e50c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = *(int *)(param_1 + 4);
  do {
    if (*(int *)(temp_v1 + temp_v0 * 4) != 0) {
      FUN_002bcbb0();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  FUN_002bcbb0(*(unsigned int *)(temp_v1 + 0x80));
  FUN_002bcbb0(*(unsigned int *)(temp_v1 + 0x84));
  return 0;
}
