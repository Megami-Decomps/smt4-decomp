/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6e5c` (_code @ 0x2e6e5c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b294; /* 0x55b294 */

/* Supplied declaration required: FUN_00303d52. */


unsigned int * FUN_002e6e5c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b294;
  FUN_00303d52(param_1);
  return param_1;
}
