/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003943bc` (_code @ 0x3943bc, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00351ca0. */


int * FUN_003943bc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((char)param_1[1] == '\x01') {
    FUN_00351ca0();
    *(unsigned char *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
