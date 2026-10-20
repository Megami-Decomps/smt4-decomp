/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f32ac` (_code @ 0x2f32ac, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e93ec(unsigned int *, unsigned int);
int FUN_002e9672(unsigned int *, unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_005585d0; /* 0x5585d0 */

/* Supplied declaration required: FUN_002e93ec. */
/* Supplied declaration required: FUN_002e9672. */


unsigned int * FUN_002f32ac(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005585d0;
  FUN_002e9672(param_1,param_2,param_3,param_2);
  FUN_002e93ec(param_1,param_2);
  *(unsigned short *)((int)param_1 + 6) = (unsigned short)((param_3 & 0xff) << 8) | ((unsigned short)(param_3 >> 8) & 0xff);
  return param_1;
}

} /* extern "C" */
