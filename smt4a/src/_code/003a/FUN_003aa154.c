/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa154` (_code @ 0x3aa154, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192690. */


int FUN_003aa154(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00192690();
  temp_v1 = (unsigned int)*param_2;
  FUN_00192690();
  return (unsigned int)*(unsigned char *)(temp_v1 + 0x24) - (unsigned int)*(unsigned char *)(temp_v0 + 0x24);
}
