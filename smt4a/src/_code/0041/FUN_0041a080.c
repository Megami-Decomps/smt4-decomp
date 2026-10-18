/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041a080` (_code @ 0x41a080, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0041a080(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int unaff_r4;
  int temp_v0;
  
  if (*param_1 != 0) {
    unaff_r4 = 0;
  }
  if (0 < *param_1) {
    do {
      temp_v0 = *(int *)(param_1[1] + unaff_r4 * 4);
      if (temp_v0 != 0) {
        if (*(int *)(temp_v0 + 0xc) != 0) {
          FUN_001836b0();
          *(unsigned int *)(temp_v0 + 0xc) = 0;
        }
        FUN_002e3328(temp_v0);
        *(unsigned int *)(param_1[1] + unaff_r4 * 4) = 0;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < *param_1);
  }
  if (param_1[1] != 0) {
    FUN_0019a5a0();
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}
