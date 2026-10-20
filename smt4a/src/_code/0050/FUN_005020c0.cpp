/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005020c0` (_code @ 0x5020c0, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ll_sdiv(unsigned int, unsigned int, int, int);

/* Supplied declaration required: ll_sdiv. */


int FUN_005020c0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 86400000;
  ll_sdiv(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (unsigned int)(0x83037bff < *param_1),86400000,0);
  return (temp_v0 / 3600000) % 0x18;
}

} /* extern "C" */
