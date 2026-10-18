/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f1e8` (_code @ 0x10f1e8, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002fa18c. */


void FUN_0010f1e8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002fa18c();
  }
  FUN_002ea43c(param_1);
  return;
}
