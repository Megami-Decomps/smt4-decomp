/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d334` (_code @ 0x27d334, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e58; /* 0x447e58 */

/* Supplied declaration required: FUN_001e3408. */


void FUN_0027d334(short param_1,short param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447e58;
  *(short *)(DAT_00447e58 + 0xe42) = param_1;
  *(short *)(temp_v0 + 0xe44) = param_2;
  FUN_001e3408((int)param_1,(int)param_2,0);
  return;
}
