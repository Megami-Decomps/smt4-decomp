/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0eac` (_code @ 0x3e0eac, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b5b44. */


int FUN_003e0eac(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 86400000;
  FUN_002b5b44(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (unsigned int)(0x83037bff < *param_1),86400000,0)
  ;
  return (temp_v0 / 3600000) % 0x18;
}
