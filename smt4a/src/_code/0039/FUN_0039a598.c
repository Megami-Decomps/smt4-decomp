/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a598` (_code @ 0x39a598, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001aba54. */


unsigned int FUN_0039a598(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_001aba54();
    switch((*(unsigned int *)(param_1 + 0x28) & 0x1ff) >> 5) {
    case 0:
      return 7;
    case 1:
      return 5;
    case 2:
      return 3;
    case 3:
      return 1;
    case 4:
      return 8;
    case 5:
      return 4;
    case 6:
      return 6;
    case 7:
      return 2;
    case 8:
      return 0;
    default:
      return 9;
    }
  }
  return 99;
}
