/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fbc0` (_code @ 0x22fbc0, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_0022fbc0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  FUN_002a0f68(1);
  FUN_0029e63c(0xc,0);
  if (*(int *)(param_1 + 0x860) != 8) {
    FUN_0029e5c8(0x1c);
    FUN_0029e5c8(7);
    FUN_0029e5c8(3);
    FUN_0029e5c8(0xc);
    FUN_0029e5c8(0x10);
    if (*(unsigned int *)(param_1 + 0x860) < 3) {
      FUN_0029e5c8(0xf);
    }
  }
  else {
    FUN_0029e5c8(0xc);
    FUN_0029e5c8(7);
    FUN_0029e5c8(0x10);
    FUN_0029e5c8(0xf);
  }
  FUN_0029e48c();
  FUN_002b8b78(5);
  FUN_0029f10c(0,0x323232ff);
  *(unsigned int *)(param_1 + 4) = 8;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}
