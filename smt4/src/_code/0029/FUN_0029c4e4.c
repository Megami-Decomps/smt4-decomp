/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c4e4` (_code @ 0x29c4e4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_0024d7d0. */


void FUN_0029c4e4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e144;
  FUN_0024d7d0(DAT_0044e144 + 0x18b0,param_1);
  if (param_2 != 0) {
    *(unsigned short *)(temp_v0 + 0x18b8) = *(unsigned short *)(temp_v0 + 0x18bc);
    *(unsigned short *)(temp_v0 + 0x18ba) = *(unsigned short *)(temp_v0 + 0x18be);
  }
  return;
}
