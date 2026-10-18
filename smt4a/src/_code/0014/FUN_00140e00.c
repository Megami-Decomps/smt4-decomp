/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140e00` (_code @ 0x140e00, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005b408c; /* 0x5b408c */

/* Supplied declaration required: FUN_00170390. */
/* Supplied declaration required: FUN_001703b0. */


int FUN_00140e00(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (int)DAT_005b408c;
  DAT_005b408c = (char)param_1;
  if (param_1 != 0) {
    FUN_00170390();
  }
  else {
    FUN_001703b0(1);
  }
  return temp_v0;
}
