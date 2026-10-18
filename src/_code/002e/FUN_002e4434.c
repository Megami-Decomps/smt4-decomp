/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4434` (_code @ 0x2e4434, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_002e4434(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00434210;
  if ((DAT_00434210 == 0) ||
     (FUN_002b9364(), (unsigned int)*(unsigned short *)(param_1 + 0x90) != *(unsigned int *)(temp_v0 + 0x2f8))) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
