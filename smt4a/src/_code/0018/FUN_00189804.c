/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189804` (_code @ 0x189804, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058928c; /* 0x58928c */

/* Supplied declaration required: FUN_001a1098. */


int FUN_00189804(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0058928c != 0) {
    temp_v0 = DAT_0058928c;
    FUN_001a1098(DAT_0058928c,param_1);
    return temp_v0;
  }
  return -0x375f5808;
}
