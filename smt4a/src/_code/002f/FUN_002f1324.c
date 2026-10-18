/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1324` (_code @ 0x2f1324, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002efd60. */


void FUN_002f1324(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_002efd60(param_2);
  *param_1 = temp_v0;
  return;
}
