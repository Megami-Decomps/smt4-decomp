/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec864` (_code @ 0x2ec864, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002ec738. */


void FUN_002ec864(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x3c));
  if (temp_v0 != 0) {
    FUN_002ec728(*(unsigned int *)(param_1 + 0x6c),param_2);
    FUN_002ec738(temp_v0);
  }
  FUN_002ea43c(param_1);
  return;
}
