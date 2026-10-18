/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fba98` (_code @ 0x2fba98, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559b60; /* 0x559b60 */

/* Supplied declaration required: FUN_00115b86. */
/* Supplied declaration required: FUN_00132bc2. */
/* Supplied declaration required: FUN_002f4fd8. */


void FUN_002fba98(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559b60;
  FUN_00115b86(param_1);
  param_1 = param_1 + 8;
  FUN_00132bc2(param_1);
  FUN_002f4fd8(param_1 + -8);
  return;
}
