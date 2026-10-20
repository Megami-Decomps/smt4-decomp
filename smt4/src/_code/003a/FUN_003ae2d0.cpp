/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae2d0` (_code @ 0x3ae2d0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4ddc(int, int);

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_001f4ddc. */


void FUN_003ae2d0(unsigned int param_1,short param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001f4ddc(DAT_00439ca8 + 0x2460,(int)param_2);
  return;
}

} /* extern "C" */
