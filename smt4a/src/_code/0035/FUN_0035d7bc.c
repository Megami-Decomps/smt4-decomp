/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d7bc` (_code @ 0x35d7bc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_0035d7bc(int param_1)

{
/* irregular: 5 native warning(s); review required */
  software_interrupt(0x24);
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(param_1 + 0x48) = 1;
  FUN_001a0d08(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  FUN_001469a8(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x4c) = 0;
  }
  return;
}
