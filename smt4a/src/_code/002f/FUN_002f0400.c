/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0400` (_code @ 0x2f0400, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00594b28; /* 0x594b28 */

/* Supplied declaration required: FUN_0012350c. */


int FUN_002f0400(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00594b28 != 0) {
    temp_v0 = DAT_00594b28;
    FUN_0012350c(DAT_00594b28,param_1,param_2);
    return temp_v0;
  }
  return 1;
}
