/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381b24` (_code @ 0x381b24, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00290a4c. */


unsigned int FUN_00381b24(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (((*(int *)(param_1 + 4) == 0) || (temp_v0 = FUN_00290a4c(), temp_v0 < *(unsigned int *)(param_1 + 4))) ||
     (temp_v1 = FUN_00290a4c(), (unsigned int)(temp_v1 - *(int *)(param_1 + 4)) >= 901)) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 0;
  }
  return temp_v2;
}
