/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019241c` (_code @ 0x19241c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c6e4; /* 0x55c6e4 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a6928. */
/* Supplied declaration required: FUN_002e3494. */


unsigned int * FUN_0019241c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c6e4;
  FUN_001a6928(param_1,1);
  if (param_1[0x13] != 0) {
    FUN_002e3494();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_0019a5a0();
    param_1[0x12] = 0;
  }
  if (param_1[8] != 0) {
    FUN_0019a5a0();
    param_1[8] = 0;
  }
  return param_1;
}
