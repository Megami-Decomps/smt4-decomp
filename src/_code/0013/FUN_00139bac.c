/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139bac` (_code @ 0x139bac, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */

/* Supplied declaration required: FUN_00146830. */


int FUN_00139bac(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = DAT_0044e460;
    FUN_00146830(DAT_0044e460,param_1);
    return temp_v0;
  }
  return -0x375f5808;
}
