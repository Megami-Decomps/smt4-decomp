/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e8ec` (_code @ 0x30e8ec, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055cba4; /* 0x55cba4 */

/* Supplied declaration required: FUN_002e3494. */


unsigned int * FUN_0030e8ec(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055cba4;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_002e3494(param_1[5]);
  }
  FUN_002e3494(param_1[0xb]);
  FUN_002e3494(param_1[0xc]);
  return param_1;
}
