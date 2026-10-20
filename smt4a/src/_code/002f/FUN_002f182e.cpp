/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f182e` (_code @ 0x2f182e, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int allocArrayWords(unsigned int [2], unsigned int, unsigned int);

/* Supplied declaration required: allocArrayWords. */


void FUN_002f182e(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  allocArrayWords(temp_v0,(param_2 + 0x1fU) >> 5,*param_1);
  return;
}

} /* extern "C" */
