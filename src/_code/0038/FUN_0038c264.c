/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c264` (_code @ 0x38c264, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421e64; /* 0x421e64 */

/* Supplied declaration required: FUN_001a9e24. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int * FUN_0038c264(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421e64;
  if (param_1[2] != 0) {
    FUN_001a9e24();
    FUN_002c4360(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}
