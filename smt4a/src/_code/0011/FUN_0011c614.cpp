/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c614` (_code @ 0x11c614, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ed20e(unsigned int *);
int FUN_00311298(unsigned int *);

extern unsigned char DAT_0055a838; /* 0x55a838 */

/* Supplied declaration required: FUN_002ed20e. */
/* Supplied declaration required: FUN_00311298. */


void FUN_0011c614(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055a838;
  param_1 = param_1 + 0x18;
  FUN_002ed20e(param_1);
  FUN_00311298(param_1 + -0x18);
  return;
}

} /* extern "C" */
