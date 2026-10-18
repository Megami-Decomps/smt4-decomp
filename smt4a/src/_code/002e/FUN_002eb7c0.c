/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb7c0` (_code @ 0x2eb7c0, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ae2c; /* 0x55ae2c */

/* Supplied declaration required: FUN_002ea0b8. */


void FUN_002eb7c0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055ae2c;
  FUN_002ea0b8();
  return;
}
