/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219540` (_code @ 0x219540, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b4854. */


int FUN_00219540(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b4854();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b4854();
  return (unsigned int)*(unsigned char *)(temp_v0 + 0x6f) - (unsigned int)*(unsigned char *)(temp_v1 + 0x6f);
}
