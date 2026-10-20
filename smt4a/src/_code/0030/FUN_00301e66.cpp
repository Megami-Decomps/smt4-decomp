/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301e66` (_code @ 0x301e66, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ec728(int, unsigned int);
int FUN_002ecb04(int);
int FUN_002f7ac4(int, unsigned int);

/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002ecb04. */
/* Supplied declaration required: FUN_002f7ac4. */


void FUN_00301e66(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_002ecb04(param_1 + 4);
  FUN_002f7ac4(param_1 + 0x234,param_2);
  FUN_002ec728(param_1 + 0x2e4,param_2);
  return;
}

} /* extern "C" */
