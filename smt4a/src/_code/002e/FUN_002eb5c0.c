/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb5c0` (_code @ 0x2eb5c0, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0059495a; /* 0x59495a */
extern unsigned char DAT_0062db8c; /* 0x62db8c */

/* Supplied declaration required: FUN_001223ac. */
/* Supplied declaration required: FUN_002f651c. */
/* Supplied declaration required: FUN_002f6650. */


void FUN_002eb5c0(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0059495a == '\0') {
    FUN_002f6650();
    FUN_001223ac();
  }
  FUN_002f651c(&DAT_0062db8c,param_1);
  return;
}
