/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001223ac` (_code @ 0x1223ac, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f670c(unsigned char *, unsigned int);

extern unsigned char DAT_0059495a; /* 0x59495a */
extern unsigned char DAT_0062db8c; /* 0x62db8c */

/* Supplied declaration required: FUN_002f670c. */


void FUN_001223ac(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f670c(&DAT_0062db8c,param_1);
  DAT_0059495a = 1;
  return;
}

} /* extern "C" */
