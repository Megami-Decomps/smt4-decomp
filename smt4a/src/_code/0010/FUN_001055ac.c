/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001055ac` (_code @ 0x1055ac, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558778; /* 0x558778 */

/* Supplied declaration required: FUN_00132ed6. */


unsigned int * FUN_001055ac(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558778;
  param_1 = param_1 + 1;
  FUN_00132ed6(param_1);
  return param_1 + -1;
}
