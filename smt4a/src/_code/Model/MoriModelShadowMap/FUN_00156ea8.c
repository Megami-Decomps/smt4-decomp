/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156ea8` (_code @ 0x156ea8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00156ef8; /* 0x156ef8 */

/* Supplied declaration required: FUN_0016d17c. */
/* Supplied declaration required: FUN_00178b04. */


void FUN_00156ea8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x68;
  FUN_00178b04(0x68,&LAB_00156ef8,0x3e);
  if (temp_v0 != 0) {
    FUN_0016d17c();
    *(unsigned int *)(temp_v0 + 0x48) = 0;
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
    *(unsigned int *)(temp_v0 + 0x50) = 0;
    *(unsigned int *)(temp_v0 + 0x54) = 0;
    *(unsigned int *)(temp_v0 + 0x58) = 0;
    *(unsigned int *)(temp_v0 + 0x5c) = 0;
  }
  *(int *)(param_1 + 4) = temp_v0;
  return;
}
