/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001005dc` (_code @ 0x1005dc, 0x12 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c68bc. */


void FUN_001005dc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_002c68bc(param_1,param_2,*(unsigned int *)(param_1 - 8),*(unsigned int *)(param_1 - 4));
  }
  return;
}
