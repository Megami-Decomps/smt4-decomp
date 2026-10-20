/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117804` (_code @ 0x117804, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00134ebc(unsigned int *, int);

extern unsigned char DAT_00559ec4; /* 0x559ec4 */

/* Supplied declaration required: FUN_00134ebc. */


unsigned int * FUN_00117804(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (unsigned int)&DAT_00559ec4;
  FUN_00134ebc(param_1 + 2,0x10);
  return param_1;
}

} /* extern "C" */
