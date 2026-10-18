/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351b2c` (_code @ 0x351b2c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_0034f260. */
/* Supplied declaration required: FUN_003518d0. */
/* Supplied declaration required: FUN_003f6228. */


int FUN_00351b2c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  
  FUN_003518d0();
  puVar1 = (unsigned int *)(param_1 + 0x158);
  FUN_0034f260(puVar1);
  FUN_003f6228(*puVar1);
  *puVar1 = 0;
  piVar2 = (int *)(param_1 + 0x28);
  FUN_002c41e8(piVar2);
  if (*piVar2 != 0) {
    software_interrupt(0x23);
    *piVar2 = 0;
  }
  return param_1;
}
