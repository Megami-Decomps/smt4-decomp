/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a76fc` (_code @ 0x1a76fc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b350c. */


void FUN_001a76fc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_2;
    if (*(char *)(param_1 + temp_v1 + 0x164) != '\0') {
      temp_v0 = param_1 + temp_v1 * 0x2c + 4;
      FUN_001b350c(temp_v0,param_2);
    }
    temp_v1 = temp_v1 + 1;
    param_2 = temp_v0;
  } while (temp_v1 < 8);
  return;
}
