/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001467ac` (_code @ 0x1467ac, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */

/* Supplied declaration required: FUN_0014f5b4. */


unsigned int FUN_001467ac(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_2 = 0xffffffff;
  if (DAT_0044e460 != 0) {
    FUN_0014f5b4(DAT_0044e460,param_1,param_2);
  }
  return 0xc8a0a7f8;
}
