/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7708` (_code @ 0x2f7708, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001292e8(unsigned int *);
int FUN_002f2878(unsigned int *);
int _ZN9Obj559608D1Ev(int);

extern unsigned char DAT_00559070; /* 0x559070 */

/* Supplied declaration required: FUN_001292e8. */
/* Supplied declaration required: FUN_002f2878. */
extern int FUN_002f5966(unsigned int *);
/* Supplied declaration required: _ZN9Obj559608D1Ev. */


void FUN_002f7708(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559070;
  FUN_001292e8(param_1);
  param_1 = param_1 + 0x10;
  FUN_002f2878(param_1);
  temp_v0 = FUN_002f5966(param_1 + -0xc);
  _ZN9Obj559608D1Ev(temp_v0 - 0x10);
  return;
}

} /* extern "C" */
