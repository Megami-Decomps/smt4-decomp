/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024c7b4` (_code @ 0x24c7b4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ae3f0. */


unsigned int FUN_0024c7b4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    return 99;
  }
  FUN_002ae3f0();
  switch(*(unsigned char *)(param_1 + 0x23)) {
  case 0:
  case 1:
  case 2:
    return 2;
  default:
    return 0;
  case 4:
    return 1;
  case 5:
  case 6:
  case 10:
    return 4;
  case 7:
  case 8:
  case 9:
    return 3;
  }
}
