/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416d04` (_code @ 0x416d04, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5700(int, unsigned char *, int, int);

extern unsigned char LAB_003f2c00; /* 0x3f2c00 */

/* Supplied declaration required: FUN_002e5700. */


int FUN_00416d04(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e5700(param_1 + 4,&LAB_003f2c00,0x548,2);
  return param_1;
}

} /* extern "C" */
