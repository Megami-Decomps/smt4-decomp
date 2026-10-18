/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4ffc` (_code @ 0x2f4ffc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559748; /* 0x559748 */

/* Supplied declaration required: FUN_002ea9dc. */


unsigned int * FUN_002f4ffc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559748;
  param_1 = param_1 + 2;
  FUN_002ea9dc(param_1);
  return param_1 + -2;
}
