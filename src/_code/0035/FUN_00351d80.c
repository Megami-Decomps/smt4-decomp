/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351d80` (_code @ 0x351d80, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004206d0; /* 0x4206d0 */

/* Supplied declaration required: FUN_003f5a74. */


unsigned int * FUN_00351d80(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_004206d0;
  FUN_003f5a74(param_1[1]);
  return param_1;
}
