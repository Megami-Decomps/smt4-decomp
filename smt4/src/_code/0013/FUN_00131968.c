/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131968` (_code @ 0x131968, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004221dc; /* 0x4221dc */

/* Supplied declaration required: FUN_00141710. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c6a10. */


unsigned int * FUN_00131968(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_004221dc;
  FUN_00141710(param_1,1);
  if (param_1[0x13] != 0) {
    FUN_002c6a10();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_002c415c();
    param_1[0x12] = 0;
  }
  if (param_1[8] != 0) {
    FUN_002c415c();
    param_1[8] = 0;
  }
  return param_1;
}
