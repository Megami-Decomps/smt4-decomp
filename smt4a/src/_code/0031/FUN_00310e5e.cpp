/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310e5e` (_code @ 0x310e5e, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002ea43c(void);
int FUN_002ec738(void);

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ec738. */


void FUN_00310e5e(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002ea43c();
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002ec738();
  }
  return;
}

} /* extern "C" */
