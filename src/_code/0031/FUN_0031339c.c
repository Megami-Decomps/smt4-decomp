/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031339c` (_code @ 0x31339c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ae4c4. */


int FUN_0031339c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002ae4c4();
  temp_v1 = (unsigned int)*param_2;
  FUN_002ae4c4();
  return (unsigned int)*(unsigned char *)(temp_v1 + 0x54) - (unsigned int)*(unsigned char *)(temp_v0 + 0x54);
}
