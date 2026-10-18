/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047da90` (_code @ 0x47da90, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_004262fc. */


int * FUN_0047da90(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((char)param_1[1] == '\x01') {
    FUN_004262fc();
    *(unsigned char *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
