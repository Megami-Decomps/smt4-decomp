/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001104c0` (_code @ 0x1104c0, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00594b1c; /* 0x594b1c */

/* Supplied declaration required: FUN_002f4f20. */


void FUN_001104c0(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x10) = param_2;
  FUN_002f4f20(&DAT_00594b1c,1);
  return;
}
