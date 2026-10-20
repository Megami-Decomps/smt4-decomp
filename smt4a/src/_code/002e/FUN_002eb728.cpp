/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb728` (_code @ 0x2eb728, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012cf5c(unsigned int *);
int FUN_002eb744(unsigned int *);

extern unsigned char DAT_005586e8; /* 0x5586e8 */

/* Supplied declaration required: FUN_0012cf5c. */
/* Supplied declaration required: FUN_002eb744. */


unsigned int * FUN_002eb728(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005586e8;
  FUN_002eb744(param_1);
  param_1 = param_1 + 1;
  FUN_0012cf5c(param_1);
  return param_1 + -1;
}

} /* extern "C" */
