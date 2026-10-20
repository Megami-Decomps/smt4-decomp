/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042616c` (_code @ 0x42616c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00512ebc(unsigned int);

extern unsigned char DAT_00557f34; /* 0x557f34 */

/* Supplied declaration required: FUN_00512ebc. */


unsigned int * FUN_0042616c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557f34;
  FUN_00512ebc(param_1[1]);
  return param_1;
}

} /* extern "C" */
