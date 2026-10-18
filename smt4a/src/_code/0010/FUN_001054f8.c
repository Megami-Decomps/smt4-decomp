/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001054f8` (_code @ 0x1054f8, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558744; /* 0x558744 */

/* Supplied declaration required: FUN_002eb9ea. */


unsigned int * FUN_001054f8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558744;
  param_1 = param_1 + 4;
  FUN_002eb9ea(param_1);
  return param_1 + -4;
}
