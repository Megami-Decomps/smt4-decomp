/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100974` (_code @ 0x100974, 0x16 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001005f0. */


unsigned int FUN_00100974(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_001005f0();
  }
  return 1;
}
