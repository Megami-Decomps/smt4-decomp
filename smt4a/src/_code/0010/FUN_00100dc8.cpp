/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100dc8` (_code @ 0x100dc8, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e4064(void);

extern int DAT_005c4c00; /* 0x5c4c00 */

/* Supplied declaration required: FUN_002e4064. */


int * FUN_00100dc8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_005c4c00 == 0) {
    FUN_002e4064();
  }
  temp_v0 = DAT_005c4c00;
  *param_1 = DAT_005c4c00;
  *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
  return param_1;
}

} /* extern "C" */
