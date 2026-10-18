/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351b70` (_code @ 0x351b70, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420a88; /* 0x420a88 */

/* Supplied declaration required: FUN_003f5848. */


unsigned int * FUN_00351b70(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420a88;
  FUN_003f5848(param_1[1]);
  return param_1;
}
