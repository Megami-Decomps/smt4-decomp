/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002947f4` (_code @ 0x2947f4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00335124; /* 0x335124 */
extern unsigned char DAT_004206f0; /* 0x4206f0 */

/* Supplied declaration required: FUN_002c5d5c. */


void FUN_002947f4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = param_1 + 4;
  *param_1 = (unsigned int)&DAT_004206f0;
  FUN_002c5d5c(puVar1,&LAB_00335124,0x50,3);
  puVar1[-3] = 0;
  puVar1[-2] = 0;
  puVar1[-1] = 1;
  return;
}
