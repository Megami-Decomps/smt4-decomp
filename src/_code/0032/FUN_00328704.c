/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328704` (_code @ 0x328704, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */


unsigned int FUN_00328704(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    FUN_0028df54(*(unsigned short *)(temp_v0 + *(int *)(temp_v0 + 0xcf78) * 0x620 + 0x3c5c));
  }
  return 1;
}
