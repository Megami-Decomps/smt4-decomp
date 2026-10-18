/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9300` (_code @ 0x2e9300, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055affc; /* 0x55affc */

/* Supplied declaration required: FUN_0030ff80. */


unsigned int * FUN_002e9300(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055affc;
  FUN_0030ff80(param_1 + 1);
  return param_1;
}
