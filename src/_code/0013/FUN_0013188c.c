/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013188c` (_code @ 0x13188c, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421e24; /* 0x421e24 */

/* Supplied declaration required: FUN_00141080. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c6c00. */


unsigned int * FUN_0013188c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421e24;
  FUN_00141080(param_1,1);
  if (param_1[0x13] != 0) {
    FUN_002c6c00();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_002c4360();
    param_1[0x12] = 0;
  }
  if (param_1[8] != 0) {
    FUN_002c4360();
    param_1[8] = 0;
  }
  return param_1;
}
