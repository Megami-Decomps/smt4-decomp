/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e624` (_code @ 0x37e624, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0037c280(unsigned int, int);

extern unsigned int FUN_002bd440(void);
/* Supplied declaration required: FUN_0037c280. */


void FUN_0037e624(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002bd440();
  FUN_0037c280(temp_v0,param_1 + 0x50);
  *(unsigned char *)(param_1 + 0xd) = 1;
  return;
}

} /* extern "C" */
