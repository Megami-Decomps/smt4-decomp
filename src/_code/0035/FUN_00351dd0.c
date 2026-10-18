/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351dd0` (_code @ 0x351dd0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420718; /* 0x420718 */

/* Supplied declaration required: FUN_003f680c. */


unsigned int * FUN_00351dd0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420718;
  FUN_003f680c(param_1[1]);
  return param_1;
}
