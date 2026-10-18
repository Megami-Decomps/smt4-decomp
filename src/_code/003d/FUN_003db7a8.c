/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db7a8` (_code @ 0x3db7a8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00247214(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ae3f0. */


void FUN_003db7a8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002ae3f0(param_2);
  temp_v0 = FUN_00247214(param_3,param_2);
  *(unsigned int *)(param_1 + 0x1cfc) = temp_v0;
  return;
}
