/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa0f4` (_code @ 0x2fa0f4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f28bc(unsigned int *);

extern unsigned char DAT_005597dc; /* 0x5597dc */

extern int FUN_002eb624(unsigned int *);
/* Supplied declaration required: FUN_002f28bc. */


int FUN_002fa0f4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005597dc;
  param_1 = param_1 + 0x2c;
  FUN_002f28bc(param_1);
  param_1 = param_1 + -0x1c;
  FUN_002f28bc(param_1);
  temp_v0 = FUN_002eb624(param_1 + -0xc);
  return temp_v0 - 0x10;
}

} /* extern "C" */
