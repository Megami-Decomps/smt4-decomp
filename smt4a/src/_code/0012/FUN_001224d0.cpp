/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001224d0` (_code @ 0x1224d0, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineUrlDestroy(unsigned int *);

extern unsigned char DAT_0055b2d0; /* 0x55b2d0 */

/* Supplied declaration required: onlineUrlDestroy. */


unsigned int * FUN_001224d0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b2d0;
  param_1 = param_1 + 1;
  onlineUrlDestroy(param_1);
  return param_1 + -1;
}

} /* extern "C" */
