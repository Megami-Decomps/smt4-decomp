/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001175e4` (_code @ 0x1175e4, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559e9c; /* 0x559e9c */

/* Supplied declaration required: FUN_0012914c. */


unsigned int * FUN_001175e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559e9c;
  param_1 = param_1 + 1;
  FUN_0012914c(param_1);
  return param_1 + -1;
}
