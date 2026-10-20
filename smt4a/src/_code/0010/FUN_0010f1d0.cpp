/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f1d0` (_code @ 0x10f1d0, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eed74(unsigned int *);

extern unsigned char DAT_005592d4; /* 0x5592d4 */

/* Supplied declaration required: FUN_002eed74. */


unsigned int * FUN_0010f1d0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005592d4;
  FUN_002eed74(param_1);
  return param_1;
}

} /* extern "C" */
