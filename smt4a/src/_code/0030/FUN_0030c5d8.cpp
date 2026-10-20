/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c5d8` (_code @ 0x30c5d8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9520(...);

extern unsigned char DAT_00559504; /* 0x559504 */
extern unsigned char DAT_00559ed4; /* 0x559ed4 */

/* Supplied declaration required: FUN_002e9520. */


void FUN_0030c5d8(unsigned int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (unsigned int)&DAT_00559ed4;
    *(unsigned char *)(param_2 + 1) = *(unsigned char *)(param_3 + 4);
    temp_v0 = FUN_002e9520(param_2 + 2,param_3 + 8);
    temp_v0 = FUN_002e9520(temp_v0 + 8,param_3 + 0x10);
    *(unsigned char **)(temp_v0 - 0x10) = &DAT_00559504;
  }
  return;
}

} /* extern "C" */
