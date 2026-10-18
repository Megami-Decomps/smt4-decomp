/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215994` (_code @ 0x215994, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002159dc. */


void FUN_00215994(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  switch(param_1) {
  case 0:
    FUN_002159dc(0);
    return;
  case 1:
    FUN_002159dc(1);
    return;
  case 2:
    FUN_002159dc(2);
    return;
  case 3:
    FUN_002159dc(3);
    return;
  case 4:
    *(unsigned char *)(DAT_0057f69c + 0x27ec4) = 4;
    return;
  default:
    return;
  }
}
