/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021966c` (_code @ 0x21966c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002829d4. */
/* Supplied declaration required: FUN_002ae584. */


void FUN_0021966c(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = *param_1;
  FUN_002ae584();
  temp_v1 = *param_2;
  FUN_002ae584();
  temp_v2 = *param_1;
  FUN_002829d4();
  temp_v3 = *param_2;
  FUN_002829d4();
  if (temp_v2 != 2) {
    if (temp_v3 == 2) {
      return;
    }
  }
  else if (temp_v3 != 2) {
    return;
  }
  if (*(short *)(temp_v1 + 0x26) == *(short *)(temp_v0 + 0x26)) {
    FUN_002ae584();
    FUN_002ae584();
  }
  return;
}
