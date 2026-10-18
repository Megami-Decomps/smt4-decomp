/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6868` (_code @ 0x3a6868, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001aba54. */


unsigned int FUN_003a6868(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_001aba54();
    switch(*(unsigned char *)(param_1 + 0x23)) {
    default:
      return 0;
    case 3:
      return 1;
    case 4:
      return 2;
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
  return 99;
}
