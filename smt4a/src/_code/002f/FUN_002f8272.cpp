/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8272` (_code @ 0x2f8272, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030d48e(unsigned int, unsigned int);

extern unsigned int FUN_0030d450(int);
/* Supplied declaration required: FUN_0030d48e. */


void FUN_002f8272(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_0030d450(param_2 + 4);
  FUN_0030d48e(param_1,temp_v0);
  return;
}

} /* extern "C" */
