/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002503d4` (_code @ 0x2503d4, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);

/* Supplied declaration required: FUN_002ae164. */


unsigned int FUN_002503d4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    return 99;
  }
  FUN_002ae164();
  switch((*(unsigned int *)(param_1 + 0x28) & 0x1ff) >> 5) {
  case 0:
  case 2:
  case 7:
    return 1;
  default:
    return 0;
  case 4:
    return 3;
  case 6:
    return 2;
  }
}

} /* extern "C" */
