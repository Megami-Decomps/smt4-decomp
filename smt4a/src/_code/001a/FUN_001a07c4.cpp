/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a07c4` (_code @ 0x1a07c4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdGxGetPhysicalAddress(...);

/* Supplied declaration required: asdGxGetPhysicalAddress. */


unsigned int * FUN_001a07c4(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_1 = param_4 >> 3;
  param_1[1] = 0x804f0238;
  *param_2 = (unsigned int)(param_1 + 2);
  param_1[2] = 0;
  temp_v0 = asdGxGetPhysicalAddress(param_3);
  param_1[3] = temp_v0 >> 3;
  temp_v0 = asdGxGetPhysicalAddress(param_1 + 6);
  param_1[4] = temp_v0 >> 3;
  param_1[5] = 1;
  return param_1 + 6;
}

} /* extern "C" */
