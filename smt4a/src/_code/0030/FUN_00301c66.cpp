/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301c66` (_code @ 0x301c66, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030d3f4(unsigned char *, unsigned int);

/* Supplied declaration required: FUN_0030d3f4. */


void FUN_00301c66(unsigned char *param_1,unsigned char *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_2;
  FUN_0030d3f4(param_1 + 8,param_3);
  return;
}

} /* extern "C" */
