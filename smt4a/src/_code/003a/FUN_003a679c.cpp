/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a679c` (_code @ 0x3a679c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);

/* Supplied declaration required: FUN_001aba54. */


unsigned int FUN_003a679c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_001aba54();
    switch(*(unsigned int *)(param_1 + 0x28) & 0x1f) {
    case 0:
      return 4;
    case 1:
      return 5;
    case 2:
      return 6;
    case 3:
      return 7;
    case 4:
      return 10;
    case 5:
      return 8;
    case 6:
      return 9;
    case 7:
      return 2;
    case 8:
      return 3;
    case 9:
      return 0xb;
    case 10:
      return 0;
    case 0xb:
      return 1;
    case 0xc:
      return 0xc;
    default:
      return 0xd;
    }
  }
  return 99;
}

} /* extern "C" */
