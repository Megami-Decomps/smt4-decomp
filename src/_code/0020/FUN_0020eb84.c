/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eb84` (_code @ 0x20eb84, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027ebe4. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c58f0. */


void FUN_0020eb84(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    FUN_002c58f0();
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_0027ebe4();
      FUN_002b2520();
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
  }
  return;
}
